#include <boost/asio/io_service.hpp>
#include <boost/asio/write.hpp>
#include <boost/asio/ip/tcp.hpp>
#include "stream-client.h"

using namespace boost::asio;
using namespace boost::asio::ip;

using namespace ross_damaris::streaming;
using namespace std;

void StreamClient::write(const flatbuffers::FlatBufferBuilder& data)
{
    sample_msg msg;
    msg.size = data.GetSize();
    msg.buffer = data.GetBufferPointer();
    write_msgs_.push_back(msg);
}

void StreamClient::close()
{
    service_.post(
            [this]() {
                cout << "StreamClient closing socket\n";
                socket_.close();
            });
}

void StreamClient::do_connect(tcp::resolver::iterator it)
{
    boost::asio::async_connect(socket_, it,
            [this](boost::system::error_code ec, tcp::resolver::iterator it)
            {
                if (ec)
                {
                    socket_.close();
                    cout << "StreamClient Error do_connect() closing socket" << endl;
                }
                else
                {
                    cout << "StreamClient successfully connected" << endl;
                    do_read();
                }
            });
}

void StreamClient::do_write()
{
    if (write_msgs_.empty())
        return;
    std::vector<const_buffer> buf;
    buf.push_back(boost::asio::buffer(&write_msgs_.front().size, sizeof(flatbuffers::uoffset_t)));
    buf.push_back(boost::asio::buffer(write_msgs_.front().buffer, write_msgs_.front().size));
    boost::asio::async_write(socket_, buf,
            [this](boost::system::error_code ec, std::size_t /*length*/)
            {
                if (!ec)
                {
                    write_msgs_.pop_front();
                    if (!write_msgs_.empty())
                        do_write();
                    else
                        do_read();
                }
                else
                {
                    socket_.close();
                    cout << "StreamClient Error do_write() closing socket" << endl;
                }
            });
}

void StreamClient::do_read()
{
    boost::asio::async_read(socket_, 
            boost::asio::buffer(dummy_buf_, 0),
            [this](boost::system::error_code ec, std::size_t /*len*/)
            {
                if (!ec)
                {
                    if (!write_msgs_.empty())
                        do_write();
                    else
                        do_read();
                }
                else
                {
                    socket_.close();
                    cout << "StreamClient Error do_read() closing socket" << endl;
                }
            });
}


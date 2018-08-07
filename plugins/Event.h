#ifndef EVENT_H
#define EVENT_H

namespace opt_debug{

class Event
{
    private:

    int src_lp;
    int dest_lp;
    float send_ts;
    float recv_ts;
    float gvt; // gvt when this event was committed

    int sync_type;
    int damaris_iteration;


    public:

    // constructor
    Event(int src, int dest, float send, float recv);

    // destructor
    ~Event() {}

    virtual int get_src_lp() const { return src_lp; }
    virtual int get_dest_lp() const { return dest_lp; }
    virtual float get_send_ts() const { return send_ts; }
    virtual float get_recv_ts() const { return recv_ts; }

    virtual void set_gvt(float cur_gvt) { gvt = cur_gvt; }
    virtual float get_gvt() const { return gvt; }
    virtual void set_sync_type(int sync) { sync_type = sync; }
    virtual int get_sync_type() const { return sync_type; }
    virtual void set_damaris_iteration(int i) { damaris_iteration = i; }
    virtual int get_damaris_iteration() const { return damaris_iteration; }
};


}

#endif // EVENT_H
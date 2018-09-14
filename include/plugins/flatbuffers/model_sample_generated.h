// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MODELSAMPLE_ROSS_DAMARIS_SAMPLE_H_
#define FLATBUFFERS_GENERATED_MODELSAMPLE_ROSS_DAMARIS_SAMPLE_H_

#include "flatbuffers/flatbuffers.h"

namespace ross_damaris {
namespace sample {

struct ModelData;
struct ModelDataT;

struct Param_radix_double;

struct Param_radix_long;

struct DflyCustomRouter;
struct DflyCustomRouterT;

struct DflyCustomTerminal;
struct DflyCustomTerminalT;

inline const flatbuffers::TypeTable *ModelDataTypeTable();

inline const flatbuffers::TypeTable *Param_radix_doubleTypeTable();

inline const flatbuffers::TypeTable *Param_radix_longTypeTable();

inline const flatbuffers::TypeTable *DflyCustomRouterTypeTable();

inline const flatbuffers::TypeTable *DflyCustomTerminalTypeTable();

enum ModelVariables {
  ModelVariables_router_id = 0,
  ModelVariables_terminal_id = 1,
  ModelVariables_busy_time = 2,
  ModelVariables_link_traffic = 3,
  ModelVariables_fin_chunks = 4,
  ModelVariables_data_size = 5,
  ModelVariables_fin_hops = 6,
  ModelVariables_fin_chunks_time = 7,
  ModelVariables_MIN = ModelVariables_router_id,
  ModelVariables_MAX = ModelVariables_fin_chunks_time
};

inline const ModelVariables (&EnumValuesModelVariables())[8] {
  static const ModelVariables values[] = {
    ModelVariables_router_id,
    ModelVariables_terminal_id,
    ModelVariables_busy_time,
    ModelVariables_link_traffic,
    ModelVariables_fin_chunks,
    ModelVariables_data_size,
    ModelVariables_fin_hops,
    ModelVariables_fin_chunks_time
  };
  return values;
}

inline const char * const *EnumNamesModelVariables() {
  static const char * const names[] = {
    "router_id",
    "terminal_id",
    "busy_time",
    "link_traffic",
    "fin_chunks",
    "data_size",
    "fin_hops",
    "fin_chunks_time",
    nullptr
  };
  return names;
}

inline const char *EnumNameModelVariables(ModelVariables e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesModelVariables()[index];
}

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) Param_radix_double FLATBUFFERS_FINAL_CLASS {
 private:
  double values_;

 public:
  Param_radix_double() {
    memset(this, 0, sizeof(Param_radix_double));
  }
  Param_radix_double(double _values)
      : values_(flatbuffers::EndianScalar(_values)) {
  }
  double values() const {
    return flatbuffers::EndianScalar(values_);
  }
};
FLATBUFFERS_STRUCT_END(Param_radix_double, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) Param_radix_long FLATBUFFERS_FINAL_CLASS {
 private:
  int64_t values_;

 public:
  Param_radix_long() {
    memset(this, 0, sizeof(Param_radix_long));
  }
  Param_radix_long(int64_t _values)
      : values_(flatbuffers::EndianScalar(_values)) {
  }
  int64_t values() const {
    return flatbuffers::EndianScalar(values_);
  }
};
FLATBUFFERS_STRUCT_END(Param_radix_long, 8);

struct ModelDataT : public flatbuffers::NativeTable {
  typedef ModelData TableType;
  int32_t model_ref;
  std::vector<std::unique_ptr<DflyCustomRouterT>> routers;
  std::vector<std::unique_ptr<DflyCustomTerminalT>> terminals;
  ModelDataT()
      : model_ref(0) {
  }
};

struct ModelData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ModelDataT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return ModelDataTypeTable();
  }
  enum {
    VT_MODEL_REF = 4,
    VT_ROUTERS = 6,
    VT_TERMINALS = 8
  };
  int32_t model_ref() const {
    return GetField<int32_t>(VT_MODEL_REF, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<DflyCustomRouter>> *routers() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<DflyCustomRouter>> *>(VT_ROUTERS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<DflyCustomTerminal>> *terminals() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<DflyCustomTerminal>> *>(VT_TERMINALS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_MODEL_REF) &&
           VerifyOffset(verifier, VT_ROUTERS) &&
           verifier.VerifyVector(routers()) &&
           verifier.VerifyVectorOfTables(routers()) &&
           VerifyOffset(verifier, VT_TERMINALS) &&
           verifier.VerifyVector(terminals()) &&
           verifier.VerifyVectorOfTables(terminals()) &&
           verifier.EndTable();
  }
  ModelDataT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ModelDataT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ModelData> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelDataT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ModelDataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_model_ref(int32_t model_ref) {
    fbb_.AddElement<int32_t>(ModelData::VT_MODEL_REF, model_ref, 0);
  }
  void add_routers(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<DflyCustomRouter>>> routers) {
    fbb_.AddOffset(ModelData::VT_ROUTERS, routers);
  }
  void add_terminals(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<DflyCustomTerminal>>> terminals) {
    fbb_.AddOffset(ModelData::VT_TERMINALS, terminals);
  }
  explicit ModelDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ModelDataBuilder &operator=(const ModelDataBuilder &);
  flatbuffers::Offset<ModelData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ModelData>(end);
    return o;
  }
};

inline flatbuffers::Offset<ModelData> CreateModelData(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t model_ref = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<DflyCustomRouter>>> routers = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<DflyCustomTerminal>>> terminals = 0) {
  ModelDataBuilder builder_(_fbb);
  builder_.add_terminals(terminals);
  builder_.add_routers(routers);
  builder_.add_model_ref(model_ref);
  return builder_.Finish();
}

inline flatbuffers::Offset<ModelData> CreateModelDataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t model_ref = 0,
    const std::vector<flatbuffers::Offset<DflyCustomRouter>> *routers = nullptr,
    const std::vector<flatbuffers::Offset<DflyCustomTerminal>> *terminals = nullptr) {
  return ross_damaris::sample::CreateModelData(
      _fbb,
      model_ref,
      routers ? _fbb.CreateVector<flatbuffers::Offset<DflyCustomRouter>>(*routers) : 0,
      terminals ? _fbb.CreateVector<flatbuffers::Offset<DflyCustomTerminal>>(*terminals) : 0);
}

flatbuffers::Offset<ModelData> CreateModelData(flatbuffers::FlatBufferBuilder &_fbb, const ModelDataT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct DflyCustomRouterT : public flatbuffers::NativeTable {
  typedef DflyCustomRouter TableType;
  int32_t router_id;
  std::vector<Param_radix_double> busy_time;
  std::vector<Param_radix_long> link_traffic;
  DflyCustomRouterT()
      : router_id(0) {
  }
};

struct DflyCustomRouter FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DflyCustomRouterT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return DflyCustomRouterTypeTable();
  }
  enum {
    VT_ROUTER_ID = 4,
    VT_BUSY_TIME = 6,
    VT_LINK_TRAFFIC = 8
  };
  int32_t router_id() const {
    return GetField<int32_t>(VT_ROUTER_ID, 0);
  }
  const flatbuffers::Vector<const Param_radix_double *> *busy_time() const {
    return GetPointer<const flatbuffers::Vector<const Param_radix_double *> *>(VT_BUSY_TIME);
  }
  const flatbuffers::Vector<const Param_radix_long *> *link_traffic() const {
    return GetPointer<const flatbuffers::Vector<const Param_radix_long *> *>(VT_LINK_TRAFFIC);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ROUTER_ID) &&
           VerifyOffset(verifier, VT_BUSY_TIME) &&
           verifier.VerifyVector(busy_time()) &&
           VerifyOffset(verifier, VT_LINK_TRAFFIC) &&
           verifier.VerifyVector(link_traffic()) &&
           verifier.EndTable();
  }
  DflyCustomRouterT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DflyCustomRouterT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<DflyCustomRouter> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomRouterT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DflyCustomRouterBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_router_id(int32_t router_id) {
    fbb_.AddElement<int32_t>(DflyCustomRouter::VT_ROUTER_ID, router_id, 0);
  }
  void add_busy_time(flatbuffers::Offset<flatbuffers::Vector<const Param_radix_double *>> busy_time) {
    fbb_.AddOffset(DflyCustomRouter::VT_BUSY_TIME, busy_time);
  }
  void add_link_traffic(flatbuffers::Offset<flatbuffers::Vector<const Param_radix_long *>> link_traffic) {
    fbb_.AddOffset(DflyCustomRouter::VT_LINK_TRAFFIC, link_traffic);
  }
  explicit DflyCustomRouterBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DflyCustomRouterBuilder &operator=(const DflyCustomRouterBuilder &);
  flatbuffers::Offset<DflyCustomRouter> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DflyCustomRouter>(end);
    return o;
  }
};

inline flatbuffers::Offset<DflyCustomRouter> CreateDflyCustomRouter(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t router_id = 0,
    flatbuffers::Offset<flatbuffers::Vector<const Param_radix_double *>> busy_time = 0,
    flatbuffers::Offset<flatbuffers::Vector<const Param_radix_long *>> link_traffic = 0) {
  DflyCustomRouterBuilder builder_(_fbb);
  builder_.add_link_traffic(link_traffic);
  builder_.add_busy_time(busy_time);
  builder_.add_router_id(router_id);
  return builder_.Finish();
}

inline flatbuffers::Offset<DflyCustomRouter> CreateDflyCustomRouterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t router_id = 0,
    const std::vector<Param_radix_double> *busy_time = nullptr,
    const std::vector<Param_radix_long> *link_traffic = nullptr) {
  return ross_damaris::sample::CreateDflyCustomRouter(
      _fbb,
      router_id,
      busy_time ? _fbb.CreateVectorOfStructs<Param_radix_double>(*busy_time) : 0,
      link_traffic ? _fbb.CreateVectorOfStructs<Param_radix_long>(*link_traffic) : 0);
}

flatbuffers::Offset<DflyCustomRouter> CreateDflyCustomRouter(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomRouterT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct DflyCustomTerminalT : public flatbuffers::NativeTable {
  typedef DflyCustomTerminal TableType;
  int32_t terminal_id;
  int64_t fin_chunks;
  int64_t data_size;
  double fin_hops;
  double fin_chunks_time;
  double busy_time;
  DflyCustomTerminalT()
      : terminal_id(0),
        fin_chunks(0),
        data_size(0),
        fin_hops(0.0),
        fin_chunks_time(0.0),
        busy_time(0.0) {
  }
};

struct DflyCustomTerminal FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DflyCustomTerminalT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return DflyCustomTerminalTypeTable();
  }
  enum {
    VT_TERMINAL_ID = 4,
    VT_FIN_CHUNKS = 6,
    VT_DATA_SIZE = 8,
    VT_FIN_HOPS = 10,
    VT_FIN_CHUNKS_TIME = 12,
    VT_BUSY_TIME = 14
  };
  int32_t terminal_id() const {
    return GetField<int32_t>(VT_TERMINAL_ID, 0);
  }
  int64_t fin_chunks() const {
    return GetField<int64_t>(VT_FIN_CHUNKS, 0);
  }
  int64_t data_size() const {
    return GetField<int64_t>(VT_DATA_SIZE, 0);
  }
  double fin_hops() const {
    return GetField<double>(VT_FIN_HOPS, 0.0);
  }
  double fin_chunks_time() const {
    return GetField<double>(VT_FIN_CHUNKS_TIME, 0.0);
  }
  double busy_time() const {
    return GetField<double>(VT_BUSY_TIME, 0.0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TERMINAL_ID) &&
           VerifyField<int64_t>(verifier, VT_FIN_CHUNKS) &&
           VerifyField<int64_t>(verifier, VT_DATA_SIZE) &&
           VerifyField<double>(verifier, VT_FIN_HOPS) &&
           VerifyField<double>(verifier, VT_FIN_CHUNKS_TIME) &&
           VerifyField<double>(verifier, VT_BUSY_TIME) &&
           verifier.EndTable();
  }
  DflyCustomTerminalT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DflyCustomTerminalT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<DflyCustomTerminal> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomTerminalT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DflyCustomTerminalBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_terminal_id(int32_t terminal_id) {
    fbb_.AddElement<int32_t>(DflyCustomTerminal::VT_TERMINAL_ID, terminal_id, 0);
  }
  void add_fin_chunks(int64_t fin_chunks) {
    fbb_.AddElement<int64_t>(DflyCustomTerminal::VT_FIN_CHUNKS, fin_chunks, 0);
  }
  void add_data_size(int64_t data_size) {
    fbb_.AddElement<int64_t>(DflyCustomTerminal::VT_DATA_SIZE, data_size, 0);
  }
  void add_fin_hops(double fin_hops) {
    fbb_.AddElement<double>(DflyCustomTerminal::VT_FIN_HOPS, fin_hops, 0.0);
  }
  void add_fin_chunks_time(double fin_chunks_time) {
    fbb_.AddElement<double>(DflyCustomTerminal::VT_FIN_CHUNKS_TIME, fin_chunks_time, 0.0);
  }
  void add_busy_time(double busy_time) {
    fbb_.AddElement<double>(DflyCustomTerminal::VT_BUSY_TIME, busy_time, 0.0);
  }
  explicit DflyCustomTerminalBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DflyCustomTerminalBuilder &operator=(const DflyCustomTerminalBuilder &);
  flatbuffers::Offset<DflyCustomTerminal> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DflyCustomTerminal>(end);
    return o;
  }
};

inline flatbuffers::Offset<DflyCustomTerminal> CreateDflyCustomTerminal(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t terminal_id = 0,
    int64_t fin_chunks = 0,
    int64_t data_size = 0,
    double fin_hops = 0.0,
    double fin_chunks_time = 0.0,
    double busy_time = 0.0) {
  DflyCustomTerminalBuilder builder_(_fbb);
  builder_.add_busy_time(busy_time);
  builder_.add_fin_chunks_time(fin_chunks_time);
  builder_.add_fin_hops(fin_hops);
  builder_.add_data_size(data_size);
  builder_.add_fin_chunks(fin_chunks);
  builder_.add_terminal_id(terminal_id);
  return builder_.Finish();
}

flatbuffers::Offset<DflyCustomTerminal> CreateDflyCustomTerminal(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomTerminalT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ModelDataT *ModelData::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new ModelDataT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void ModelData::UnPackTo(ModelDataT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = model_ref(); _o->model_ref = _e; };
  { auto _e = routers(); if (_e) { _o->routers.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->routers[_i] = std::unique_ptr<DflyCustomRouterT>(_e->Get(_i)->UnPack(_resolver)); } } };
  { auto _e = terminals(); if (_e) { _o->terminals.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->terminals[_i] = std::unique_ptr<DflyCustomTerminalT>(_e->Get(_i)->UnPack(_resolver)); } } };
}

inline flatbuffers::Offset<ModelData> ModelData::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelDataT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateModelData(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ModelData> CreateModelData(flatbuffers::FlatBufferBuilder &_fbb, const ModelDataT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ModelDataT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _model_ref = _o->model_ref;
  auto _routers = _o->routers.size() ? _fbb.CreateVector<flatbuffers::Offset<DflyCustomRouter>> (_o->routers.size(), [](size_t i, _VectorArgs *__va) { return CreateDflyCustomRouter(*__va->__fbb, __va->__o->routers[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _terminals = _o->terminals.size() ? _fbb.CreateVector<flatbuffers::Offset<DflyCustomTerminal>> (_o->terminals.size(), [](size_t i, _VectorArgs *__va) { return CreateDflyCustomTerminal(*__va->__fbb, __va->__o->terminals[i].get(), __va->__rehasher); }, &_va ) : 0;
  return ross_damaris::sample::CreateModelData(
      _fbb,
      _model_ref,
      _routers,
      _terminals);
}

inline DflyCustomRouterT *DflyCustomRouter::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new DflyCustomRouterT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void DflyCustomRouter::UnPackTo(DflyCustomRouterT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = router_id(); _o->router_id = _e; };
  { auto _e = busy_time(); if (_e) { _o->busy_time.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->busy_time[_i] = *_e->Get(_i); } } };
  { auto _e = link_traffic(); if (_e) { _o->link_traffic.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->link_traffic[_i] = *_e->Get(_i); } } };
}

inline flatbuffers::Offset<DflyCustomRouter> DflyCustomRouter::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomRouterT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateDflyCustomRouter(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<DflyCustomRouter> CreateDflyCustomRouter(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomRouterT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DflyCustomRouterT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _router_id = _o->router_id;
  auto _busy_time = _o->busy_time.size() ? _fbb.CreateVectorOfStructs(_o->busy_time) : 0;
  auto _link_traffic = _o->link_traffic.size() ? _fbb.CreateVectorOfStructs(_o->link_traffic) : 0;
  return ross_damaris::sample::CreateDflyCustomRouter(
      _fbb,
      _router_id,
      _busy_time,
      _link_traffic);
}

inline DflyCustomTerminalT *DflyCustomTerminal::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new DflyCustomTerminalT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void DflyCustomTerminal::UnPackTo(DflyCustomTerminalT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = terminal_id(); _o->terminal_id = _e; };
  { auto _e = fin_chunks(); _o->fin_chunks = _e; };
  { auto _e = data_size(); _o->data_size = _e; };
  { auto _e = fin_hops(); _o->fin_hops = _e; };
  { auto _e = fin_chunks_time(); _o->fin_chunks_time = _e; };
  { auto _e = busy_time(); _o->busy_time = _e; };
}

inline flatbuffers::Offset<DflyCustomTerminal> DflyCustomTerminal::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomTerminalT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateDflyCustomTerminal(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<DflyCustomTerminal> CreateDflyCustomTerminal(flatbuffers::FlatBufferBuilder &_fbb, const DflyCustomTerminalT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DflyCustomTerminalT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _terminal_id = _o->terminal_id;
  auto _fin_chunks = _o->fin_chunks;
  auto _data_size = _o->data_size;
  auto _fin_hops = _o->fin_hops;
  auto _fin_chunks_time = _o->fin_chunks_time;
  auto _busy_time = _o->busy_time;
  return ross_damaris::sample::CreateDflyCustomTerminal(
      _fbb,
      _terminal_id,
      _fin_chunks,
      _data_size,
      _fin_hops,
      _fin_chunks_time,
      _busy_time);
}

inline const flatbuffers::TypeTable *ModelVariablesTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 },
    { flatbuffers::ET_INT, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    ModelVariablesTypeTable
  };
  static const char * const names[] = {
    "router_id",
    "terminal_id",
    "busy_time",
    "link_traffic",
    "fin_chunks",
    "data_size",
    "fin_hops",
    "fin_chunks_time"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_ENUM, 8, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *ModelDataTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, -1 },
    { flatbuffers::ET_SEQUENCE, 1, 0 },
    { flatbuffers::ET_SEQUENCE, 1, 1 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    DflyCustomRouterTypeTable,
    DflyCustomTerminalTypeTable
  };
  static const char * const names[] = {
    "model_ref",
    "routers",
    "terminals"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 3, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *Param_radix_doubleTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_DOUBLE, 0, -1 }
  };
  static const int32_t values[] = { 0, 8 };
  static const char * const names[] = {
    "values"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_STRUCT, 1, type_codes, nullptr, values, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *Param_radix_longTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_LONG, 0, -1 }
  };
  static const int32_t values[] = { 0, 8 };
  static const char * const names[] = {
    "values"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_STRUCT, 1, type_codes, nullptr, values, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *DflyCustomRouterTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, -1 },
    { flatbuffers::ET_SEQUENCE, 1, 0 },
    { flatbuffers::ET_SEQUENCE, 1, 1 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    Param_radix_doubleTypeTable,
    Param_radix_longTypeTable
  };
  static const char * const names[] = {
    "router_id",
    "busy_time",
    "link_traffic"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 3, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *DflyCustomTerminalTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_INT, 0, -1 },
    { flatbuffers::ET_LONG, 0, -1 },
    { flatbuffers::ET_LONG, 0, -1 },
    { flatbuffers::ET_DOUBLE, 0, -1 },
    { flatbuffers::ET_DOUBLE, 0, -1 },
    { flatbuffers::ET_DOUBLE, 0, -1 }
  };
  static const char * const names[] = {
    "terminal_id",
    "fin_chunks",
    "data_size",
    "fin_hops",
    "fin_chunks_time",
    "busy_time"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 6, type_codes, nullptr, nullptr, names
  };
  return &tt;
}

inline const ross_damaris::sample::ModelData *GetModelData(const void *buf) {
  return flatbuffers::GetRoot<ross_damaris::sample::ModelData>(buf);
}

inline const ross_damaris::sample::ModelData *GetSizePrefixedModelData(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ross_damaris::sample::ModelData>(buf);
}

inline bool VerifyModelDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ross_damaris::sample::ModelData>(nullptr);
}

inline bool VerifySizePrefixedModelDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ross_damaris::sample::ModelData>(nullptr);
}

inline void FinishModelDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ross_damaris::sample::ModelData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedModelDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ross_damaris::sample::ModelData> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<ModelDataT> UnPackModelData(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ModelDataT>(GetModelData(buf)->UnPack(res));
}

}  // namespace sample
}  // namespace ross_damaris

#endif  // FLATBUFFERS_GENERATED_MODELSAMPLE_ROSS_DAMARIS_SAMPLE_H_
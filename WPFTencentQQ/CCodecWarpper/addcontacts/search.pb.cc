// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: search.proto

#include "search.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_Location_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Location_Location_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_record_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_record_record_2eproto;
namespace AccountSearchPb {
class searchDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<search> _instance;
} _search_default_instance_;
}  // namespace AccountSearchPb
static void InitDefaultsscc_info_search_search_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AccountSearchPb::_search_default_instance_;
    new (ptr) ::AccountSearchPb::search();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AccountSearchPb::search::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_search_search_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_search_search_2eproto}, {
      &scc_info_record_record_2eproto.base,
      &scc_info_Location_Location_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_search_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_search_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_search_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_search_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, start_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, count_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, end_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, keyword_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, list_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, highlight_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, msg_user_location_),
  PROTOBUF_FIELD_OFFSET(::AccountSearchPb::search, bool_location_group_),
  2,
  3,
  4,
  0,
  ~0u,
  ~0u,
  1,
  5,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::AccountSearchPb::search)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AccountSearchPb::_search_default_instance_),
};

const char descriptor_table_protodef_search_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014search.proto\022\017AccountSearchPb\032\014record."
  "proto\032\016Location.proto\"\330\001\n\006search\022\r\n\005star"
  "t\030\001 \001(\005\022\r\n\005count\030\002 \001(\r\022\013\n\003end\030\003 \001(\r\022\017\n\007k"
  "eyword\030\004 \001(\t\022%\n\004list\030\005 \003(\0132\027.AccountSear"
  "chPb.record\022\021\n\thighlight\030\006 \003(\t\0224\n\021msg_us"
  "er_location\030\n \001(\0132\031.AccountSearchPb.Loca"
  "tion\022\"\n\023bool_location_group\030\013 \001(\010:\005false"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_search_2eproto_deps[2] = {
  &::descriptor_table_Location_2eproto,
  &::descriptor_table_record_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_search_2eproto_sccs[1] = {
  &scc_info_search_search_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_search_2eproto_once;
static bool descriptor_table_search_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_search_2eproto = {
  &descriptor_table_search_2eproto_initialized, descriptor_table_protodef_search_2eproto, "search.proto", 280,
  &descriptor_table_search_2eproto_once, descriptor_table_search_2eproto_sccs, descriptor_table_search_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_search_2eproto::offsets,
  file_level_metadata_search_2eproto, 1, file_level_enum_descriptors_search_2eproto, file_level_service_descriptors_search_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_search_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_search_2eproto), true);
namespace AccountSearchPb {

// ===================================================================

void search::InitAsDefaultInstance() {
  ::AccountSearchPb::_search_default_instance_._instance.get_mutable()->msg_user_location_ = const_cast< ::AccountSearchPb::Location*>(
      ::AccountSearchPb::Location::internal_default_instance());
}
class search::_Internal {
 public:
  using HasBits = decltype(std::declval<search>()._has_bits_);
  static void set_has_start(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_count(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_end(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_keyword(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::AccountSearchPb::Location& msg_user_location(const search* msg);
  static void set_has_msg_user_location(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_bool_location_group(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

const ::AccountSearchPb::Location&
search::_Internal::msg_user_location(const search* msg) {
  return *msg->msg_user_location_;
}
void search::clear_list() {
  list_.Clear();
}
void search::clear_msg_user_location() {
  if (msg_user_location_ != nullptr) msg_user_location_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
search::search()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:AccountSearchPb.search)
}
search::search(const search& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      list_(from.list_),
      highlight_(from.highlight_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  keyword_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.has_keyword()) {
    keyword_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.keyword_);
  }
  if (from.has_msg_user_location()) {
    msg_user_location_ = new ::AccountSearchPb::Location(*from.msg_user_location_);
  } else {
    msg_user_location_ = nullptr;
  }
  ::memcpy(&start_, &from.start_,
    static_cast<size_t>(reinterpret_cast<char*>(&bool_location_group_) -
    reinterpret_cast<char*>(&start_)) + sizeof(bool_location_group_));
  // @@protoc_insertion_point(copy_constructor:AccountSearchPb.search)
}

void search::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_search_search_2eproto.base);
  keyword_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&msg_user_location_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&bool_location_group_) -
      reinterpret_cast<char*>(&msg_user_location_)) + sizeof(bool_location_group_));
}

search::~search() {
  // @@protoc_insertion_point(destructor:AccountSearchPb.search)
  SharedDtor();
}

void search::SharedDtor() {
  keyword_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete msg_user_location_;
}

void search::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const search& search::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_search_search_2eproto.base);
  return *internal_default_instance();
}


void search::Clear() {
// @@protoc_insertion_point(message_clear_start:AccountSearchPb.search)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  list_.Clear();
  highlight_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      keyword_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(msg_user_location_ != nullptr);
      msg_user_location_->Clear();
    }
  }
  if (cached_has_bits & 0x0000003cu) {
    ::memset(&start_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&bool_location_group_) -
        reinterpret_cast<char*>(&start_)) + sizeof(bool_location_group_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* search::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 start = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_start(&has_bits);
          start_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 count = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_count(&has_bits);
          count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 end = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_end(&has_bits);
          end_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string keyword = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(mutable_keyword(), ptr, ctx, "AccountSearchPb.search.keyword");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .AccountSearchPb.record list = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_list(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 42);
        } else goto handle_unusual;
        continue;
      // repeated string highlight = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(add_highlight(), ptr, ctx, "AccountSearchPb.search.highlight");
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 50);
        } else goto handle_unusual;
        continue;
      // optional .AccountSearchPb.Location msg_user_location = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(mutable_msg_user_location(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool bool_location_group = 11 [default = false];
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          _Internal::set_has_bool_location_group(&has_bits);
          bool_location_group_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool search::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:AccountSearchPb.search)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 start = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          _Internal::set_has_start(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &start_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 count = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_count(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 end = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          _Internal::set_has_end(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &end_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string keyword = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_keyword()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->keyword().data(), static_cast<int>(this->keyword().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "AccountSearchPb.search.keyword");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .AccountSearchPb.record list = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string highlight = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (50 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->add_highlight()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->highlight(this->highlight_size() - 1).data(),
            static_cast<int>(this->highlight(this->highlight_size() - 1).length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "AccountSearchPb.search.highlight");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .AccountSearchPb.Location msg_user_location = 10;
      case 10: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (82 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_msg_user_location()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool bool_location_group = 11 [default = false];
      case 11: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (88 & 0xFF)) {
          _Internal::set_has_bool_location_group(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bool_location_group_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:AccountSearchPb.search)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AccountSearchPb.search)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void search::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AccountSearchPb.search)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 start = 1;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(1, this->start(), output);
  }

  // optional uint32 count = 2;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(2, this->count(), output);
  }

  // optional uint32 end = 3;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(3, this->end(), output);
  }

  // optional string keyword = 4;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->keyword().data(), static_cast<int>(this->keyword().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "AccountSearchPb.search.keyword");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->keyword(), output);
  }

  // repeated .AccountSearchPb.record list = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->list_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      5,
      this->list(static_cast<int>(i)),
      output);
  }

  // repeated string highlight = 6;
  for (int i = 0, n = this->highlight_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->highlight(i).data(), static_cast<int>(this->highlight(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "AccountSearchPb.search.highlight");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteString(
      6, this->highlight(i), output);
  }

  // optional .AccountSearchPb.Location msg_user_location = 10;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, _Internal::msg_user_location(this), output);
  }

  // optional bool bool_location_group = 11 [default = false];
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(11, this->bool_location_group(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:AccountSearchPb.search)
}

::PROTOBUF_NAMESPACE_ID::uint8* search::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:AccountSearchPb.search)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 start = 1;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->start(), target);
  }

  // optional uint32 count = 2;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->count(), target);
  }

  // optional uint32 end = 3;
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->end(), target);
  }

  // optional string keyword = 4;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->keyword().data(), static_cast<int>(this->keyword().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "AccountSearchPb.search.keyword");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->keyword(), target);
  }

  // repeated .AccountSearchPb.record list = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->list_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->list(static_cast<int>(i)), target);
  }

  // repeated string highlight = 6;
  for (int i = 0, n = this->highlight_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->highlight(i).data(), static_cast<int>(this->highlight(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "AccountSearchPb.search.highlight");
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteStringToArray(6, this->highlight(i), target);
  }

  // optional .AccountSearchPb.Location msg_user_location = 10;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        10, _Internal::msg_user_location(this), target);
  }

  // optional bool bool_location_group = 11 [default = false];
  if (cached_has_bits & 0x00000020u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(11, this->bool_location_group(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AccountSearchPb.search)
  return target;
}

size_t search::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AccountSearchPb.search)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AccountSearchPb.record list = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->list(static_cast<int>(i)));
    }
  }

  // repeated string highlight = 6;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->highlight_size());
  for (int i = 0, n = this->highlight_size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      this->highlight(i));
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional string keyword = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->keyword());
    }

    // optional .AccountSearchPb.Location msg_user_location = 10;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *msg_user_location_);
    }

    // optional int32 start = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->start());
    }

    // optional uint32 count = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->count());
    }

    // optional uint32 end = 3;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->end());
    }

    // optional bool bool_location_group = 11 [default = false];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void search::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AccountSearchPb.search)
  GOOGLE_DCHECK_NE(&from, this);
  const search* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<search>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AccountSearchPb.search)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AccountSearchPb.search)
    MergeFrom(*source);
  }
}

void search::MergeFrom(const search& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AccountSearchPb.search)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  list_.MergeFrom(from.list_);
  highlight_.MergeFrom(from.highlight_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      keyword_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.keyword_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_msg_user_location()->::AccountSearchPb::Location::MergeFrom(from.msg_user_location());
    }
    if (cached_has_bits & 0x00000004u) {
      start_ = from.start_;
    }
    if (cached_has_bits & 0x00000008u) {
      count_ = from.count_;
    }
    if (cached_has_bits & 0x00000010u) {
      end_ = from.end_;
    }
    if (cached_has_bits & 0x00000020u) {
      bool_location_group_ = from.bool_location_group_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void search::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AccountSearchPb.search)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void search::CopyFrom(const search& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AccountSearchPb.search)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool search::IsInitialized() const {
  return true;
}

void search::InternalSwap(search* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  CastToBase(&list_)->InternalSwap(CastToBase(&other->list_));
  highlight_.InternalSwap(CastToBase(&other->highlight_));
  keyword_.Swap(&other->keyword_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(msg_user_location_, other->msg_user_location_);
  swap(start_, other->start_);
  swap(count_, other->count_);
  swap(end_, other->end_);
  swap(bool_location_group_, other->bool_location_group_);
}

::PROTOBUF_NAMESPACE_ID::Metadata search::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AccountSearchPb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AccountSearchPb::search* Arena::CreateMaybeMessage< ::AccountSearchPb::search >(Arena* arena) {
  return Arena::CreateInternal< ::AccountSearchPb::search >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

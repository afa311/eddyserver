// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: db.request.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "db.request.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto_db {

namespace {

const ::google::protobuf::Descriptor* Request_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Request_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Request_ActoinType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Request_DatabaseType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_db_2erequest_2eproto() {
  protobuf_AddDesc_db_2erequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "db.request.proto");
  GOOGLE_CHECK(file != NULL);
  Request_descriptor_ = file->message_type(0);
  static const int Request_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, identifier_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, dbtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, action_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, dbname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, statement_),
  };
  Request_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Request_descriptor_,
      Request::default_instance_,
      Request_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Request));
  Request_ActoinType_descriptor_ = Request_descriptor_->enum_type(0);
  Request_DatabaseType_descriptor_ = Request_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_db_2erequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Request_descriptor_, &Request::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_db_2erequest_2eproto() {
  delete Request::default_instance_;
  delete Request_reflection_;
}

void protobuf_AddDesc_db_2erequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020db.request.proto\022\010proto_db\"\210\002\n\007Request"
    "\022\022\n\nidentifier\030\001 \002(\r\022.\n\006dbtype\030\002 \002(\0162\036.p"
    "roto_db.Request.DatabaseType\022,\n\006action\030\003"
    " \002(\0162\034.proto_db.Request.ActoinType\022\016\n\006db"
    "name\030\004 \002(\t\022\021\n\tstatement\030\005 \001(\t\"@\n\nActoinT"
    "ype\022\013\n\007kSelect\020\001\022\013\n\007kInsert\020\002\022\013\n\007kUpdate"
    "\020\003\022\013\n\007kDelete\020\004\"&\n\014DatabaseType\022\n\n\006kRedi"
    "s\020\001\022\n\n\006kMySQL\020\002", 295);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "db.request.proto", &protobuf_RegisterTypes);
  Request::default_instance_ = new Request();
  Request::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_db_2erequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_db_2erequest_2eproto {
  StaticDescriptorInitializer_db_2erequest_2eproto() {
    protobuf_AddDesc_db_2erequest_2eproto();
  }
} static_descriptor_initializer_db_2erequest_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Request_ActoinType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Request_ActoinType_descriptor_;
}
bool Request_ActoinType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Request_ActoinType Request::kSelect;
const Request_ActoinType Request::kInsert;
const Request_ActoinType Request::kUpdate;
const Request_ActoinType Request::kDelete;
const Request_ActoinType Request::ActoinType_MIN;
const Request_ActoinType Request::ActoinType_MAX;
const int Request::ActoinType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Request_DatabaseType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Request_DatabaseType_descriptor_;
}
bool Request_DatabaseType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Request_DatabaseType Request::kRedis;
const Request_DatabaseType Request::kMySQL;
const Request_DatabaseType Request::DatabaseType_MIN;
const Request_DatabaseType Request::DatabaseType_MAX;
const int Request::DatabaseType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Request::kIdentifierFieldNumber;
const int Request::kDbtypeFieldNumber;
const int Request::kActionFieldNumber;
const int Request::kDbnameFieldNumber;
const int Request::kStatementFieldNumber;
#endif  // !_MSC_VER

Request::Request()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto_db.Request)
}

void Request::InitAsDefaultInstance() {
}

Request::Request(const Request& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto_db.Request)
}

void Request::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  identifier_ = 0u;
  dbtype_ = 1;
  action_ = 1;
  dbname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  statement_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:proto_db.Request)
  SharedDtor();
}

void Request::SharedDtor() {
  if (dbname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete dbname_;
  }
  if (statement_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete statement_;
  }
  if (this != default_instance_) {
  }
}

void Request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Request::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Request_descriptor_;
}

const Request& Request::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_db_2erequest_2eproto();
  return *default_instance_;
}

Request* Request::default_instance_ = NULL;

Request* Request::New() const {
  return new Request;
}

void Request::Clear() {
  if (_has_bits_[0 / 32] & 31) {
    identifier_ = 0u;
    dbtype_ = 1;
    action_ = 1;
    if (has_dbname()) {
      if (dbname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        dbname_->clear();
      }
    }
    if (has_statement()) {
      if (statement_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        statement_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto_db.Request)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 identifier = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &identifier_)));
          set_has_identifier();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_dbtype;
        break;
      }

      // required .proto_db.Request.DatabaseType dbtype = 2;
      case 2: {
        if (tag == 16) {
         parse_dbtype:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto_db::Request_DatabaseType_IsValid(value)) {
            set_dbtype(static_cast< ::proto_db::Request_DatabaseType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_action;
        break;
      }

      // required .proto_db.Request.ActoinType action = 3;
      case 3: {
        if (tag == 24) {
         parse_action:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto_db::Request_ActoinType_IsValid(value)) {
            set_action(static_cast< ::proto_db::Request_ActoinType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_dbname;
        break;
      }

      // required string dbname = 4;
      case 4: {
        if (tag == 34) {
         parse_dbname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dbname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->dbname().data(), this->dbname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "dbname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_statement;
        break;
      }

      // optional string statement = 5;
      case 5: {
        if (tag == 42) {
         parse_statement:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_statement()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->statement().data(), this->statement().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "statement");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto_db.Request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto_db.Request)
  return false;
#undef DO_
}

void Request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto_db.Request)
  // required uint32 identifier = 1;
  if (has_identifier()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->identifier(), output);
  }

  // required .proto_db.Request.DatabaseType dbtype = 2;
  if (has_dbtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->dbtype(), output);
  }

  // required .proto_db.Request.ActoinType action = 3;
  if (has_action()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->action(), output);
  }

  // required string dbname = 4;
  if (has_dbname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->dbname().data(), this->dbname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dbname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->dbname(), output);
  }

  // optional string statement = 5;
  if (has_statement()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->statement().data(), this->statement().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "statement");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->statement(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto_db.Request)
}

::google::protobuf::uint8* Request::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto_db.Request)
  // required uint32 identifier = 1;
  if (has_identifier()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->identifier(), target);
  }

  // required .proto_db.Request.DatabaseType dbtype = 2;
  if (has_dbtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->dbtype(), target);
  }

  // required .proto_db.Request.ActoinType action = 3;
  if (has_action()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->action(), target);
  }

  // required string dbname = 4;
  if (has_dbname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->dbname().data(), this->dbname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "dbname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->dbname(), target);
  }

  // optional string statement = 5;
  if (has_statement()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->statement().data(), this->statement().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "statement");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->statement(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto_db.Request)
  return target;
}

int Request::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 identifier = 1;
    if (has_identifier()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->identifier());
    }

    // required .proto_db.Request.DatabaseType dbtype = 2;
    if (has_dbtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->dbtype());
    }

    // required .proto_db.Request.ActoinType action = 3;
    if (has_action()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->action());
    }

    // required string dbname = 4;
    if (has_dbname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->dbname());
    }

    // optional string statement = 5;
    if (has_statement()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->statement());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Request::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Request* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Request*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Request::MergeFrom(const Request& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_identifier()) {
      set_identifier(from.identifier());
    }
    if (from.has_dbtype()) {
      set_dbtype(from.dbtype());
    }
    if (from.has_action()) {
      set_action(from.action());
    }
    if (from.has_dbname()) {
      set_dbname(from.dbname());
    }
    if (from.has_statement()) {
      set_statement(from.statement());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Request::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Request::CopyFrom(const Request& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void Request::Swap(Request* other) {
  if (other != this) {
    std::swap(identifier_, other->identifier_);
    std::swap(dbtype_, other->dbtype_);
    std::swap(action_, other->action_);
    std::swap(dbname_, other->dbname_);
    std::swap(statement_, other->statement_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Request::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Request_descriptor_;
  metadata.reflection = Request_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_db

// @@protoc_insertion_point(global_scope)

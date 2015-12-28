// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: poses_stamped.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "poses_stamped.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#pragma GCC diagnostic ignored "-Wshadow"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* PosesStamped_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PosesStamped_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_poses_5fstamped_2eproto() {
  protobuf_AddDesc_poses_5fstamped_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "poses_stamped.proto");
  GOOGLE_CHECK(file != NULL);
  PosesStamped_descriptor_ = file->message_type(0);
  static const int PosesStamped_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, pose_),
  };
  PosesStamped_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PosesStamped_descriptor_,
      PosesStamped::default_instance_,
      PosesStamped_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PosesStamped));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_poses_5fstamped_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PosesStamped_descriptor_, &PosesStamped::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_poses_5fstamped_2eproto() {
  delete PosesStamped::default_instance_;
  delete PosesStamped_reflection_;
}

void protobuf_AddDesc_poses_5fstamped_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_time_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_pose_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023poses_stamped.proto\022\013gazebo.msgs\032\ntime"
    ".proto\032\npose.proto\"P\n\014PosesStamped\022\037\n\004ti"
    "me\030\001 \002(\0132\021.gazebo.msgs.Time\022\037\n\004pose\030\002 \003("
    "\0132\021.gazebo.msgs.Pose", 140);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "poses_stamped.proto", &protobuf_RegisterTypes);
  PosesStamped::default_instance_ = new PosesStamped();
  PosesStamped::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_poses_5fstamped_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_poses_5fstamped_2eproto {
  StaticDescriptorInitializer_poses_5fstamped_2eproto() {
    protobuf_AddDesc_poses_5fstamped_2eproto();
  }
} static_descriptor_initializer_poses_5fstamped_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PosesStamped::kTimeFieldNumber;
const int PosesStamped::kPoseFieldNumber;
#endif  // !_MSC_VER

PosesStamped::PosesStamped()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PosesStamped::InitAsDefaultInstance() {
  time_ = const_cast< ::gazebo::msgs::Time*>(&::gazebo::msgs::Time::default_instance());
}

PosesStamped::PosesStamped(const PosesStamped& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PosesStamped::SharedCtor() {
  _cached_size_ = 0;
  time_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PosesStamped::~PosesStamped() {
  SharedDtor();
}

void PosesStamped::SharedDtor() {
  if (this != default_instance_) {
    delete time_;
  }
}

void PosesStamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PosesStamped::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PosesStamped_descriptor_;
}

const PosesStamped& PosesStamped::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_poses_5fstamped_2eproto();
  return *default_instance_;
}

PosesStamped* PosesStamped::default_instance_ = NULL;

PosesStamped* PosesStamped::New() const {
  return new PosesStamped;
}

void PosesStamped::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_time()) {
      if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
    }
  }
  pose_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PosesStamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Time time = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_time()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_pose;
        break;
      }

      // repeated .gazebo.msgs.Pose pose = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pose()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_pose;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PosesStamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->time(), output);
  }

  // repeated .gazebo.msgs.Pose pose = 2;
  for (int i = 0; i < this->pose_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->pose(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PosesStamped::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->time(), target);
  }

  // repeated .gazebo.msgs.Pose pose = 2;
  for (int i = 0; i < this->pose_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->pose(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PosesStamped::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Time time = 1;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->time());
    }

  }
  // repeated .gazebo.msgs.Pose pose = 2;
  total_size += 1 * this->pose_size();
  for (int i = 0; i < this->pose_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pose(i));
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

void PosesStamped::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PosesStamped* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PosesStamped*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PosesStamped::MergeFrom(const PosesStamped& from) {
  GOOGLE_CHECK_NE(&from, this);
  pose_.MergeFrom(from.pose_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      mutable_time()->::gazebo::msgs::Time::MergeFrom(from.time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PosesStamped::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PosesStamped::CopyFrom(const PosesStamped& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PosesStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_time()) {
    if (!this->time().IsInitialized()) return false;
  }
  for (int i = 0; i < pose_size(); i++) {
    if (!this->pose(i).IsInitialized()) return false;
  }
  return true;
}

void PosesStamped::Swap(PosesStamped* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    pose_.Swap(&other->pose_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PosesStamped::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PosesStamped_descriptor_;
  metadata.reflection = PosesStamped_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

GZ_REGISTER_STATIC_MSG("gazebo.msgs.PosesStamped", PosesStamped)
// @@protoc_insertion_point(global_scope)

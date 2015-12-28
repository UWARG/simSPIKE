// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hydra.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "hydra.pb.h"

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

const ::google::protobuf::Descriptor* Hydra_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Hydra_reflection_ = NULL;
const ::google::protobuf::Descriptor* Hydra_Paddle_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Hydra_Paddle_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_hydra_2eproto() {
  protobuf_AddDesc_hydra_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "hydra.proto");
  GOOGLE_CHECK(file != NULL);
  Hydra_descriptor_ = file->message_type(0);
  static const int Hydra_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra, right_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra, left_),
  };
  Hydra_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Hydra_descriptor_,
      Hydra::default_instance_,
      Hydra_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Hydra));
  Hydra_Paddle_descriptor_ = Hydra_descriptor_->nested_type(0);
  static const int Hydra_Paddle_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, pose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, button_bumper_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, button_1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, button_2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, button_3_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, button_4_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, button_joy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, button_center_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, joy_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, joy_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, trigger_),
  };
  Hydra_Paddle_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Hydra_Paddle_descriptor_,
      Hydra_Paddle::default_instance_,
      Hydra_Paddle_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hydra_Paddle, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Hydra_Paddle));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_hydra_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Hydra_descriptor_, &Hydra::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Hydra_Paddle_descriptor_, &Hydra_Paddle::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_hydra_2eproto() {
  delete Hydra::default_instance_;
  delete Hydra_reflection_;
  delete Hydra_Paddle::default_instance_;
  delete Hydra_Paddle_reflection_;
}

void protobuf_AddDesc_hydra_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_pose_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013hydra.proto\022\013gazebo.msgs\032\npose.proto\"\277"
    "\002\n\005Hydra\022(\n\005right\030\001 \002(\0132\031.gazebo.msgs.Hy"
    "dra.Paddle\022\'\n\004left\030\002 \002(\0132\031.gazebo.msgs.H"
    "ydra.Paddle\032\342\001\n\006Paddle\022\037\n\004pose\030\001 \002(\0132\021.g"
    "azebo.msgs.Pose\022\025\n\rbutton_bumper\030\002 \002(\010\022\020"
    "\n\010button_1\030\003 \002(\010\022\020\n\010button_2\030\004 \002(\010\022\020\n\010bu"
    "tton_3\030\005 \002(\010\022\020\n\010button_4\030\006 \002(\010\022\022\n\nbutton"
    "_joy\030\007 \002(\010\022\025\n\rbutton_center\030\010 \002(\010\022\r\n\005joy"
    "_x\030\t \002(\001\022\r\n\005joy_y\030\n \002(\001\022\017\n\007trigger\030\013 \002(\001", 360);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "hydra.proto", &protobuf_RegisterTypes);
  Hydra::default_instance_ = new Hydra();
  Hydra_Paddle::default_instance_ = new Hydra_Paddle();
  Hydra::default_instance_->InitAsDefaultInstance();
  Hydra_Paddle::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_hydra_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_hydra_2eproto {
  StaticDescriptorInitializer_hydra_2eproto() {
    protobuf_AddDesc_hydra_2eproto();
  }
} static_descriptor_initializer_hydra_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Hydra_Paddle::kPoseFieldNumber;
const int Hydra_Paddle::kButtonBumperFieldNumber;
const int Hydra_Paddle::kButton1FieldNumber;
const int Hydra_Paddle::kButton2FieldNumber;
const int Hydra_Paddle::kButton3FieldNumber;
const int Hydra_Paddle::kButton4FieldNumber;
const int Hydra_Paddle::kButtonJoyFieldNumber;
const int Hydra_Paddle::kButtonCenterFieldNumber;
const int Hydra_Paddle::kJoyXFieldNumber;
const int Hydra_Paddle::kJoyYFieldNumber;
const int Hydra_Paddle::kTriggerFieldNumber;
#endif  // !_MSC_VER

Hydra_Paddle::Hydra_Paddle()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Hydra_Paddle::InitAsDefaultInstance() {
  pose_ = const_cast< ::gazebo::msgs::Pose*>(&::gazebo::msgs::Pose::default_instance());
}

Hydra_Paddle::Hydra_Paddle(const Hydra_Paddle& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Hydra_Paddle::SharedCtor() {
  _cached_size_ = 0;
  pose_ = NULL;
  button_bumper_ = false;
  button_1_ = false;
  button_2_ = false;
  button_3_ = false;
  button_4_ = false;
  button_joy_ = false;
  button_center_ = false;
  joy_x_ = 0;
  joy_y_ = 0;
  trigger_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Hydra_Paddle::~Hydra_Paddle() {
  SharedDtor();
}

void Hydra_Paddle::SharedDtor() {
  if (this != default_instance_) {
    delete pose_;
  }
}

void Hydra_Paddle::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Hydra_Paddle::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Hydra_Paddle_descriptor_;
}

const Hydra_Paddle& Hydra_Paddle::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_hydra_2eproto();
  return *default_instance_;
}

Hydra_Paddle* Hydra_Paddle::default_instance_ = NULL;

Hydra_Paddle* Hydra_Paddle::New() const {
  return new Hydra_Paddle;
}

void Hydra_Paddle::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_pose()) {
      if (pose_ != NULL) pose_->::gazebo::msgs::Pose::Clear();
    }
    button_bumper_ = false;
    button_1_ = false;
    button_2_ = false;
    button_3_ = false;
    button_4_ = false;
    button_joy_ = false;
    button_center_ = false;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    joy_x_ = 0;
    joy_y_ = 0;
    trigger_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Hydra_Paddle::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Pose pose = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pose()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_button_bumper;
        break;
      }

      // required bool button_bumper = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_button_bumper:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_bumper_)));
          set_has_button_bumper();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_button_1;
        break;
      }

      // required bool button_1 = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_button_1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_1_)));
          set_has_button_1();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_button_2;
        break;
      }

      // required bool button_2 = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_button_2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_2_)));
          set_has_button_2();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_button_3;
        break;
      }

      // required bool button_3 = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_button_3:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_3_)));
          set_has_button_3();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_button_4;
        break;
      }

      // required bool button_4 = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_button_4:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_4_)));
          set_has_button_4();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_button_joy;
        break;
      }

      // required bool button_joy = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_button_joy:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_joy_)));
          set_has_button_joy();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_button_center;
        break;
      }

      // required bool button_center = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_button_center:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &button_center_)));
          set_has_button_center();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(73)) goto parse_joy_x;
        break;
      }

      // required double joy_x = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_joy_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &joy_x_)));
          set_has_joy_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(81)) goto parse_joy_y;
        break;
      }

      // required double joy_y = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_joy_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &joy_y_)));
          set_has_joy_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(89)) goto parse_trigger;
        break;
      }

      // required double trigger = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_trigger:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &trigger_)));
          set_has_trigger();
        } else {
          goto handle_uninterpreted;
        }
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

void Hydra_Paddle::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .gazebo.msgs.Pose pose = 1;
  if (has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->pose(), output);
  }

  // required bool button_bumper = 2;
  if (has_button_bumper()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->button_bumper(), output);
  }

  // required bool button_1 = 3;
  if (has_button_1()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->button_1(), output);
  }

  // required bool button_2 = 4;
  if (has_button_2()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->button_2(), output);
  }

  // required bool button_3 = 5;
  if (has_button_3()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->button_3(), output);
  }

  // required bool button_4 = 6;
  if (has_button_4()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->button_4(), output);
  }

  // required bool button_joy = 7;
  if (has_button_joy()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->button_joy(), output);
  }

  // required bool button_center = 8;
  if (has_button_center()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->button_center(), output);
  }

  // required double joy_x = 9;
  if (has_joy_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->joy_x(), output);
  }

  // required double joy_y = 10;
  if (has_joy_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->joy_y(), output);
  }

  // required double trigger = 11;
  if (has_trigger()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->trigger(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Hydra_Paddle::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .gazebo.msgs.Pose pose = 1;
  if (has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->pose(), target);
  }

  // required bool button_bumper = 2;
  if (has_button_bumper()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->button_bumper(), target);
  }

  // required bool button_1 = 3;
  if (has_button_1()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->button_1(), target);
  }

  // required bool button_2 = 4;
  if (has_button_2()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->button_2(), target);
  }

  // required bool button_3 = 5;
  if (has_button_3()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->button_3(), target);
  }

  // required bool button_4 = 6;
  if (has_button_4()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->button_4(), target);
  }

  // required bool button_joy = 7;
  if (has_button_joy()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->button_joy(), target);
  }

  // required bool button_center = 8;
  if (has_button_center()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->button_center(), target);
  }

  // required double joy_x = 9;
  if (has_joy_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->joy_x(), target);
  }

  // required double joy_y = 10;
  if (has_joy_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->joy_y(), target);
  }

  // required double trigger = 11;
  if (has_trigger()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->trigger(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Hydra_Paddle::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Pose pose = 1;
    if (has_pose()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pose());
    }

    // required bool button_bumper = 2;
    if (has_button_bumper()) {
      total_size += 1 + 1;
    }

    // required bool button_1 = 3;
    if (has_button_1()) {
      total_size += 1 + 1;
    }

    // required bool button_2 = 4;
    if (has_button_2()) {
      total_size += 1 + 1;
    }

    // required bool button_3 = 5;
    if (has_button_3()) {
      total_size += 1 + 1;
    }

    // required bool button_4 = 6;
    if (has_button_4()) {
      total_size += 1 + 1;
    }

    // required bool button_joy = 7;
    if (has_button_joy()) {
      total_size += 1 + 1;
    }

    // required bool button_center = 8;
    if (has_button_center()) {
      total_size += 1 + 1;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required double joy_x = 9;
    if (has_joy_x()) {
      total_size += 1 + 8;
    }

    // required double joy_y = 10;
    if (has_joy_y()) {
      total_size += 1 + 8;
    }

    // required double trigger = 11;
    if (has_trigger()) {
      total_size += 1 + 8;
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

void Hydra_Paddle::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Hydra_Paddle* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Hydra_Paddle*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Hydra_Paddle::MergeFrom(const Hydra_Paddle& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pose()) {
      mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from.pose());
    }
    if (from.has_button_bumper()) {
      set_button_bumper(from.button_bumper());
    }
    if (from.has_button_1()) {
      set_button_1(from.button_1());
    }
    if (from.has_button_2()) {
      set_button_2(from.button_2());
    }
    if (from.has_button_3()) {
      set_button_3(from.button_3());
    }
    if (from.has_button_4()) {
      set_button_4(from.button_4());
    }
    if (from.has_button_joy()) {
      set_button_joy(from.button_joy());
    }
    if (from.has_button_center()) {
      set_button_center(from.button_center());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_joy_x()) {
      set_joy_x(from.joy_x());
    }
    if (from.has_joy_y()) {
      set_joy_y(from.joy_y());
    }
    if (from.has_trigger()) {
      set_trigger(from.trigger());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Hydra_Paddle::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hydra_Paddle::CopyFrom(const Hydra_Paddle& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hydra_Paddle::IsInitialized() const {
  if ((_has_bits_[0] & 0x000007ff) != 0x000007ff) return false;

  if (has_pose()) {
    if (!this->pose().IsInitialized()) return false;
  }
  return true;
}

void Hydra_Paddle::Swap(Hydra_Paddle* other) {
  if (other != this) {
    std::swap(pose_, other->pose_);
    std::swap(button_bumper_, other->button_bumper_);
    std::swap(button_1_, other->button_1_);
    std::swap(button_2_, other->button_2_);
    std::swap(button_3_, other->button_3_);
    std::swap(button_4_, other->button_4_);
    std::swap(button_joy_, other->button_joy_);
    std::swap(button_center_, other->button_center_);
    std::swap(joy_x_, other->joy_x_);
    std::swap(joy_y_, other->joy_y_);
    std::swap(trigger_, other->trigger_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Hydra_Paddle::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Hydra_Paddle_descriptor_;
  metadata.reflection = Hydra_Paddle_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Hydra::kRightFieldNumber;
const int Hydra::kLeftFieldNumber;
#endif  // !_MSC_VER

Hydra::Hydra()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Hydra::InitAsDefaultInstance() {
  right_ = const_cast< ::gazebo::msgs::Hydra_Paddle*>(&::gazebo::msgs::Hydra_Paddle::default_instance());
  left_ = const_cast< ::gazebo::msgs::Hydra_Paddle*>(&::gazebo::msgs::Hydra_Paddle::default_instance());
}

Hydra::Hydra(const Hydra& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Hydra::SharedCtor() {
  _cached_size_ = 0;
  right_ = NULL;
  left_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Hydra::~Hydra() {
  SharedDtor();
}

void Hydra::SharedDtor() {
  if (this != default_instance_) {
    delete right_;
    delete left_;
  }
}

void Hydra::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Hydra::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Hydra_descriptor_;
}

const Hydra& Hydra::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_hydra_2eproto();
  return *default_instance_;
}

Hydra* Hydra::default_instance_ = NULL;

Hydra* Hydra::New() const {
  return new Hydra;
}

void Hydra::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_right()) {
      if (right_ != NULL) right_->::gazebo::msgs::Hydra_Paddle::Clear();
    }
    if (has_left()) {
      if (left_ != NULL) left_->::gazebo::msgs::Hydra_Paddle::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Hydra::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Hydra.Paddle right = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_right()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_left;
        break;
      }

      // required .gazebo.msgs.Hydra.Paddle left = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_left:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_left()));
        } else {
          goto handle_uninterpreted;
        }
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

void Hydra::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .gazebo.msgs.Hydra.Paddle right = 1;
  if (has_right()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->right(), output);
  }

  // required .gazebo.msgs.Hydra.Paddle left = 2;
  if (has_left()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->left(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Hydra::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .gazebo.msgs.Hydra.Paddle right = 1;
  if (has_right()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->right(), target);
  }

  // required .gazebo.msgs.Hydra.Paddle left = 2;
  if (has_left()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->left(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Hydra::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Hydra.Paddle right = 1;
    if (has_right()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->right());
    }

    // required .gazebo.msgs.Hydra.Paddle left = 2;
    if (has_left()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->left());
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

void Hydra::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Hydra* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Hydra*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Hydra::MergeFrom(const Hydra& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_right()) {
      mutable_right()->::gazebo::msgs::Hydra_Paddle::MergeFrom(from.right());
    }
    if (from.has_left()) {
      mutable_left()->::gazebo::msgs::Hydra_Paddle::MergeFrom(from.left());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Hydra::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hydra::CopyFrom(const Hydra& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hydra::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_right()) {
    if (!this->right().IsInitialized()) return false;
  }
  if (has_left()) {
    if (!this->left().IsInitialized()) return false;
  }
  return true;
}

void Hydra::Swap(Hydra* other) {
  if (other != this) {
    std::swap(right_, other->right_);
    std::swap(left_, other->left_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Hydra::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Hydra_descriptor_;
  metadata.reflection = Hydra_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Hydra", Hydra)
// @@protoc_insertion_point(global_scope)

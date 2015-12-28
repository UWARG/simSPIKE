// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: light.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "light.pb.h"

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

const ::google::protobuf::Descriptor* Light_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Light_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Light_LightType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_light_2eproto() {
  protobuf_AddDesc_light_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "light.proto");
  GOOGLE_CHECK(file != NULL);
  Light_descriptor_ = file->message_type(0);
  static const int Light_offsets_[14] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, pose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, diffuse_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, specular_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, attenuation_constant_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, attenuation_linear_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, attenuation_quadratic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, direction_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, cast_shadows_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, spot_inner_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, spot_outer_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, spot_falloff_),
  };
  Light_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Light_descriptor_,
      Light::default_instance_,
      Light_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Light, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Light));
  Light_LightType_descriptor_ = Light_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_light_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Light_descriptor_, &Light::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_light_2eproto() {
  delete Light::default_instance_;
  delete Light_reflection_;
}

void protobuf_AddDesc_light_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_header_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_pose_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_color_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013light.proto\022\013gazebo.msgs\032\014header.proto"
    "\032\npose.proto\032\016vector3d.proto\032\013color.prot"
    "o\"\322\003\n\005Light\022\014\n\004name\030\001 \002(\t\022*\n\004type\030\002 \001(\0162"
    "\034.gazebo.msgs.Light.LightType\022\037\n\004pose\030\003 "
    "\001(\0132\021.gazebo.msgs.Pose\022#\n\007diffuse\030\004 \001(\0132"
    "\022.gazebo.msgs.Color\022$\n\010specular\030\005 \001(\0132\022."
    "gazebo.msgs.Color\022\034\n\024attenuation_constan"
    "t\030\006 \001(\002\022\032\n\022attenuation_linear\030\007 \001(\002\022\035\n\025a"
    "ttenuation_quadratic\030\010 \001(\002\022(\n\tdirection\030"
    "\t \001(\0132\025.gazebo.msgs.Vector3d\022\r\n\005range\030\n "
    "\001(\002\022\024\n\014cast_shadows\030\013 \001(\010\022\030\n\020spot_inner_"
    "angle\030\014 \001(\002\022\030\n\020spot_outer_angle\030\r \001(\002\022\024\n"
    "\014spot_falloff\030\016 \001(\002\"1\n\tLightType\022\t\n\005POIN"
    "T\020\001\022\010\n\004SPOT\020\002\022\017\n\013DIRECTIONAL\020\003", 550);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "light.proto", &protobuf_RegisterTypes);
  Light::default_instance_ = new Light();
  Light::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_light_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_light_2eproto {
  StaticDescriptorInitializer_light_2eproto() {
    protobuf_AddDesc_light_2eproto();
  }
} static_descriptor_initializer_light_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Light_LightType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Light_LightType_descriptor_;
}
bool Light_LightType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Light_LightType Light::POINT;
const Light_LightType Light::SPOT;
const Light_LightType Light::DIRECTIONAL;
const Light_LightType Light::LightType_MIN;
const Light_LightType Light::LightType_MAX;
const int Light::LightType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Light::kNameFieldNumber;
const int Light::kTypeFieldNumber;
const int Light::kPoseFieldNumber;
const int Light::kDiffuseFieldNumber;
const int Light::kSpecularFieldNumber;
const int Light::kAttenuationConstantFieldNumber;
const int Light::kAttenuationLinearFieldNumber;
const int Light::kAttenuationQuadraticFieldNumber;
const int Light::kDirectionFieldNumber;
const int Light::kRangeFieldNumber;
const int Light::kCastShadowsFieldNumber;
const int Light::kSpotInnerAngleFieldNumber;
const int Light::kSpotOuterAngleFieldNumber;
const int Light::kSpotFalloffFieldNumber;
#endif  // !_MSC_VER

Light::Light()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Light::InitAsDefaultInstance() {
  pose_ = const_cast< ::gazebo::msgs::Pose*>(&::gazebo::msgs::Pose::default_instance());
  diffuse_ = const_cast< ::gazebo::msgs::Color*>(&::gazebo::msgs::Color::default_instance());
  specular_ = const_cast< ::gazebo::msgs::Color*>(&::gazebo::msgs::Color::default_instance());
  direction_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

Light::Light(const Light& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Light::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  type_ = 1;
  pose_ = NULL;
  diffuse_ = NULL;
  specular_ = NULL;
  attenuation_constant_ = 0;
  attenuation_linear_ = 0;
  attenuation_quadratic_ = 0;
  direction_ = NULL;
  range_ = 0;
  cast_shadows_ = false;
  spot_inner_angle_ = 0;
  spot_outer_angle_ = 0;
  spot_falloff_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Light::~Light() {
  SharedDtor();
}

void Light::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
    delete pose_;
    delete diffuse_;
    delete specular_;
    delete direction_;
  }
}

void Light::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Light::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Light_descriptor_;
}

const Light& Light::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_light_2eproto();
  return *default_instance_;
}

Light* Light::default_instance_ = NULL;

Light* Light::New() const {
  return new Light;
}

void Light::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    type_ = 1;
    if (has_pose()) {
      if (pose_ != NULL) pose_->::gazebo::msgs::Pose::Clear();
    }
    if (has_diffuse()) {
      if (diffuse_ != NULL) diffuse_->::gazebo::msgs::Color::Clear();
    }
    if (has_specular()) {
      if (specular_ != NULL) specular_->::gazebo::msgs::Color::Clear();
    }
    attenuation_constant_ = 0;
    attenuation_linear_ = 0;
    attenuation_quadratic_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_direction()) {
      if (direction_ != NULL) direction_->::gazebo::msgs::Vector3d::Clear();
    }
    range_ = 0;
    cast_shadows_ = false;
    spot_inner_angle_ = 0;
    spot_outer_angle_ = 0;
    spot_falloff_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Light::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional .gazebo.msgs.Light.LightType type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gazebo::msgs::Light_LightType_IsValid(value)) {
            set_type(static_cast< ::gazebo::msgs::Light_LightType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_pose;
        break;
      }

      // optional .gazebo.msgs.Pose pose = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pose()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_diffuse;
        break;
      }

      // optional .gazebo.msgs.Color diffuse = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_diffuse:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_diffuse()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_specular;
        break;
      }

      // optional .gazebo.msgs.Color specular = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_specular:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_specular()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_attenuation_constant;
        break;
      }

      // optional float attenuation_constant = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_attenuation_constant:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &attenuation_constant_)));
          set_has_attenuation_constant();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_attenuation_linear;
        break;
      }

      // optional float attenuation_linear = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_attenuation_linear:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &attenuation_linear_)));
          set_has_attenuation_linear();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(69)) goto parse_attenuation_quadratic;
        break;
      }

      // optional float attenuation_quadratic = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_attenuation_quadratic:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &attenuation_quadratic_)));
          set_has_attenuation_quadratic();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(74)) goto parse_direction;
        break;
      }

      // optional .gazebo.msgs.Vector3d direction = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_direction:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_direction()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(85)) goto parse_range;
        break;
      }

      // optional float range = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_range:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &range_)));
          set_has_range();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_cast_shadows;
        break;
      }

      // optional bool cast_shadows = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cast_shadows:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &cast_shadows_)));
          set_has_cast_shadows();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(101)) goto parse_spot_inner_angle;
        break;
      }

      // optional float spot_inner_angle = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_spot_inner_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &spot_inner_angle_)));
          set_has_spot_inner_angle();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(109)) goto parse_spot_outer_angle;
        break;
      }

      // optional float spot_outer_angle = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_spot_outer_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &spot_outer_angle_)));
          set_has_spot_outer_angle();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(117)) goto parse_spot_falloff;
        break;
      }

      // optional float spot_falloff = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_spot_falloff:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &spot_falloff_)));
          set_has_spot_falloff();
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

void Light::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }

  // optional .gazebo.msgs.Light.LightType type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional .gazebo.msgs.Pose pose = 3;
  if (has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->pose(), output);
  }

  // optional .gazebo.msgs.Color diffuse = 4;
  if (has_diffuse()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->diffuse(), output);
  }

  // optional .gazebo.msgs.Color specular = 5;
  if (has_specular()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->specular(), output);
  }

  // optional float attenuation_constant = 6;
  if (has_attenuation_constant()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->attenuation_constant(), output);
  }

  // optional float attenuation_linear = 7;
  if (has_attenuation_linear()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->attenuation_linear(), output);
  }

  // optional float attenuation_quadratic = 8;
  if (has_attenuation_quadratic()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->attenuation_quadratic(), output);
  }

  // optional .gazebo.msgs.Vector3d direction = 9;
  if (has_direction()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->direction(), output);
  }

  // optional float range = 10;
  if (has_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(10, this->range(), output);
  }

  // optional bool cast_shadows = 11;
  if (has_cast_shadows()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->cast_shadows(), output);
  }

  // optional float spot_inner_angle = 12;
  if (has_spot_inner_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(12, this->spot_inner_angle(), output);
  }

  // optional float spot_outer_angle = 13;
  if (has_spot_outer_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(13, this->spot_outer_angle(), output);
  }

  // optional float spot_falloff = 14;
  if (has_spot_falloff()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(14, this->spot_falloff(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Light::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional .gazebo.msgs.Light.LightType type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // optional .gazebo.msgs.Pose pose = 3;
  if (has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->pose(), target);
  }

  // optional .gazebo.msgs.Color diffuse = 4;
  if (has_diffuse()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->diffuse(), target);
  }

  // optional .gazebo.msgs.Color specular = 5;
  if (has_specular()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->specular(), target);
  }

  // optional float attenuation_constant = 6;
  if (has_attenuation_constant()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->attenuation_constant(), target);
  }

  // optional float attenuation_linear = 7;
  if (has_attenuation_linear()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->attenuation_linear(), target);
  }

  // optional float attenuation_quadratic = 8;
  if (has_attenuation_quadratic()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->attenuation_quadratic(), target);
  }

  // optional .gazebo.msgs.Vector3d direction = 9;
  if (has_direction()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->direction(), target);
  }

  // optional float range = 10;
  if (has_range()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(10, this->range(), target);
  }

  // optional bool cast_shadows = 11;
  if (has_cast_shadows()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->cast_shadows(), target);
  }

  // optional float spot_inner_angle = 12;
  if (has_spot_inner_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(12, this->spot_inner_angle(), target);
  }

  // optional float spot_outer_angle = 13;
  if (has_spot_outer_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(13, this->spot_outer_angle(), target);
  }

  // optional float spot_falloff = 14;
  if (has_spot_falloff()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(14, this->spot_falloff(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Light::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .gazebo.msgs.Light.LightType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .gazebo.msgs.Pose pose = 3;
    if (has_pose()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pose());
    }

    // optional .gazebo.msgs.Color diffuse = 4;
    if (has_diffuse()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->diffuse());
    }

    // optional .gazebo.msgs.Color specular = 5;
    if (has_specular()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->specular());
    }

    // optional float attenuation_constant = 6;
    if (has_attenuation_constant()) {
      total_size += 1 + 4;
    }

    // optional float attenuation_linear = 7;
    if (has_attenuation_linear()) {
      total_size += 1 + 4;
    }

    // optional float attenuation_quadratic = 8;
    if (has_attenuation_quadratic()) {
      total_size += 1 + 4;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional .gazebo.msgs.Vector3d direction = 9;
    if (has_direction()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->direction());
    }

    // optional float range = 10;
    if (has_range()) {
      total_size += 1 + 4;
    }

    // optional bool cast_shadows = 11;
    if (has_cast_shadows()) {
      total_size += 1 + 1;
    }

    // optional float spot_inner_angle = 12;
    if (has_spot_inner_angle()) {
      total_size += 1 + 4;
    }

    // optional float spot_outer_angle = 13;
    if (has_spot_outer_angle()) {
      total_size += 1 + 4;
    }

    // optional float spot_falloff = 14;
    if (has_spot_falloff()) {
      total_size += 1 + 4;
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

void Light::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Light* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Light*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Light::MergeFrom(const Light& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_pose()) {
      mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from.pose());
    }
    if (from.has_diffuse()) {
      mutable_diffuse()->::gazebo::msgs::Color::MergeFrom(from.diffuse());
    }
    if (from.has_specular()) {
      mutable_specular()->::gazebo::msgs::Color::MergeFrom(from.specular());
    }
    if (from.has_attenuation_constant()) {
      set_attenuation_constant(from.attenuation_constant());
    }
    if (from.has_attenuation_linear()) {
      set_attenuation_linear(from.attenuation_linear());
    }
    if (from.has_attenuation_quadratic()) {
      set_attenuation_quadratic(from.attenuation_quadratic());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_direction()) {
      mutable_direction()->::gazebo::msgs::Vector3d::MergeFrom(from.direction());
    }
    if (from.has_range()) {
      set_range(from.range());
    }
    if (from.has_cast_shadows()) {
      set_cast_shadows(from.cast_shadows());
    }
    if (from.has_spot_inner_angle()) {
      set_spot_inner_angle(from.spot_inner_angle());
    }
    if (from.has_spot_outer_angle()) {
      set_spot_outer_angle(from.spot_outer_angle());
    }
    if (from.has_spot_falloff()) {
      set_spot_falloff(from.spot_falloff());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Light::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Light::CopyFrom(const Light& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Light::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_pose()) {
    if (!this->pose().IsInitialized()) return false;
  }
  if (has_diffuse()) {
    if (!this->diffuse().IsInitialized()) return false;
  }
  if (has_specular()) {
    if (!this->specular().IsInitialized()) return false;
  }
  if (has_direction()) {
    if (!this->direction().IsInitialized()) return false;
  }
  return true;
}

void Light::Swap(Light* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(type_, other->type_);
    std::swap(pose_, other->pose_);
    std::swap(diffuse_, other->diffuse_);
    std::swap(specular_, other->specular_);
    std::swap(attenuation_constant_, other->attenuation_constant_);
    std::swap(attenuation_linear_, other->attenuation_linear_);
    std::swap(attenuation_quadratic_, other->attenuation_quadratic_);
    std::swap(direction_, other->direction_);
    std::swap(range_, other->range_);
    std::swap(cast_shadows_, other->cast_shadows_);
    std::swap(spot_inner_angle_, other->spot_inner_angle_);
    std::swap(spot_outer_angle_, other->spot_outer_angle_);
    std::swap(spot_falloff_, other->spot_falloff_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Light::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Light_descriptor_;
  metadata.reflection = Light_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Light", Light)
// @@protoc_insertion_point(global_scope)

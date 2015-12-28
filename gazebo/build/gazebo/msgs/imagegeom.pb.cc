// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: imagegeom.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "imagegeom.pb.h"

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

const ::google::protobuf::Descriptor* ImageGeom_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ImageGeom_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_imagegeom_2eproto() {
  protobuf_AddDesc_imagegeom_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "imagegeom.proto");
  GOOGLE_CHECK(file != NULL);
  ImageGeom_descriptor_ = file->message_type(0);
  static const int ImageGeom_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageGeom, uri_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageGeom, scale_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageGeom, threshold_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageGeom, height_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageGeom, granularity_),
  };
  ImageGeom_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ImageGeom_descriptor_,
      ImageGeom::default_instance_,
      ImageGeom_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageGeom, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageGeom, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ImageGeom));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_imagegeom_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ImageGeom_descriptor_, &ImageGeom::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_imagegeom_2eproto() {
  delete ImageGeom::default_instance_;
  delete ImageGeom_reflection_;
}

void protobuf_AddDesc_imagegeom_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017imagegeom.proto\022\013gazebo.msgs\"d\n\tImageG"
    "eom\022\013\n\003uri\030\001 \002(\t\022\r\n\005scale\030\002 \001(\001\022\026\n\tthres"
    "hold\030\003 \001(\005:\003255\022\016\n\006height\030\004 \001(\001\022\023\n\013granu"
    "larity\030\005 \001(\005", 132);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "imagegeom.proto", &protobuf_RegisterTypes);
  ImageGeom::default_instance_ = new ImageGeom();
  ImageGeom::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_imagegeom_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_imagegeom_2eproto {
  StaticDescriptorInitializer_imagegeom_2eproto() {
    protobuf_AddDesc_imagegeom_2eproto();
  }
} static_descriptor_initializer_imagegeom_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ImageGeom::kUriFieldNumber;
const int ImageGeom::kScaleFieldNumber;
const int ImageGeom::kThresholdFieldNumber;
const int ImageGeom::kHeightFieldNumber;
const int ImageGeom::kGranularityFieldNumber;
#endif  // !_MSC_VER

ImageGeom::ImageGeom()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ImageGeom::InitAsDefaultInstance() {
}

ImageGeom::ImageGeom(const ImageGeom& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ImageGeom::SharedCtor() {
  _cached_size_ = 0;
  uri_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  scale_ = 0;
  threshold_ = 255;
  height_ = 0;
  granularity_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ImageGeom::~ImageGeom() {
  SharedDtor();
}

void ImageGeom::SharedDtor() {
  if (uri_ != &::google::protobuf::internal::kEmptyString) {
    delete uri_;
  }
  if (this != default_instance_) {
  }
}

void ImageGeom::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ImageGeom::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImageGeom_descriptor_;
}

const ImageGeom& ImageGeom::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_imagegeom_2eproto();
  return *default_instance_;
}

ImageGeom* ImageGeom::default_instance_ = NULL;

ImageGeom* ImageGeom::New() const {
  return new ImageGeom;
}

void ImageGeom::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_uri()) {
      if (uri_ != &::google::protobuf::internal::kEmptyString) {
        uri_->clear();
      }
    }
    scale_ = 0;
    threshold_ = 255;
    height_ = 0;
    granularity_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ImageGeom::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string uri = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uri()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->uri().data(), this->uri().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_scale;
        break;
      }

      // optional double scale = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_scale:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &scale_)));
          set_has_scale();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_threshold;
        break;
      }

      // optional int32 threshold = 3 [default = 255];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_threshold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &threshold_)));
          set_has_threshold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_height;
        break;
      }

      // optional double height = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_height:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &height_)));
          set_has_height();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_granularity;
        break;
      }

      // optional int32 granularity = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_granularity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &granularity_)));
          set_has_granularity();
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

void ImageGeom::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string uri = 1;
  if (has_uri()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uri().data(), this->uri().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->uri(), output);
  }

  // optional double scale = 2;
  if (has_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->scale(), output);
  }

  // optional int32 threshold = 3 [default = 255];
  if (has_threshold()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->threshold(), output);
  }

  // optional double height = 4;
  if (has_height()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->height(), output);
  }

  // optional int32 granularity = 5;
  if (has_granularity()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->granularity(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ImageGeom::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string uri = 1;
  if (has_uri()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uri().data(), this->uri().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->uri(), target);
  }

  // optional double scale = 2;
  if (has_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->scale(), target);
  }

  // optional int32 threshold = 3 [default = 255];
  if (has_threshold()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->threshold(), target);
  }

  // optional double height = 4;
  if (has_height()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->height(), target);
  }

  // optional int32 granularity = 5;
  if (has_granularity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->granularity(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ImageGeom::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string uri = 1;
    if (has_uri()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uri());
    }

    // optional double scale = 2;
    if (has_scale()) {
      total_size += 1 + 8;
    }

    // optional int32 threshold = 3 [default = 255];
    if (has_threshold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->threshold());
    }

    // optional double height = 4;
    if (has_height()) {
      total_size += 1 + 8;
    }

    // optional int32 granularity = 5;
    if (has_granularity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->granularity());
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

void ImageGeom::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ImageGeom* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ImageGeom*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ImageGeom::MergeFrom(const ImageGeom& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uri()) {
      set_uri(from.uri());
    }
    if (from.has_scale()) {
      set_scale(from.scale());
    }
    if (from.has_threshold()) {
      set_threshold(from.threshold());
    }
    if (from.has_height()) {
      set_height(from.height());
    }
    if (from.has_granularity()) {
      set_granularity(from.granularity());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ImageGeom::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImageGeom::CopyFrom(const ImageGeom& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageGeom::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ImageGeom::Swap(ImageGeom* other) {
  if (other != this) {
    std::swap(uri_, other->uri_);
    std::swap(scale_, other->scale_);
    std::swap(threshold_, other->threshold_);
    std::swap(height_, other->height_);
    std::swap(granularity_, other->granularity_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ImageGeom::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ImageGeom_descriptor_;
  metadata.reflection = ImageGeom_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

GZ_REGISTER_STATIC_MSG("gazebo.msgs.ImageGeom", ImageGeom)
// @@protoc_insertion_point(global_scope)

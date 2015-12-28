// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: topic_info.proto

#ifndef PROTOBUF_topic_5finfo_2eproto__INCLUDED
#define PROTOBUF_topic_5finfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "publish.pb.h"
#include "subscribe.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_topic_5finfo_2eproto();
void protobuf_AssignDesc_topic_5finfo_2eproto();
void protobuf_ShutdownFile_topic_5finfo_2eproto();

class TopicInfo;

// ===================================================================

class TopicInfo : public ::google::protobuf::Message {
 public:
  TopicInfo();
  virtual ~TopicInfo();

  TopicInfo(const TopicInfo& from);

  inline TopicInfo& operator=(const TopicInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TopicInfo& default_instance();

  void Swap(TopicInfo* other);

  // implements Message ----------------------------------------------

  TopicInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TopicInfo& from);
  void MergeFrom(const TopicInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string msg_type = 1;
  inline bool has_msg_type() const;
  inline void clear_msg_type();
  static const int kMsgTypeFieldNumber = 1;
  inline const ::std::string& msg_type() const;
  inline void set_msg_type(const ::std::string& value);
  inline void set_msg_type(const char* value);
  inline void set_msg_type(const char* value, size_t size);
  inline ::std::string* mutable_msg_type();
  inline ::std::string* release_msg_type();
  inline void set_allocated_msg_type(::std::string* msg_type);

  // repeated .gazebo.msgs.Publish publisher = 2;
  inline int publisher_size() const;
  inline void clear_publisher();
  static const int kPublisherFieldNumber = 2;
  inline const ::gazebo::msgs::Publish& publisher(int index) const;
  inline ::gazebo::msgs::Publish* mutable_publisher(int index);
  inline ::gazebo::msgs::Publish* add_publisher();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Publish >&
      publisher() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Publish >*
      mutable_publisher();

  // repeated .gazebo.msgs.Subscribe subscriber = 3;
  inline int subscriber_size() const;
  inline void clear_subscriber();
  static const int kSubscriberFieldNumber = 3;
  inline const ::gazebo::msgs::Subscribe& subscriber(int index) const;
  inline ::gazebo::msgs::Subscribe* mutable_subscriber(int index);
  inline ::gazebo::msgs::Subscribe* add_subscriber();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Subscribe >&
      subscriber() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Subscribe >*
      mutable_subscriber();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.TopicInfo)
 private:
  inline void set_has_msg_type();
  inline void clear_has_msg_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* msg_type_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Publish > publisher_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Subscribe > subscriber_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_topic_5finfo_2eproto();
  friend void protobuf_AssignDesc_topic_5finfo_2eproto();
  friend void protobuf_ShutdownFile_topic_5finfo_2eproto();

  void InitAsDefaultInstance();
  static TopicInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// TopicInfo

// required string msg_type = 1;
inline bool TopicInfo::has_msg_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TopicInfo::set_has_msg_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TopicInfo::clear_has_msg_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TopicInfo::clear_msg_type() {
  if (msg_type_ != &::google::protobuf::internal::kEmptyString) {
    msg_type_->clear();
  }
  clear_has_msg_type();
}
inline const ::std::string& TopicInfo::msg_type() const {
  return *msg_type_;
}
inline void TopicInfo::set_msg_type(const ::std::string& value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void TopicInfo::set_msg_type(const char* value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void TopicInfo::set_msg_type(const char* value, size_t size) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TopicInfo::mutable_msg_type() {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  return msg_type_;
}
inline ::std::string* TopicInfo::release_msg_type() {
  clear_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_type_;
    msg_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TopicInfo::set_allocated_msg_type(::std::string* msg_type) {
  if (msg_type_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_type_;
  }
  if (msg_type) {
    set_has_msg_type();
    msg_type_ = msg_type;
  } else {
    clear_has_msg_type();
    msg_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .gazebo.msgs.Publish publisher = 2;
inline int TopicInfo::publisher_size() const {
  return publisher_.size();
}
inline void TopicInfo::clear_publisher() {
  publisher_.Clear();
}
inline const ::gazebo::msgs::Publish& TopicInfo::publisher(int index) const {
  return publisher_.Get(index);
}
inline ::gazebo::msgs::Publish* TopicInfo::mutable_publisher(int index) {
  return publisher_.Mutable(index);
}
inline ::gazebo::msgs::Publish* TopicInfo::add_publisher() {
  return publisher_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Publish >&
TopicInfo::publisher() const {
  return publisher_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Publish >*
TopicInfo::mutable_publisher() {
  return &publisher_;
}

// repeated .gazebo.msgs.Subscribe subscriber = 3;
inline int TopicInfo::subscriber_size() const {
  return subscriber_.size();
}
inline void TopicInfo::clear_subscriber() {
  subscriber_.Clear();
}
inline const ::gazebo::msgs::Subscribe& TopicInfo::subscriber(int index) const {
  return subscriber_.Get(index);
}
inline ::gazebo::msgs::Subscribe* TopicInfo::mutable_subscriber(int index) {
  return subscriber_.Mutable(index);
}
inline ::gazebo::msgs::Subscribe* TopicInfo::add_subscriber() {
  return subscriber_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Subscribe >&
TopicInfo::subscriber() const {
  return subscriber_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Subscribe >*
TopicInfo::mutable_subscriber() {
  return &subscriber_;
}


typedef boost::shared_ptr<gazebo::msgs::TopicInfo> TopicInfoPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::TopicInfo const> ConstTopicInfoPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_topic_5finfo_2eproto__INCLUDED

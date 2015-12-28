// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wireless_nodes.proto

#ifndef PROTOBUF_wireless_5fnodes_2eproto__INCLUDED
#define PROTOBUF_wireless_5fnodes_2eproto__INCLUDED

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
#include "wireless_node.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_wireless_5fnodes_2eproto();
void protobuf_AssignDesc_wireless_5fnodes_2eproto();
void protobuf_ShutdownFile_wireless_5fnodes_2eproto();

class WirelessNodes;

// ===================================================================

class WirelessNodes : public ::google::protobuf::Message {
 public:
  WirelessNodes();
  virtual ~WirelessNodes();

  WirelessNodes(const WirelessNodes& from);

  inline WirelessNodes& operator=(const WirelessNodes& from) {
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
  static const WirelessNodes& default_instance();

  void Swap(WirelessNodes* other);

  // implements Message ----------------------------------------------

  WirelessNodes* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WirelessNodes& from);
  void MergeFrom(const WirelessNodes& from);
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

  // repeated .gazebo.msgs.WirelessNode node = 1;
  inline int node_size() const;
  inline void clear_node();
  static const int kNodeFieldNumber = 1;
  inline const ::gazebo::msgs::WirelessNode& node(int index) const;
  inline ::gazebo::msgs::WirelessNode* mutable_node(int index);
  inline ::gazebo::msgs::WirelessNode* add_node();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::WirelessNode >&
      node() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::WirelessNode >*
      mutable_node();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.WirelessNodes)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::WirelessNode > node_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_wireless_5fnodes_2eproto();
  friend void protobuf_AssignDesc_wireless_5fnodes_2eproto();
  friend void protobuf_ShutdownFile_wireless_5fnodes_2eproto();

  void InitAsDefaultInstance();
  static WirelessNodes* default_instance_;
};
// ===================================================================


// ===================================================================

// WirelessNodes

// repeated .gazebo.msgs.WirelessNode node = 1;
inline int WirelessNodes::node_size() const {
  return node_.size();
}
inline void WirelessNodes::clear_node() {
  node_.Clear();
}
inline const ::gazebo::msgs::WirelessNode& WirelessNodes::node(int index) const {
  return node_.Get(index);
}
inline ::gazebo::msgs::WirelessNode* WirelessNodes::mutable_node(int index) {
  return node_.Mutable(index);
}
inline ::gazebo::msgs::WirelessNode* WirelessNodes::add_node() {
  return node_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::WirelessNode >&
WirelessNodes::node() const {
  return node_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::WirelessNode >*
WirelessNodes::mutable_node() {
  return &node_;
}


typedef boost::shared_ptr<gazebo::msgs::WirelessNodes> WirelessNodesPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::WirelessNodes const> ConstWirelessNodesPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_wireless_5fnodes_2eproto__INCLUDED

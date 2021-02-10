// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GM.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GM_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GM_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GM_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GM_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GM_2eproto;
class CloseServerRequest;
class CloseServerRequestDefaultTypeInternal;
extern CloseServerRequestDefaultTypeInternal _CloseServerRequest_default_instance_;
class CloseServerResponse;
class CloseServerResponseDefaultTypeInternal;
extern CloseServerResponseDefaultTypeInternal _CloseServerResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::CloseServerRequest* Arena::CreateMaybeMessage<::CloseServerRequest>(Arena*);
template<> ::CloseServerResponse* Arena::CreateMaybeMessage<::CloseServerResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class CloseServerRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CloseServerRequest) */ {
 public:
  inline CloseServerRequest() : CloseServerRequest(nullptr) {}
  virtual ~CloseServerRequest();

  CloseServerRequest(const CloseServerRequest& from);
  CloseServerRequest(CloseServerRequest&& from) noexcept
    : CloseServerRequest() {
    *this = ::std::move(from);
  }

  inline CloseServerRequest& operator=(const CloseServerRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline CloseServerRequest& operator=(CloseServerRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CloseServerRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CloseServerRequest* internal_default_instance() {
    return reinterpret_cast<const CloseServerRequest*>(
               &_CloseServerRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CloseServerRequest& a, CloseServerRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(CloseServerRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CloseServerRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CloseServerRequest* New() const final {
    return CreateMaybeMessage<CloseServerRequest>(nullptr);
  }

  CloseServerRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CloseServerRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CloseServerRequest& from);
  void MergeFrom(const CloseServerRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CloseServerRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CloseServerRequest";
  }
  protected:
  explicit CloseServerRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_GM_2eproto);
    return ::descriptor_table_GM_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResMsgFieldNumber = 1,
  };
  // string resMsg = 1;
  void clear_resmsg();
  const std::string& resmsg() const;
  void set_resmsg(const std::string& value);
  void set_resmsg(std::string&& value);
  void set_resmsg(const char* value);
  void set_resmsg(const char* value, size_t size);
  std::string* mutable_resmsg();
  std::string* release_resmsg();
  void set_allocated_resmsg(std::string* resmsg);
  private:
  const std::string& _internal_resmsg() const;
  void _internal_set_resmsg(const std::string& value);
  std::string* _internal_mutable_resmsg();
  public:

  // @@protoc_insertion_point(class_scope:CloseServerRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr resmsg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_GM_2eproto;
};
// -------------------------------------------------------------------

class CloseServerResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CloseServerResponse) */ {
 public:
  inline CloseServerResponse() : CloseServerResponse(nullptr) {}
  virtual ~CloseServerResponse();

  CloseServerResponse(const CloseServerResponse& from);
  CloseServerResponse(CloseServerResponse&& from) noexcept
    : CloseServerResponse() {
    *this = ::std::move(from);
  }

  inline CloseServerResponse& operator=(const CloseServerResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline CloseServerResponse& operator=(CloseServerResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CloseServerResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CloseServerResponse* internal_default_instance() {
    return reinterpret_cast<const CloseServerResponse*>(
               &_CloseServerResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CloseServerResponse& a, CloseServerResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(CloseServerResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CloseServerResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CloseServerResponse* New() const final {
    return CreateMaybeMessage<CloseServerResponse>(nullptr);
  }

  CloseServerResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CloseServerResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CloseServerResponse& from);
  void MergeFrom(const CloseServerResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CloseServerResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CloseServerResponse";
  }
  protected:
  explicit CloseServerResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_GM_2eproto);
    return ::descriptor_table_GM_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResMsgFieldNumber = 1,
  };
  // string resMsg = 1;
  void clear_resmsg();
  const std::string& resmsg() const;
  void set_resmsg(const std::string& value);
  void set_resmsg(std::string&& value);
  void set_resmsg(const char* value);
  void set_resmsg(const char* value, size_t size);
  std::string* mutable_resmsg();
  std::string* release_resmsg();
  void set_allocated_resmsg(std::string* resmsg);
  private:
  const std::string& _internal_resmsg() const;
  void _internal_set_resmsg(const std::string& value);
  std::string* _internal_mutable_resmsg();
  public:

  // @@protoc_insertion_point(class_scope:CloseServerResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr resmsg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_GM_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CloseServerRequest

// string resMsg = 1;
inline void CloseServerRequest::clear_resmsg() {
  resmsg_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CloseServerRequest::resmsg() const {
  // @@protoc_insertion_point(field_get:CloseServerRequest.resMsg)
  return _internal_resmsg();
}
inline void CloseServerRequest::set_resmsg(const std::string& value) {
  _internal_set_resmsg(value);
  // @@protoc_insertion_point(field_set:CloseServerRequest.resMsg)
}
inline std::string* CloseServerRequest::mutable_resmsg() {
  // @@protoc_insertion_point(field_mutable:CloseServerRequest.resMsg)
  return _internal_mutable_resmsg();
}
inline const std::string& CloseServerRequest::_internal_resmsg() const {
  return resmsg_.Get();
}
inline void CloseServerRequest::_internal_set_resmsg(const std::string& value) {
  
  resmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CloseServerRequest::set_resmsg(std::string&& value) {
  
  resmsg_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CloseServerRequest.resMsg)
}
inline void CloseServerRequest::set_resmsg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  resmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:CloseServerRequest.resMsg)
}
inline void CloseServerRequest::set_resmsg(const char* value,
    size_t size) {
  
  resmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CloseServerRequest.resMsg)
}
inline std::string* CloseServerRequest::_internal_mutable_resmsg() {
  
  return resmsg_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CloseServerRequest::release_resmsg() {
  // @@protoc_insertion_point(field_release:CloseServerRequest.resMsg)
  return resmsg_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CloseServerRequest::set_allocated_resmsg(std::string* resmsg) {
  if (resmsg != nullptr) {
    
  } else {
    
  }
  resmsg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), resmsg,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CloseServerRequest.resMsg)
}

// -------------------------------------------------------------------

// CloseServerResponse

// string resMsg = 1;
inline void CloseServerResponse::clear_resmsg() {
  resmsg_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CloseServerResponse::resmsg() const {
  // @@protoc_insertion_point(field_get:CloseServerResponse.resMsg)
  return _internal_resmsg();
}
inline void CloseServerResponse::set_resmsg(const std::string& value) {
  _internal_set_resmsg(value);
  // @@protoc_insertion_point(field_set:CloseServerResponse.resMsg)
}
inline std::string* CloseServerResponse::mutable_resmsg() {
  // @@protoc_insertion_point(field_mutable:CloseServerResponse.resMsg)
  return _internal_mutable_resmsg();
}
inline const std::string& CloseServerResponse::_internal_resmsg() const {
  return resmsg_.Get();
}
inline void CloseServerResponse::_internal_set_resmsg(const std::string& value) {
  
  resmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CloseServerResponse::set_resmsg(std::string&& value) {
  
  resmsg_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CloseServerResponse.resMsg)
}
inline void CloseServerResponse::set_resmsg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  resmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:CloseServerResponse.resMsg)
}
inline void CloseServerResponse::set_resmsg(const char* value,
    size_t size) {
  
  resmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CloseServerResponse.resMsg)
}
inline std::string* CloseServerResponse::_internal_mutable_resmsg() {
  
  return resmsg_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CloseServerResponse::release_resmsg() {
  // @@protoc_insertion_point(field_release:CloseServerResponse.resMsg)
  return resmsg_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CloseServerResponse::set_allocated_resmsg(std::string* resmsg) {
  if (resmsg != nullptr) {
    
  } else {
    
  }
  resmsg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), resmsg,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CloseServerResponse.resMsg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GM_2eproto
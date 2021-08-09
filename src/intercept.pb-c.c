/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: intercept.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "intercept.pb-c.h"
void   intercept_message__init
                     (InterceptMessage         *message)
{
  static const InterceptMessage init_value = INTERCEPT_MESSAGE__INIT;
  *message = init_value;
}
size_t intercept_message__get_packed_size
                     (const InterceptMessage *message)
{
  assert(message->base.descriptor == &intercept_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t intercept_message__pack
                     (const InterceptMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &intercept_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t intercept_message__pack_to_buffer
                     (const InterceptMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &intercept_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
InterceptMessage *
       intercept_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (InterceptMessage *)
     protobuf_c_message_unpack (&intercept_message__descriptor,
                                allocator, len, data);
}
void   intercept_message__free_unpacked
                     (InterceptMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &intercept_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_check_request__init
                     (PolicyCheckRequest         *message)
{
  static const PolicyCheckRequest init_value = POLICY_CHECK_REQUEST__INIT;
  *message = init_value;
}
size_t policy_check_request__get_packed_size
                     (const PolicyCheckRequest *message)
{
  assert(message->base.descriptor == &policy_check_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_check_request__pack
                     (const PolicyCheckRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_check_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_check_request__pack_to_buffer
                     (const PolicyCheckRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_check_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyCheckRequest *
       policy_check_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyCheckRequest *)
     protobuf_c_message_unpack (&policy_check_request__descriptor,
                                allocator, len, data);
}
void   policy_check_request__free_unpacked
                     (PolicyCheckRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_check_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_accept_message__init
                     (PolicyAcceptMessage         *message)
{
  static const PolicyAcceptMessage init_value = POLICY_ACCEPT_MESSAGE__INIT;
  *message = init_value;
}
size_t policy_accept_message__get_packed_size
                     (const PolicyAcceptMessage *message)
{
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_accept_message__pack
                     (const PolicyAcceptMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_accept_message__pack_to_buffer
                     (const PolicyAcceptMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyAcceptMessage *
       policy_accept_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyAcceptMessage *)
     protobuf_c_message_unpack (&policy_accept_message__descriptor,
                                allocator, len, data);
}
void   policy_accept_message__free_unpacked
                     (PolicyAcceptMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_accept_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_reject_message__init
                     (PolicyRejectMessage         *message)
{
  static const PolicyRejectMessage init_value = POLICY_REJECT_MESSAGE__INIT;
  *message = init_value;
}
size_t policy_reject_message__get_packed_size
                     (const PolicyRejectMessage *message)
{
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_reject_message__pack
                     (const PolicyRejectMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_reject_message__pack_to_buffer
                     (const PolicyRejectMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyRejectMessage *
       policy_reject_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyRejectMessage *)
     protobuf_c_message_unpack (&policy_reject_message__descriptor,
                                allocator, len, data);
}
void   policy_reject_message__free_unpacked
                     (PolicyRejectMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_reject_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_error_message__init
                     (PolicyErrorMessage         *message)
{
  static const PolicyErrorMessage init_value = POLICY_ERROR_MESSAGE__INIT;
  *message = init_value;
}
size_t policy_error_message__get_packed_size
                     (const PolicyErrorMessage *message)
{
  assert(message->base.descriptor == &policy_error_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_error_message__pack
                     (const PolicyErrorMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_error_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_error_message__pack_to_buffer
                     (const PolicyErrorMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_error_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyErrorMessage *
       policy_error_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyErrorMessage *)
     protobuf_c_message_unpack (&policy_error_message__descriptor,
                                allocator, len, data);
}
void   policy_error_message__free_unpacked
                     (PolicyErrorMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_error_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   policy_check_result__init
                     (PolicyCheckResult         *message)
{
  static const PolicyCheckResult init_value = POLICY_CHECK_RESULT__INIT;
  *message = init_value;
}
size_t policy_check_result__get_packed_size
                     (const PolicyCheckResult *message)
{
  assert(message->base.descriptor == &policy_check_result__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t policy_check_result__pack
                     (const PolicyCheckResult *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &policy_check_result__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t policy_check_result__pack_to_buffer
                     (const PolicyCheckResult *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &policy_check_result__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PolicyCheckResult *
       policy_check_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PolicyCheckResult *)
     protobuf_c_message_unpack (&policy_check_result__descriptor,
                                allocator, len, data);
}
void   policy_check_result__free_unpacked
                     (PolicyCheckResult *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &policy_check_result__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor intercept_message__field_descriptors[1] =
{
  {
    "policy_check_req",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(InterceptMessage, type_case),
    offsetof(InterceptMessage, u.policy_check_req),
    &policy_check_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned intercept_message__field_indices_by_name[] = {
  0,   /* field[0] = policy_check_req */
};
static const ProtobufCIntRange intercept_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor intercept_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "InterceptMessage",
  "InterceptMessage",
  "InterceptMessage",
  "",
  sizeof(InterceptMessage),
  1,
  intercept_message__field_descriptors,
  intercept_message__field_indices_by_name,
  1,  intercept_message__number_ranges,
  (ProtobufCMessageInit) intercept_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_check_request__field_descriptors[3] =
{
  {
    "command",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyCheckRequest, command),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "argv",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyCheckRequest, n_argv),
    offsetof(PolicyCheckRequest, argv),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "envp",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyCheckRequest, n_envp),
    offsetof(PolicyCheckRequest, envp),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_check_request__field_indices_by_name[] = {
  1,   /* field[1] = argv */
  0,   /* field[0] = command */
  2,   /* field[2] = envp */
};
static const ProtobufCIntRange policy_check_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor policy_check_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyCheckRequest",
  "PolicyCheckRequest",
  "PolicyCheckRequest",
  "",
  sizeof(PolicyCheckRequest),
  3,
  policy_check_request__field_descriptors,
  policy_check_request__field_indices_by_name,
  1,  policy_check_request__number_ranges,
  (ProtobufCMessageInit) policy_check_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_accept_message__field_descriptors[3] =
{
  {
    "run_command",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyAcceptMessage, run_command),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "run_argv",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyAcceptMessage, n_run_argv),
    offsetof(PolicyAcceptMessage, run_argv),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "run_envp",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PolicyAcceptMessage, n_run_envp),
    offsetof(PolicyAcceptMessage, run_envp),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_accept_message__field_indices_by_name[] = {
  1,   /* field[1] = run_argv */
  0,   /* field[0] = run_command */
  2,   /* field[2] = run_envp */
};
static const ProtobufCIntRange policy_accept_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor policy_accept_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyAcceptMessage",
  "PolicyAcceptMessage",
  "PolicyAcceptMessage",
  "",
  sizeof(PolicyAcceptMessage),
  3,
  policy_accept_message__field_descriptors,
  policy_accept_message__field_indices_by_name,
  1,  policy_accept_message__number_ranges,
  (ProtobufCMessageInit) policy_accept_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_reject_message__field_descriptors[1] =
{
  {
    "reject_message",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyRejectMessage, reject_message),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_reject_message__field_indices_by_name[] = {
  0,   /* field[0] = reject_message */
};
static const ProtobufCIntRange policy_reject_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor policy_reject_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyRejectMessage",
  "PolicyRejectMessage",
  "PolicyRejectMessage",
  "",
  sizeof(PolicyRejectMessage),
  1,
  policy_reject_message__field_descriptors,
  policy_reject_message__field_indices_by_name,
  1,  policy_reject_message__number_ranges,
  (ProtobufCMessageInit) policy_reject_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_error_message__field_descriptors[1] =
{
  {
    "error_message",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(PolicyErrorMessage, error_message),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_error_message__field_indices_by_name[] = {
  0,   /* field[0] = error_message */
};
static const ProtobufCIntRange policy_error_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor policy_error_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyErrorMessage",
  "PolicyErrorMessage",
  "PolicyErrorMessage",
  "",
  sizeof(PolicyErrorMessage),
  1,
  policy_error_message__field_descriptors,
  policy_error_message__field_indices_by_name,
  1,  policy_error_message__number_ranges,
  (ProtobufCMessageInit) policy_error_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor policy_check_result__field_descriptors[3] =
{
  {
    "accept_msg",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PolicyCheckResult, type_case),
    offsetof(PolicyCheckResult, u.accept_msg),
    &policy_accept_message__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reject_msg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PolicyCheckResult, type_case),
    offsetof(PolicyCheckResult, u.reject_msg),
    &policy_reject_message__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "error_msg",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PolicyCheckResult, type_case),
    offsetof(PolicyCheckResult, u.error_msg),
    &policy_error_message__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned policy_check_result__field_indices_by_name[] = {
  0,   /* field[0] = accept_msg */
  2,   /* field[2] = error_msg */
  1,   /* field[1] = reject_msg */
};
static const ProtobufCIntRange policy_check_result__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor policy_check_result__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PolicyCheckResult",
  "PolicyCheckResult",
  "PolicyCheckResult",
  "",
  sizeof(PolicyCheckResult),
  3,
  policy_check_result__field_descriptors,
  policy_check_result__field_indices_by_name,
  1,  policy_check_result__number_ranges,
  (ProtobufCMessageInit) policy_check_result__init,
  NULL,NULL,NULL    /* reserved[123] */
};
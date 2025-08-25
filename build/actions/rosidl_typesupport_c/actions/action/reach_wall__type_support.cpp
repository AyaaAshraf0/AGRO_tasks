// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from actions:action/ReachWall.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "actions/action/detail/reach_wall__struct.h"
#include "actions/action/detail/reach_wall__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_Goal_type_support_ids_t;

static const _ReachWall_Goal_type_support_ids_t _ReachWall_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_Goal_type_support_symbol_names_t _ReachWall_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_Goal)),
  }
};

typedef struct _ReachWall_Goal_type_support_data_t
{
  void * data[2];
} _ReachWall_Goal_type_support_data_t;

static _ReachWall_Goal_type_support_data_t _ReachWall_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_Goal_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_Goal)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_Result_type_support_ids_t;

static const _ReachWall_Result_type_support_ids_t _ReachWall_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_Result_type_support_symbol_names_t _ReachWall_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_Result)),
  }
};

typedef struct _ReachWall_Result_type_support_data_t
{
  void * data[2];
} _ReachWall_Result_type_support_data_t;

static _ReachWall_Result_type_support_data_t _ReachWall_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_Result_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_Result)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_Feedback_type_support_ids_t;

static const _ReachWall_Feedback_type_support_ids_t _ReachWall_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_Feedback_type_support_symbol_names_t _ReachWall_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_Feedback)),
  }
};

typedef struct _ReachWall_Feedback_type_support_data_t
{
  void * data[2];
} _ReachWall_Feedback_type_support_data_t;

static _ReachWall_Feedback_type_support_data_t _ReachWall_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_Feedback_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_Feedback)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_SendGoal_Request_type_support_ids_t;

static const _ReachWall_SendGoal_Request_type_support_ids_t _ReachWall_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_SendGoal_Request_type_support_symbol_names_t _ReachWall_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_SendGoal_Request)),
  }
};

typedef struct _ReachWall_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ReachWall_SendGoal_Request_type_support_data_t;

static _ReachWall_SendGoal_Request_type_support_data_t _ReachWall_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_SendGoal_Request_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_SendGoal_Request)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_SendGoal_Response_type_support_ids_t;

static const _ReachWall_SendGoal_Response_type_support_ids_t _ReachWall_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_SendGoal_Response_type_support_symbol_names_t _ReachWall_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_SendGoal_Response)),
  }
};

typedef struct _ReachWall_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ReachWall_SendGoal_Response_type_support_data_t;

static _ReachWall_SendGoal_Response_type_support_data_t _ReachWall_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_SendGoal_Response_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_SendGoal_Response)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_SendGoal_type_support_ids_t;

static const _ReachWall_SendGoal_type_support_ids_t _ReachWall_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_SendGoal_type_support_symbol_names_t _ReachWall_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_SendGoal)),
  }
};

typedef struct _ReachWall_SendGoal_type_support_data_t
{
  void * data[2];
} _ReachWall_SendGoal_type_support_data_t;

static _ReachWall_SendGoal_type_support_data_t _ReachWall_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_SendGoal_service_typesupport_map = {
  2,
  "actions",
  &_ReachWall_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReachWall_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_SendGoal)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_GetResult_Request_type_support_ids_t;

static const _ReachWall_GetResult_Request_type_support_ids_t _ReachWall_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_GetResult_Request_type_support_symbol_names_t _ReachWall_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_GetResult_Request)),
  }
};

typedef struct _ReachWall_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ReachWall_GetResult_Request_type_support_data_t;

static _ReachWall_GetResult_Request_type_support_data_t _ReachWall_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_GetResult_Request_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_GetResult_Request)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_GetResult_Response_type_support_ids_t;

static const _ReachWall_GetResult_Response_type_support_ids_t _ReachWall_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_GetResult_Response_type_support_symbol_names_t _ReachWall_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_GetResult_Response)),
  }
};

typedef struct _ReachWall_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ReachWall_GetResult_Response_type_support_data_t;

static _ReachWall_GetResult_Response_type_support_data_t _ReachWall_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_GetResult_Response_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_GetResult_Response)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_GetResult_type_support_ids_t;

static const _ReachWall_GetResult_type_support_ids_t _ReachWall_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_GetResult_type_support_symbol_names_t _ReachWall_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_GetResult)),
  }
};

typedef struct _ReachWall_GetResult_type_support_data_t
{
  void * data[2];
} _ReachWall_GetResult_type_support_data_t;

static _ReachWall_GetResult_type_support_data_t _ReachWall_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_GetResult_service_typesupport_map = {
  2,
  "actions",
  &_ReachWall_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReachWall_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_GetResult)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ReachWall_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_FeedbackMessage_type_support_ids_t;

static const _ReachWall_FeedbackMessage_type_support_ids_t _ReachWall_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReachWall_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachWall_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachWall_FeedbackMessage_type_support_symbol_names_t _ReachWall_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actions, action, ReachWall_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actions, action, ReachWall_FeedbackMessage)),
  }
};

typedef struct _ReachWall_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ReachWall_FeedbackMessage_type_support_data_t;

static _ReachWall_FeedbackMessage_type_support_data_t _ReachWall_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachWall_FeedbackMessage_message_typesupport_map = {
  2,
  "actions",
  &_ReachWall_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ReachWall_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ReachWall_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachWall_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace actions

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, actions, action, ReachWall_FeedbackMessage)() {
  return &::actions::action::rosidl_typesupport_c::ReachWall_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "actions/action/reach_wall.h"
// already included above
// #include "actions/action/detail/reach_wall__type_support.h"

static rosidl_action_type_support_t _actions__action__ReachWall__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, actions, action, ReachWall)()
{
  // Thread-safe by always writing the same values to the static struct
  _actions__action__ReachWall__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, actions, action, ReachWall_SendGoal)();
  _actions__action__ReachWall__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, actions, action, ReachWall_GetResult)();
  _actions__action__ReachWall__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _actions__action__ReachWall__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, actions, action, ReachWall_FeedbackMessage)();
  _actions__action__ReachWall__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_actions__action__ReachWall__typesupport_c;
}

#ifdef __cplusplus
}
#endif

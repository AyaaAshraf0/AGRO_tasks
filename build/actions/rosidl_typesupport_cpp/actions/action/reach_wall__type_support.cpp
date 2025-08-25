// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from actions:action/ReachWall.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "actions/action/detail/reach_wall__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_Goal_type_support_ids_t;

static const _ReachWall_Goal_type_support_ids_t _ReachWall_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_Goal>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_Goal)() {
  return get_message_type_support_handle<actions::action::ReachWall_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_Result_type_support_ids_t;

static const _ReachWall_Result_type_support_ids_t _ReachWall_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_Result>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_Result)() {
  return get_message_type_support_handle<actions::action::ReachWall_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_Feedback_type_support_ids_t;

static const _ReachWall_Feedback_type_support_ids_t _ReachWall_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_Feedback>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_Feedback)() {
  return get_message_type_support_handle<actions::action::ReachWall_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_SendGoal_Request_type_support_ids_t;

static const _ReachWall_SendGoal_Request_type_support_ids_t _ReachWall_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_SendGoal_Request>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_SendGoal_Request)() {
  return get_message_type_support_handle<actions::action::ReachWall_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_SendGoal_Response_type_support_ids_t;

static const _ReachWall_SendGoal_Response_type_support_ids_t _ReachWall_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_SendGoal_Response>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_SendGoal_Response)() {
  return get_message_type_support_handle<actions::action::ReachWall_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_SendGoal_type_support_ids_t;

static const _ReachWall_SendGoal_type_support_ids_t _ReachWall_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<actions::action::ReachWall_SendGoal>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<actions::action::ReachWall_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_GetResult_Request_type_support_ids_t;

static const _ReachWall_GetResult_Request_type_support_ids_t _ReachWall_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_GetResult_Request>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_GetResult_Request)() {
  return get_message_type_support_handle<actions::action::ReachWall_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_GetResult_Response_type_support_ids_t;

static const _ReachWall_GetResult_Response_type_support_ids_t _ReachWall_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_GetResult_Response>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_GetResult_Response)() {
  return get_message_type_support_handle<actions::action::ReachWall_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_GetResult_type_support_ids_t;

static const _ReachWall_GetResult_type_support_ids_t _ReachWall_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<actions::action::ReachWall_GetResult>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<actions::action::ReachWall_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachWall_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachWall_FeedbackMessage_type_support_ids_t;

static const _ReachWall_FeedbackMessage_type_support_ids_t _ReachWall_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions, action, ReachWall_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions, action, ReachWall_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachWall_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions::action::ReachWall_FeedbackMessage>()
{
  return &::actions::action::rosidl_typesupport_cpp::ReachWall_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall_FeedbackMessage)() {
  return get_message_type_support_handle<actions::action::ReachWall_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ReachWall_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<actions::action::ReachWall>()
{
  using ::actions::action::rosidl_typesupport_cpp::ReachWall_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ReachWall_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::actions::action::ReachWall::Impl::SendGoalService>();
  ReachWall_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::actions::action::ReachWall::Impl::GetResultService>();
  ReachWall_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::actions::action::ReachWall::Impl::CancelGoalService>();
  ReachWall_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::actions::action::ReachWall::Impl::FeedbackMessage>();
  ReachWall_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::actions::action::ReachWall::Impl::GoalStatusMessage>();
  return &ReachWall_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, actions, action, ReachWall)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<actions::action::ReachWall>();
}

#ifdef __cplusplus
}
#endif

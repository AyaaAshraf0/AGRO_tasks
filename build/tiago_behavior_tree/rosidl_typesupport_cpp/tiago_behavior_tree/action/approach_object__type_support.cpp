// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from tiago_behavior_tree:action/ApproachObject.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_Goal_type_support_ids_t;

static const _ApproachObject_Goal_type_support_ids_t _ApproachObject_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_Goal_type_support_symbol_names_t _ApproachObject_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_Goal)),
  }
};

typedef struct _ApproachObject_Goal_type_support_data_t
{
  void * data[2];
} _ApproachObject_Goal_type_support_data_t;

static _ApproachObject_Goal_type_support_data_t _ApproachObject_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_Goal_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_Goal>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_Goal)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_Goal>();
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
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_Result_type_support_ids_t;

static const _ApproachObject_Result_type_support_ids_t _ApproachObject_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_Result_type_support_symbol_names_t _ApproachObject_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_Result)),
  }
};

typedef struct _ApproachObject_Result_type_support_data_t
{
  void * data[2];
} _ApproachObject_Result_type_support_data_t;

static _ApproachObject_Result_type_support_data_t _ApproachObject_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_Result_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_Result>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_Result)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_Result>();
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
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_Feedback_type_support_ids_t;

static const _ApproachObject_Feedback_type_support_ids_t _ApproachObject_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_Feedback_type_support_symbol_names_t _ApproachObject_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_Feedback)),
  }
};

typedef struct _ApproachObject_Feedback_type_support_data_t
{
  void * data[2];
} _ApproachObject_Feedback_type_support_data_t;

static _ApproachObject_Feedback_type_support_data_t _ApproachObject_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_Feedback_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_Feedback>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_Feedback)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_Feedback>();
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
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_SendGoal_Request_type_support_ids_t;

static const _ApproachObject_SendGoal_Request_type_support_ids_t _ApproachObject_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_SendGoal_Request_type_support_symbol_names_t _ApproachObject_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal_Request)),
  }
};

typedef struct _ApproachObject_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ApproachObject_SendGoal_Request_type_support_data_t;

static _ApproachObject_SendGoal_Request_type_support_data_t _ApproachObject_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_SendGoal_Request_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_SendGoal_Request>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal_Request)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_SendGoal_Request>();
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
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_SendGoal_Response_type_support_ids_t;

static const _ApproachObject_SendGoal_Response_type_support_ids_t _ApproachObject_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_SendGoal_Response_type_support_symbol_names_t _ApproachObject_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal_Response)),
  }
};

typedef struct _ApproachObject_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ApproachObject_SendGoal_Response_type_support_data_t;

static _ApproachObject_SendGoal_Response_type_support_data_t _ApproachObject_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_SendGoal_Response_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_SendGoal_Response>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal_Response)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_SendGoal_type_support_ids_t;

static const _ApproachObject_SendGoal_type_support_ids_t _ApproachObject_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_SendGoal_type_support_symbol_names_t _ApproachObject_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal)),
  }
};

typedef struct _ApproachObject_SendGoal_type_support_data_t
{
  void * data[2];
} _ApproachObject_SendGoal_type_support_data_t;

static _ApproachObject_SendGoal_type_support_data_t _ApproachObject_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_SendGoal_service_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ApproachObject_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tiago_behavior_tree::action::ApproachObject_SendGoal>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<tiago_behavior_tree::action::ApproachObject_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_GetResult_Request_type_support_ids_t;

static const _ApproachObject_GetResult_Request_type_support_ids_t _ApproachObject_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_GetResult_Request_type_support_symbol_names_t _ApproachObject_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_GetResult_Request)),
  }
};

typedef struct _ApproachObject_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ApproachObject_GetResult_Request_type_support_data_t;

static _ApproachObject_GetResult_Request_type_support_data_t _ApproachObject_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_GetResult_Request_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_GetResult_Request>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_GetResult_Request)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_GetResult_Request>();
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
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_GetResult_Response_type_support_ids_t;

static const _ApproachObject_GetResult_Response_type_support_ids_t _ApproachObject_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_GetResult_Response_type_support_symbol_names_t _ApproachObject_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_GetResult_Response)),
  }
};

typedef struct _ApproachObject_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ApproachObject_GetResult_Response_type_support_data_t;

static _ApproachObject_GetResult_Response_type_support_data_t _ApproachObject_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_GetResult_Response_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_GetResult_Response>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_GetResult_Response)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_GetResult_Response>();
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
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_GetResult_type_support_ids_t;

static const _ApproachObject_GetResult_type_support_ids_t _ApproachObject_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_GetResult_type_support_symbol_names_t _ApproachObject_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_GetResult)),
  }
};

typedef struct _ApproachObject_GetResult_type_support_data_t
{
  void * data[2];
} _ApproachObject_GetResult_type_support_data_t;

static _ApproachObject_GetResult_type_support_data_t _ApproachObject_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_GetResult_service_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ApproachObject_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tiago_behavior_tree::action::ApproachObject_GetResult>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<tiago_behavior_tree::action::ApproachObject_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
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

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApproachObject_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApproachObject_FeedbackMessage_type_support_ids_t;

static const _ApproachObject_FeedbackMessage_type_support_ids_t _ApproachObject_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApproachObject_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApproachObject_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApproachObject_FeedbackMessage_type_support_symbol_names_t _ApproachObject_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tiago_behavior_tree, action, ApproachObject_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tiago_behavior_tree, action, ApproachObject_FeedbackMessage)),
  }
};

typedef struct _ApproachObject_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ApproachObject_FeedbackMessage_type_support_data_t;

static _ApproachObject_FeedbackMessage_type_support_data_t _ApproachObject_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApproachObject_FeedbackMessage_message_typesupport_map = {
  2,
  "tiago_behavior_tree",
  &_ApproachObject_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ApproachObject_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ApproachObject_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApproachObject_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApproachObject_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_FeedbackMessage>()
{
  return &::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject_FeedbackMessage)() {
  return get_message_type_support_handle<tiago_behavior_tree::action::ApproachObject_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "tiago_behavior_tree/action/detail/approach_object__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace tiago_behavior_tree
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ApproachObject_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<tiago_behavior_tree::action::ApproachObject>()
{
  using ::tiago_behavior_tree::action::rosidl_typesupport_cpp::ApproachObject_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ApproachObject_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::tiago_behavior_tree::action::ApproachObject::Impl::SendGoalService>();
  ApproachObject_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::tiago_behavior_tree::action::ApproachObject::Impl::GetResultService>();
  ApproachObject_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::tiago_behavior_tree::action::ApproachObject::Impl::CancelGoalService>();
  ApproachObject_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::tiago_behavior_tree::action::ApproachObject::Impl::FeedbackMessage>();
  ApproachObject_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::tiago_behavior_tree::action::ApproachObject::Impl::GoalStatusMessage>();
  return &ApproachObject_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, tiago_behavior_tree, action, ApproachObject)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<tiago_behavior_tree::action::ApproachObject>();
}

#ifdef __cplusplus
}
#endif

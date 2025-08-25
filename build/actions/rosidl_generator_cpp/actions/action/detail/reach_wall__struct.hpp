// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from actions:action/ReachWall.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS__ACTION__DETAIL__REACH_WALL__STRUCT_HPP_
#define ACTIONS__ACTION__DETAIL__REACH_WALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_Goal __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_Goal __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_Goal_
{
  using Type = ReachWall_Goal_<ContainerAllocator>;

  explicit ReachWall_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_distance = 0.0f;
    }
  }

  explicit ReachWall_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_distance = 0.0f;
    }
  }

  // field types and members
  using _target_distance_type =
    float;
  _target_distance_type target_distance;

  // setters for named parameter idiom
  Type & set__target_distance(
    const float & _arg)
  {
    this->target_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_Goal
    std::shared_ptr<actions::action::ReachWall_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_Goal
    std::shared_ptr<actions::action::ReachWall_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_Goal_ & other) const
  {
    if (this->target_distance != other.target_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_Goal_

// alias to use template instance with default allocator
using ReachWall_Goal =
  actions::action::ReachWall_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions


#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_Result __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_Result __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_Result_
{
  using Type = ReachWall_Result_<ContainerAllocator>;

  explicit ReachWall_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
    }
  }

  explicit ReachWall_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
    }
  }

  // field types and members
  using _reached_type =
    bool;
  _reached_type reached;

  // setters for named parameter idiom
  Type & set__reached(
    const bool & _arg)
  {
    this->reached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_Result
    std::shared_ptr<actions::action::ReachWall_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_Result
    std::shared_ptr<actions::action::ReachWall_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_Result_ & other) const
  {
    if (this->reached != other.reached) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_Result_

// alias to use template instance with default allocator
using ReachWall_Result =
  actions::action::ReachWall_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions


#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_Feedback __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_Feedback_
{
  using Type = ReachWall_Feedback_<ContainerAllocator>;

  explicit ReachWall_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_distance = 0.0f;
    }
  }

  explicit ReachWall_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_distance = 0.0f;
    }
  }

  // field types and members
  using _remaining_distance_type =
    float;
  _remaining_distance_type remaining_distance;

  // setters for named parameter idiom
  Type & set__remaining_distance(
    const float & _arg)
  {
    this->remaining_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_Feedback
    std::shared_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_Feedback
    std::shared_ptr<actions::action::ReachWall_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_Feedback_ & other) const
  {
    if (this->remaining_distance != other.remaining_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_Feedback_

// alias to use template instance with default allocator
using ReachWall_Feedback =
  actions::action::ReachWall_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "actions/action/detail/reach_wall__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_SendGoal_Request __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_SendGoal_Request_
{
  using Type = ReachWall_SendGoal_Request_<ContainerAllocator>;

  explicit ReachWall_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ReachWall_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    actions::action::ReachWall_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const actions::action::ReachWall_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_SendGoal_Request
    std::shared_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_SendGoal_Request
    std::shared_ptr<actions::action::ReachWall_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_SendGoal_Request_

// alias to use template instance with default allocator
using ReachWall_SendGoal_Request =
  actions::action::ReachWall_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_SendGoal_Response __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_SendGoal_Response_
{
  using Type = ReachWall_SendGoal_Response_<ContainerAllocator>;

  explicit ReachWall_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ReachWall_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_SendGoal_Response
    std::shared_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_SendGoal_Response
    std::shared_ptr<actions::action::ReachWall_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_SendGoal_Response_

// alias to use template instance with default allocator
using ReachWall_SendGoal_Response =
  actions::action::ReachWall_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions

namespace actions
{

namespace action
{

struct ReachWall_SendGoal
{
  using Request = actions::action::ReachWall_SendGoal_Request;
  using Response = actions::action::ReachWall_SendGoal_Response;
};

}  // namespace action

}  // namespace actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_GetResult_Request __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_GetResult_Request_
{
  using Type = ReachWall_GetResult_Request_<ContainerAllocator>;

  explicit ReachWall_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ReachWall_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_GetResult_Request
    std::shared_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_GetResult_Request
    std::shared_ptr<actions::action::ReachWall_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_GetResult_Request_

// alias to use template instance with default allocator
using ReachWall_GetResult_Request =
  actions::action::ReachWall_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions


// Include directives for member types
// Member 'result'
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_GetResult_Response __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_GetResult_Response_
{
  using Type = ReachWall_GetResult_Response_<ContainerAllocator>;

  explicit ReachWall_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ReachWall_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    actions::action::ReachWall_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const actions::action::ReachWall_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_GetResult_Response
    std::shared_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_GetResult_Response
    std::shared_ptr<actions::action::ReachWall_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_GetResult_Response_

// alias to use template instance with default allocator
using ReachWall_GetResult_Response =
  actions::action::ReachWall_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions

namespace actions
{

namespace action
{

struct ReachWall_GetResult
{
  using Request = actions::action::ReachWall_GetResult_Request;
  using Response = actions::action::ReachWall_GetResult_Response;
};

}  // namespace action

}  // namespace actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "actions/action/detail/reach_wall__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actions__action__ReachWall_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__actions__action__ReachWall_FeedbackMessage __declspec(deprecated)
#endif

namespace actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachWall_FeedbackMessage_
{
  using Type = ReachWall_FeedbackMessage_<ContainerAllocator>;

  explicit ReachWall_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ReachWall_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    actions::action::ReachWall_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const actions::action::ReachWall_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actions::action::ReachWall_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const actions::action::ReachWall_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actions::action::ReachWall_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actions__action__ReachWall_FeedbackMessage
    std::shared_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actions__action__ReachWall_FeedbackMessage
    std::shared_ptr<actions::action::ReachWall_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachWall_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachWall_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachWall_FeedbackMessage_

// alias to use template instance with default allocator
using ReachWall_FeedbackMessage =
  actions::action::ReachWall_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actions

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace actions
{

namespace action
{

struct ReachWall
{
  /// The goal message defined in the action definition.
  using Goal = actions::action::ReachWall_Goal;
  /// The result message defined in the action definition.
  using Result = actions::action::ReachWall_Result;
  /// The feedback message defined in the action definition.
  using Feedback = actions::action::ReachWall_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = actions::action::ReachWall_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = actions::action::ReachWall_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = actions::action::ReachWall_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ReachWall ReachWall;

}  // namespace action

}  // namespace actions

#endif  // ACTIONS__ACTION__DETAIL__REACH_WALL__STRUCT_HPP_

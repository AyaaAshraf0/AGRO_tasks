// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_define:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_DEFINE__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define SERVICE_DEFINE__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_define/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_define
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::service_define::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::service_define::srv::AddTwoInts_Request b(::service_define::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_define::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::service_define::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::service_define::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_define::srv::AddTwoInts_Request>()
{
  return service_define::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace service_define


namespace service_define
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_define::srv::AddTwoInts_Response sum(::service_define::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_define::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_define::srv::AddTwoInts_Response>()
{
  return service_define::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace service_define

#endif  // SERVICE_DEFINE__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

// Generated by gencpp from file vehiclemap_msgs/MP5_MAP_INFO.msg
// DO NOT EDIT!


#ifndef VEHICLEMAP_MSGS_MESSAGE_MP5_MAP_INFO_H
#define VEHICLEMAP_MSGS_MESSAGE_MP5_MAP_INFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vehiclemap_msgs
{
template <class ContainerAllocator>
struct MP5_MAP_INFO_
{
  typedef MP5_MAP_INFO_<ContainerAllocator> Type;

  MP5_MAP_INFO_()
    : header(0)
    , distance_nearest_service(0)
    , nav_turn_icon(0)
    , path_distance_remaining(0)
    , current_nav_remaining_distance(0)
    , current_nav_remaining_time(0)
    , current_link(0)
    , current_speed_limit(0)
    , roundabout_exit_index(0)
    , former_shape_point_index(0)
    , current_road_type(0)
    , service_type(0)
    , arrived(0)
    , path_time_overall(0)
    , path_distance_overall(0)
    , heading(0)
    , path_time_remaining(0)  {
    }
  MP5_MAP_INFO_(const ContainerAllocator& _alloc)
    : header(0)
    , distance_nearest_service(0)
    , nav_turn_icon(0)
    , path_distance_remaining(0)
    , current_nav_remaining_distance(0)
    , current_nav_remaining_time(0)
    , current_link(0)
    , current_speed_limit(0)
    , roundabout_exit_index(0)
    , former_shape_point_index(0)
    , current_road_type(0)
    , service_type(0)
    , arrived(0)
    , path_time_overall(0)
    , path_distance_overall(0)
    , heading(0)
    , path_time_remaining(0)  {
  (void)_alloc;
    }



   typedef uint32_t _header_type;
  _header_type header;

   typedef uint32_t _distance_nearest_service_type;
  _distance_nearest_service_type distance_nearest_service;

   typedef uint8_t _nav_turn_icon_type;
  _nav_turn_icon_type nav_turn_icon;

   typedef uint32_t _path_distance_remaining_type;
  _path_distance_remaining_type path_distance_remaining;

   typedef uint32_t _current_nav_remaining_distance_type;
  _current_nav_remaining_distance_type current_nav_remaining_distance;

   typedef uint8_t _current_nav_remaining_time_type;
  _current_nav_remaining_time_type current_nav_remaining_time;

   typedef uint8_t _current_link_type;
  _current_link_type current_link;

   typedef uint8_t _current_speed_limit_type;
  _current_speed_limit_type current_speed_limit;

   typedef uint8_t _roundabout_exit_index_type;
  _roundabout_exit_index_type roundabout_exit_index;

   typedef uint8_t _former_shape_point_index_type;
  _former_shape_point_index_type former_shape_point_index;

   typedef uint8_t _current_road_type_type;
  _current_road_type_type current_road_type;

   typedef uint8_t _service_type_type;
  _service_type_type service_type;

   typedef uint8_t _arrived_type;
  _arrived_type arrived;

   typedef uint32_t _path_time_overall_type;
  _path_time_overall_type path_time_overall;

   typedef uint32_t _path_distance_overall_type;
  _path_distance_overall_type path_distance_overall;

   typedef uint32_t _heading_type;
  _heading_type heading;

   typedef uint32_t _path_time_remaining_type;
  _path_time_remaining_type path_time_remaining;




  typedef boost::shared_ptr< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> const> ConstPtr;

}; // struct MP5_MAP_INFO_

typedef ::vehiclemap_msgs::MP5_MAP_INFO_<std::allocator<void> > MP5_MAP_INFO;

typedef boost::shared_ptr< ::vehiclemap_msgs::MP5_MAP_INFO > MP5_MAP_INFOPtr;
typedef boost::shared_ptr< ::vehiclemap_msgs::MP5_MAP_INFO const> MP5_MAP_INFOConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vehiclemap_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'vehiclemap_msgs': ['/mnt/hgfs/Share/DFAx7i/ros_messages/src/vehiclemap_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0fdfcea95d5fdcb72fa78c2e4eeb21a5";
  }

  static const char* value(const ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0fdfcea95d5fdcb7ULL;
  static const uint64_t static_value2 = 0x2fa78c2e4eeb21a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehiclemap_msgs/MP5_MAP_INFO";
  }

  static const char* value(const ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32    header     #数据头\n\
\n\
uint32    distance_nearest_service    #距离最近服务区的距离，0~50000，单位m\n\
uint8     nav_turn_icon               #导航转向图标，0~31\n\
uint32    path_distance_remaining     #路径剩余距离，0~2047，单位km\n\
uint32    current_nav_remaining_distance      #当前导航段剩余距离，0~50000，单位m\n\
uint8      current_nav_remaining_time          #当前导航段剩余时间，0~240，单位min\n\
uint8     current_link                #当前自车所在link，0~255\n\
\n\
uint8     current_speed_limit         #当前道路速度限制，0~150，单位km/h\n\
uint8     roundabout_exit_index       #环岛出口序号，0~15\n\
uint8     former_shape_point_index    #当前位置的前一个形状点号,0～15\n\
uint8     current_road_type           #当前道路类型，0~15\n\
uint8     service_type                #服务区类型，0~1\n\
uint8     arrived                     #是否到达目的地，0~1\n\
uint32    path_time_overall           #路径总时间，0~1440，单位min\n\
uint32    path_distance_overall       #路径总距离，0~2047，单位km\n\
uint32    heading                     #自车方向，0~360，单位deg\n\
uint32    path_time_remaining         #路径剩余时间，0~1440，单位min\n\
";
  }

  static const char* value(const ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.distance_nearest_service);
      stream.next(m.nav_turn_icon);
      stream.next(m.path_distance_remaining);
      stream.next(m.current_nav_remaining_distance);
      stream.next(m.current_nav_remaining_time);
      stream.next(m.current_link);
      stream.next(m.current_speed_limit);
      stream.next(m.roundabout_exit_index);
      stream.next(m.former_shape_point_index);
      stream.next(m.current_road_type);
      stream.next(m.service_type);
      stream.next(m.arrived);
      stream.next(m.path_time_overall);
      stream.next(m.path_distance_overall);
      stream.next(m.heading);
      stream.next(m.path_time_remaining);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MP5_MAP_INFO_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehiclemap_msgs::MP5_MAP_INFO_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.header);
    s << indent << "distance_nearest_service: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.distance_nearest_service);
    s << indent << "nav_turn_icon: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nav_turn_icon);
    s << indent << "path_distance_remaining: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.path_distance_remaining);
    s << indent << "current_nav_remaining_distance: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.current_nav_remaining_distance);
    s << indent << "current_nav_remaining_time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current_nav_remaining_time);
    s << indent << "current_link: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current_link);
    s << indent << "current_speed_limit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current_speed_limit);
    s << indent << "roundabout_exit_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.roundabout_exit_index);
    s << indent << "former_shape_point_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.former_shape_point_index);
    s << indent << "current_road_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current_road_type);
    s << indent << "service_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.service_type);
    s << indent << "arrived: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.arrived);
    s << indent << "path_time_overall: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.path_time_overall);
    s << indent << "path_distance_overall: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.path_distance_overall);
    s << indent << "heading: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.heading);
    s << indent << "path_time_remaining: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.path_time_remaining);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLEMAP_MSGS_MESSAGE_MP5_MAP_INFO_H

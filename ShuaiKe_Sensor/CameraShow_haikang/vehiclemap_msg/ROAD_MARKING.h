// Generated by gencpp from file vehiclemap_msg/ROAD_MARKING.msg
// DO NOT EDIT!


#ifndef VEHICLEMAP_MSG_MESSAGE_ROAD_MARKING_H
#define VEHICLEMAP_MSG_MESSAGE_ROAD_MARKING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vehiclemap_msg
{
template <class ContainerAllocator>
struct ROAD_MARKING_
{
  typedef ROAD_MARKING_<ContainerAllocator> Type;

  ROAD_MARKING_()
    : bottomleftx(0)
    , bottomlefty(0)
    , bottomrightx(0)
    , bottomrighty(0)
    , topleftx(0)
    , toplefty(0)
    , toprightx(0)
    , toprighty(0)
    , direction(0)
    , width(0)
    , sign_type(0)  {
    }
  ROAD_MARKING_(const ContainerAllocator& _alloc)
    : bottomleftx(0)
    , bottomlefty(0)
    , bottomrightx(0)
    , bottomrighty(0)
    , topleftx(0)
    , toplefty(0)
    , toprightx(0)
    , toprighty(0)
    , direction(0)
    , width(0)
    , sign_type(0)  {
  (void)_alloc;
    }



   typedef int32_t _bottomleftx_type;
  _bottomleftx_type bottomleftx;

   typedef int32_t _bottomlefty_type;
  _bottomlefty_type bottomlefty;

   typedef int32_t _bottomrightx_type;
  _bottomrightx_type bottomrightx;

   typedef int32_t _bottomrighty_type;
  _bottomrighty_type bottomrighty;

   typedef int32_t _topleftx_type;
  _topleftx_type topleftx;

   typedef int32_t _toplefty_type;
  _toplefty_type toplefty;

   typedef int32_t _toprightx_type;
  _toprightx_type toprightx;

   typedef int32_t _toprighty_type;
  _toprighty_type toprighty;

   typedef int32_t _direction_type;
  _direction_type direction;

   typedef int32_t _width_type;
  _width_type width;

   typedef uint8_t _sign_type_type;
  _sign_type_type sign_type;




  typedef boost::shared_ptr< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> const> ConstPtr;

}; // struct ROAD_MARKING_

typedef ::vehiclemap_msg::ROAD_MARKING_<std::allocator<void> > ROAD_MARKING;

typedef boost::shared_ptr< ::vehiclemap_msg::ROAD_MARKING > ROAD_MARKINGPtr;
typedef boost::shared_ptr< ::vehiclemap_msg::ROAD_MARKING const> ROAD_MARKINGConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vehiclemap_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'vehiclemap_msg': ['/home/jbh/catkin_ws/src/vehiclemap_msg/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e1205ecf5882a35d2b33fa0ad805117a";
  }

  static const char* value(const ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe1205ecf5882a35dULL;
  static const uint64_t static_value2 = 0x2b33fa0ad805117aULL;
};

template<class ContainerAllocator>
struct DataType< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehiclemap_msg/ROAD_MARKING";
  }

  static const char* value(const ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 bottomleftx\n\
int32 bottomlefty\n\
int32 bottomrightx\n\
int32 bottomrighty\n\
int32 topleftx\n\
int32 toplefty\n\
int32 toprightx\n\
int32 toprighty\n\
int32 direction\n\
int32 width\n\
uint8 sign_type\n\
";
  }

  static const char* value(const ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bottomleftx);
      stream.next(m.bottomlefty);
      stream.next(m.bottomrightx);
      stream.next(m.bottomrighty);
      stream.next(m.topleftx);
      stream.next(m.toplefty);
      stream.next(m.toprightx);
      stream.next(m.toprighty);
      stream.next(m.direction);
      stream.next(m.width);
      stream.next(m.sign_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ROAD_MARKING_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehiclemap_msg::ROAD_MARKING_<ContainerAllocator>& v)
  {
    s << indent << "bottomleftx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bottomleftx);
    s << indent << "bottomlefty: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bottomlefty);
    s << indent << "bottomrightx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bottomrightx);
    s << indent << "bottomrighty: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bottomrighty);
    s << indent << "topleftx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.topleftx);
    s << indent << "toplefty: ";
    Printer<int32_t>::stream(s, indent + "  ", v.toplefty);
    s << indent << "toprightx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.toprightx);
    s << indent << "toprighty: ";
    Printer<int32_t>::stream(s, indent + "  ", v.toprighty);
    s << indent << "direction: ";
    Printer<int32_t>::stream(s, indent + "  ", v.direction);
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "sign_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sign_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLEMAP_MSG_MESSAGE_ROAD_MARKING_H

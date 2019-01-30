// Generated by gencpp from file vehiclemap_msg/FARSTATICOBJECT.msg
// DO NOT EDIT!


#ifndef VEHICLEMAP_MSG_MESSAGE_FARSTATICOBJECT_H
#define VEHICLEMAP_MSG_MESSAGE_FARSTATICOBJECT_H


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
struct FARSTATICOBJECT_
{
  typedef FARSTATICOBJECT_<ContainerAllocator> Type;

  FARSTATICOBJECT_()
    : VertexNumber(0)
    , ConvexX()
    , ConvexY()
    , CenterX(0)
    , CenterY(0)  {
      ConvexX.assign(0);

      ConvexY.assign(0);
  }
  FARSTATICOBJECT_(const ContainerAllocator& _alloc)
    : VertexNumber(0)
    , ConvexX()
    , ConvexY()
    , CenterX(0)
    , CenterY(0)  {
  (void)_alloc;
      ConvexX.assign(0);

      ConvexY.assign(0);
  }



   typedef int32_t _VertexNumber_type;
  _VertexNumber_type VertexNumber;

   typedef boost::array<int32_t, 50>  _ConvexX_type;
  _ConvexX_type ConvexX;

   typedef boost::array<int32_t, 50>  _ConvexY_type;
  _ConvexY_type ConvexY;

   typedef int32_t _CenterX_type;
  _CenterX_type CenterX;

   typedef int32_t _CenterY_type;
  _CenterY_type CenterY;




  typedef boost::shared_ptr< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> const> ConstPtr;

}; // struct FARSTATICOBJECT_

typedef ::vehiclemap_msg::FARSTATICOBJECT_<std::allocator<void> > FARSTATICOBJECT;

typedef boost::shared_ptr< ::vehiclemap_msg::FARSTATICOBJECT > FARSTATICOBJECTPtr;
typedef boost::shared_ptr< ::vehiclemap_msg::FARSTATICOBJECT const> FARSTATICOBJECTConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e35abdb6373cb523b09aafa17e7a6ea2";
  }

  static const char* value(const ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe35abdb6373cb523ULL;
  static const uint64_t static_value2 = 0xb09aafa17e7a6ea2ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehiclemap_msg/FARSTATICOBJECT";
  }

  static const char* value(const ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 VertexNumber 	#多边形边界顶点数量\n\
int32[50] ConvexX	#边界顶点坐标X\n\
int32[50] ConvexY	#边界顶点坐标Y\n\
int32 CenterX	#中心点x\n\
int32 CenterY	#中心点y\n\
";
  }

  static const char* value(const ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.VertexNumber);
      stream.next(m.ConvexX);
      stream.next(m.ConvexY);
      stream.next(m.CenterX);
      stream.next(m.CenterY);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FARSTATICOBJECT_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehiclemap_msg::FARSTATICOBJECT_<ContainerAllocator>& v)
  {
    s << indent << "VertexNumber: ";
    Printer<int32_t>::stream(s, indent + "  ", v.VertexNumber);
    s << indent << "ConvexX[]" << std::endl;
    for (size_t i = 0; i < v.ConvexX.size(); ++i)
    {
      s << indent << "  ConvexX[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.ConvexX[i]);
    }
    s << indent << "ConvexY[]" << std::endl;
    for (size_t i = 0; i < v.ConvexY.size(); ++i)
    {
      s << indent << "  ConvexY[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.ConvexY[i]);
    }
    s << indent << "CenterX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.CenterX);
    s << indent << "CenterY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.CenterY);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLEMAP_MSG_MESSAGE_FARSTATICOBJECT_H

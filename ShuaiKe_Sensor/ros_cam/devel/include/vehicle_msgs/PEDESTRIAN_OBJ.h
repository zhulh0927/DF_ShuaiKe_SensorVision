// Generated by gencpp from file vehicle_msgs/PEDESTRIAN_OBJ.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_PEDESTRIAN_OBJ_H
#define VEHICLE_MSGS_MESSAGE_PEDESTRIAN_OBJ_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vehicle_msgs
{
template <class ContainerAllocator>
struct PEDESTRIAN_OBJ_
{
  typedef PEDESTRIAN_OBJ_<ContainerAllocator> Type;

  PEDESTRIAN_OBJ_()
    : PedestrianID(0)
    , CenterX(0)
    , CenterY(0)
    , Radius(0)
    , Speed(0)
    , Direction(0)
    , Height(0)  {
    }
  PEDESTRIAN_OBJ_(const ContainerAllocator& _alloc)
    : PedestrianID(0)
    , CenterX(0)
    , CenterY(0)
    , Radius(0)
    , Speed(0)
    , Direction(0)
    , Height(0)  {
  (void)_alloc;
    }



   typedef int32_t _PedestrianID_type;
  _PedestrianID_type PedestrianID;

   typedef int32_t _CenterX_type;
  _CenterX_type CenterX;

   typedef int32_t _CenterY_type;
  _CenterY_type CenterY;

   typedef int32_t _Radius_type;
  _Radius_type Radius;

   typedef int32_t _Speed_type;
  _Speed_type Speed;

   typedef int32_t _Direction_type;
  _Direction_type Direction;

   typedef int32_t _Height_type;
  _Height_type Height;





  typedef boost::shared_ptr< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> const> ConstPtr;

}; // struct PEDESTRIAN_OBJ_

typedef ::vehicle_msgs::PEDESTRIAN_OBJ_<std::allocator<void> > PEDESTRIAN_OBJ;

typedef boost::shared_ptr< ::vehicle_msgs::PEDESTRIAN_OBJ > PEDESTRIAN_OBJPtr;
typedef boost::shared_ptr< ::vehicle_msgs::PEDESTRIAN_OBJ const> PEDESTRIAN_OBJConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vehicle_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'vehicle_msgs': ['/home/ubuntu/AutoAx7/ShuaiKe_Sensor/ros_cam/src/vehicle_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f816474721b7803bd93b6f7183528978";
  }

  static const char* value(const ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf816474721b7803bULL;
  static const uint64_t static_value2 = 0xd93b6f7183528978ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/PEDESTRIAN_OBJ";
  }

  static const char* value(const ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 PedestrianID\n\
int32 CenterX    	#cm为单位，惯导坐标系\n\
int32 CenterY\n\
int32 Radius    	#cm为单位\n\
int32 Speed      	# cm/s\n\
int32 Direction  	# 0.01度，惯导坐标系\n\
int32 Height     	# height of the pedestrian \n\
\n\
";
  }

  static const char* value(const ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.PedestrianID);
      stream.next(m.CenterX);
      stream.next(m.CenterY);
      stream.next(m.Radius);
      stream.next(m.Speed);
      stream.next(m.Direction);
      stream.next(m.Height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PEDESTRIAN_OBJ_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::PEDESTRIAN_OBJ_<ContainerAllocator>& v)
  {
    s << indent << "PedestrianID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.PedestrianID);
    s << indent << "CenterX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.CenterX);
    s << indent << "CenterY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.CenterY);
    s << indent << "Radius: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Radius);
    s << indent << "Speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Speed);
    s << indent << "Direction: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Direction);
    s << indent << "Height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_PEDESTRIAN_OBJ_H

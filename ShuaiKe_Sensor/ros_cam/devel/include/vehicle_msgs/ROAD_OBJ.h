// Generated by gencpp from file vehicle_msgs/ROAD_OBJ.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_ROAD_OBJ_H
#define VEHICLE_MSGS_MESSAGE_ROAD_OBJ_H


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
struct ROAD_OBJ_
{
  typedef ROAD_OBJ_<ContainerAllocator> Type;

  ROAD_OBJ_()
    : RoadID(0)
    , LeftPtNum(0)
    , RightPtNum(0)
    , LeftEdgePtX()
    , LeftEdgePtY()
    , RightEdgePtX()
    , RightEdgePtY()  {
      LeftEdgePtX.assign(0);

      LeftEdgePtY.assign(0);

      RightEdgePtX.assign(0);

      RightEdgePtY.assign(0);
  }
  ROAD_OBJ_(const ContainerAllocator& _alloc)
    : RoadID(0)
    , LeftPtNum(0)
    , RightPtNum(0)
    , LeftEdgePtX()
    , LeftEdgePtY()
    , RightEdgePtX()
    , RightEdgePtY()  {
  (void)_alloc;
      LeftEdgePtX.assign(0);

      LeftEdgePtY.assign(0);

      RightEdgePtX.assign(0);

      RightEdgePtY.assign(0);
  }



   typedef int32_t _RoadID_type;
  _RoadID_type RoadID;

   typedef int32_t _LeftPtNum_type;
  _LeftPtNum_type LeftPtNum;

   typedef int32_t _RightPtNum_type;
  _RightPtNum_type RightPtNum;

   typedef boost::array<int32_t, 50>  _LeftEdgePtX_type;
  _LeftEdgePtX_type LeftEdgePtX;

   typedef boost::array<int32_t, 50>  _LeftEdgePtY_type;
  _LeftEdgePtY_type LeftEdgePtY;

   typedef boost::array<int32_t, 50>  _RightEdgePtX_type;
  _RightEdgePtX_type RightEdgePtX;

   typedef boost::array<int32_t, 50>  _RightEdgePtY_type;
  _RightEdgePtY_type RightEdgePtY;





  typedef boost::shared_ptr< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> const> ConstPtr;

}; // struct ROAD_OBJ_

typedef ::vehicle_msgs::ROAD_OBJ_<std::allocator<void> > ROAD_OBJ;

typedef boost::shared_ptr< ::vehicle_msgs::ROAD_OBJ > ROAD_OBJPtr;
typedef boost::shared_ptr< ::vehicle_msgs::ROAD_OBJ const> ROAD_OBJConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0368fe6ff623a2ad6dd68cf53a6c57f8";
  }

  static const char* value(const ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0368fe6ff623a2adULL;
  static const uint64_t static_value2 = 0x6dd68cf53a6c57f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/ROAD_OBJ";
  }

  static const char* value(const ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 RoadID   #1 yellow\n\
int32 LeftPtNum\n\
int32 RightPtNum\n\
int32[50] LeftEdgePtX   #cm\n\
int32[50] LeftEdgePtY   #cm\n\
int32[50] RightEdgePtX  #cm\n\
int32[50] RightEdgePtY  #cm\n\
\n\
";
  }

  static const char* value(const ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.RoadID);
      stream.next(m.LeftPtNum);
      stream.next(m.RightPtNum);
      stream.next(m.LeftEdgePtX);
      stream.next(m.LeftEdgePtY);
      stream.next(m.RightEdgePtX);
      stream.next(m.RightEdgePtY);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ROAD_OBJ_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::ROAD_OBJ_<ContainerAllocator>& v)
  {
    s << indent << "RoadID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.RoadID);
    s << indent << "LeftPtNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.LeftPtNum);
    s << indent << "RightPtNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.RightPtNum);
    s << indent << "LeftEdgePtX[]" << std::endl;
    for (size_t i = 0; i < v.LeftEdgePtX.size(); ++i)
    {
      s << indent << "  LeftEdgePtX[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.LeftEdgePtX[i]);
    }
    s << indent << "LeftEdgePtY[]" << std::endl;
    for (size_t i = 0; i < v.LeftEdgePtY.size(); ++i)
    {
      s << indent << "  LeftEdgePtY[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.LeftEdgePtY[i]);
    }
    s << indent << "RightEdgePtX[]" << std::endl;
    for (size_t i = 0; i < v.RightEdgePtX.size(); ++i)
    {
      s << indent << "  RightEdgePtX[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.RightEdgePtX[i]);
    }
    s << indent << "RightEdgePtY[]" << std::endl;
    for (size_t i = 0; i < v.RightEdgePtY.size(); ++i)
    {
      s << indent << "  RightEdgePtY[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.RightEdgePtY[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_ROAD_OBJ_H
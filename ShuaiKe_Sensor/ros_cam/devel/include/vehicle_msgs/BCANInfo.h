// Generated by gencpp from file vehicle_msgs/BCANInfo.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_BCANINFO_H
#define VEHICLE_MSGS_MESSAGE_BCANINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <vehicle_msgs/BCM2.h>
#include <vehicle_msgs/BCM3.h>

namespace vehicle_msgs
{
template <class ContainerAllocator>
struct BCANInfo_
{
  typedef BCANInfo_<ContainerAllocator> Type;

  BCANInfo_()
    : header()
    , bcm2()
    , bcm3()  {
    }
  BCANInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bcm2(_alloc)
    , bcm3(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::vehicle_msgs::BCM2_<ContainerAllocator>  _bcm2_type;
  _bcm2_type bcm2;

   typedef  ::vehicle_msgs::BCM3_<ContainerAllocator>  _bcm3_type;
  _bcm3_type bcm3;





  typedef boost::shared_ptr< ::vehicle_msgs::BCANInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::BCANInfo_<ContainerAllocator> const> ConstPtr;

}; // struct BCANInfo_

typedef ::vehicle_msgs::BCANInfo_<std::allocator<void> > BCANInfo;

typedef boost::shared_ptr< ::vehicle_msgs::BCANInfo > BCANInfoPtr;
typedef boost::shared_ptr< ::vehicle_msgs::BCANInfo const> BCANInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::BCANInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vehicle_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'vehicle_msgs': ['/home/ubuntu/AutoAx7/ShuaiKe_Sensor/ros_cam/src/vehicle_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::BCANInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::BCANInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::BCANInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb9e346be5c6dbb42e95965b108b34f2";
  }

  static const char* value(const ::vehicle_msgs::BCANInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb9e346be5c6dbb4ULL;
  static const uint64_t static_value2 = 0x2e95965b108b34f2ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/BCANInfo";
  }

  static const char* value(const ::vehicle_msgs::BCANInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
BCM2    bcm2\n\
BCM3    bcm3 \n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/BCM2\n\
# ID=0x23A, Len=8, 40ms                         \n\
uint8 LeftLightState               # 左转向灯状态\n\
uint8 RightLightState              # 右转向灯状态\n\
uint8 PositionLampState            # 位置灯状态\n\
uint8 HighBeamState                # 远光灯状态\n\
uint8 LowBeamState                 # 近光灯状态\n\
uint8 BackFogLightState            # 后雾灯状态\n\
uint8 FrontFogLightState           # 前雾灯状态 \n\
												 \n\
\n\
================================================================================\n\
MSG: vehicle_msgs/BCM3\n\
# ID=0x33C, Len=3, 100ms                        \n\
uint8  FrontWiperState              # 前雨刮开光状态 \n\
";
  }

  static const char* value(const ::vehicle_msgs::BCANInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bcm2);
      stream.next(m.bcm3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BCANInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::BCANInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::BCANInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bcm2: ";
    s << std::endl;
    Printer< ::vehicle_msgs::BCM2_<ContainerAllocator> >::stream(s, indent + "  ", v.bcm2);
    s << indent << "bcm3: ";
    s << std::endl;
    Printer< ::vehicle_msgs::BCM3_<ContainerAllocator> >::stream(s, indent + "  ", v.bcm3);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_BCANINFO_H

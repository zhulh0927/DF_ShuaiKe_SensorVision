// Generated by gencpp from file vehicle_msgs/VehicleCmd.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_VEHICLECMD_H
#define VEHICLE_MSGS_MESSAGE_VEHICLECMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <vehicle_msgs/HAD1.h>
#include <vehicle_msgs/HADCmd.h>

namespace vehicle_msgs
{
template <class ContainerAllocator>
struct VehicleCmd_
{
  typedef VehicleCmd_<ContainerAllocator> Type;

  VehicleCmd_()
    : header()
    , had1()
    , hadCmd()  {
    }
  VehicleCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , had1(_alloc)
    , hadCmd(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::vehicle_msgs::HAD1_<ContainerAllocator>  _had1_type;
  _had1_type had1;

   typedef  ::vehicle_msgs::HADCmd_<ContainerAllocator>  _hadCmd_type;
  _hadCmd_type hadCmd;




  typedef boost::shared_ptr< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleCmd_

typedef ::vehicle_msgs::VehicleCmd_<std::allocator<void> > VehicleCmd;

typedef boost::shared_ptr< ::vehicle_msgs::VehicleCmd > VehicleCmdPtr;
typedef boost::shared_ptr< ::vehicle_msgs::VehicleCmd const> VehicleCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::VehicleCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vehicle_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'vehicle_msgs': ['/mnt/hgfs/Share/DFAx7i/ros_messages/src/vehicle_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5945ddd60c54fae5307b05960e3e6d29";
  }

  static const char* value(const ::vehicle_msgs::VehicleCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5945ddd60c54fae5ULL;
  static const uint64_t static_value2 = 0x307b05960e3e6d29ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/VehicleCmd";
  }

  static const char* value(const ::vehicle_msgs::VehicleCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
HAD1   had1\n\
HADCmd hadCmd\n\
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
MSG: vehicle_msgs/HAD1\n\
# ID=0x080, Len=8, 10ms\n\
float32 ElectricAccPedal      #  模拟加速踏板需求信号\n\
float32 AngleWheel            #  期望方向盘转角\n\
float32 BrakeReq              #  制动减速度请求\n\
uint16  AnglularAccleration   #  期望方向盘转角速度\n\
uint8   AutoDriveEnable       #  自动驾驶使能信号\n\
uint8   EPBParkingReq         #  HAD控制EPB驻车指令\n\
uint8   RollingCountHAD1      #  HAD1滚动计数值\n\
uint8   CheckSumHAD1          #  HAD1校验值\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/HADCmd\n\
#  ID=0x303, Len=4, 100ms\n\
uint32 BcanControlFlag\n\
uint8  FrontWiperCtrlCmd     #  前雨刮控制命令\n\
uint8  RearWiperCtrlCmd      #  后雨刮控制命令\n\
uint8  LowBeamCtrlCmd        #  近光灯控制命令\n\
uint8  HighBeamCtrlCmd       #  远光灯控制命令\n\
uint8  BackFogLightCtrlCmd   #  后雾灯控制命令\n\
uint8  FrontFogLightCtrlCmd  #  前雾灯控制命令\n\
uint8  PositionLampCtrlCmd   #  位置灯控制命令\n\
uint8  LeftLightCtrlCmd      #  左转向控制命令\n\
uint8  RightLightCtrlCmd     #  右转向控制命令\n\
uint8  HarzadCtrlCmd         #  危险报警灯控制命令\n\
uint8  BrakeLampCtrlCmd      #  刹车灯控制命令\n\
uint8  ReversingLampCtrlCmd  #  倒车灯控制命令\n\
uint8  AlarmHornCtrlCmd      #  喇叭控制命令\n\
uint8  WorkState             #  系统运行状态\n\
uint32[2] llhPos             #  全局坐标\n\
\n\
";
  }

  static const char* value(const ::vehicle_msgs::VehicleCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.had1);
      stream.next(m.hadCmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::VehicleCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::VehicleCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "had1: ";
    s << std::endl;
    Printer< ::vehicle_msgs::HAD1_<ContainerAllocator> >::stream(s, indent + "  ", v.had1);
    s << indent << "hadCmd: ";
    s << std::endl;
    Printer< ::vehicle_msgs::HADCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.hadCmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_VEHICLECMD_H

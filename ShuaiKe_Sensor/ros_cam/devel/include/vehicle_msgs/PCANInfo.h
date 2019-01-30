// Generated by gencpp from file vehicle_msgs/PCANInfo.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_PCANINFO_H
#define VEHICLE_MSGS_MESSAGE_PCANINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <vehicle_msgs/EMS1.h>
#include <vehicle_msgs/EMS5.h>
#include <vehicle_msgs/TCU1.h>
#include <vehicle_msgs/EPB1.h>
#include <vehicle_msgs/ESC2.h>
#include <vehicle_msgs/ESC4.h>
#include <vehicle_msgs/ESC5.h>
#include <vehicle_msgs/EPS2.h>
#include <vehicle_msgs/EPSInfo.h>
#include <vehicle_msgs/SASInfo.h>

namespace vehicle_msgs
{
template <class ContainerAllocator>
struct PCANInfo_
{
  typedef PCANInfo_<ContainerAllocator> Type;

  PCANInfo_()
    : header()
    , ems1()
    , ems5()
    , tcu1()
    , epb1()
    , esc2()
    , esc4()
    , esc5()
    , eps2()
    , epsInfo()
    , sasInfo()  {
    }
  PCANInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ems1(_alloc)
    , ems5(_alloc)
    , tcu1(_alloc)
    , epb1(_alloc)
    , esc2(_alloc)
    , esc4(_alloc)
    , esc5(_alloc)
    , eps2(_alloc)
    , epsInfo(_alloc)
    , sasInfo(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::vehicle_msgs::EMS1_<ContainerAllocator>  _ems1_type;
  _ems1_type ems1;

   typedef  ::vehicle_msgs::EMS5_<ContainerAllocator>  _ems5_type;
  _ems5_type ems5;

   typedef  ::vehicle_msgs::TCU1_<ContainerAllocator>  _tcu1_type;
  _tcu1_type tcu1;

   typedef  ::vehicle_msgs::EPB1_<ContainerAllocator>  _epb1_type;
  _epb1_type epb1;

   typedef  ::vehicle_msgs::ESC2_<ContainerAllocator>  _esc2_type;
  _esc2_type esc2;

   typedef  ::vehicle_msgs::ESC4_<ContainerAllocator>  _esc4_type;
  _esc4_type esc4;

   typedef  ::vehicle_msgs::ESC5_<ContainerAllocator>  _esc5_type;
  _esc5_type esc5;

   typedef  ::vehicle_msgs::EPS2_<ContainerAllocator>  _eps2_type;
  _eps2_type eps2;

   typedef  ::vehicle_msgs::EPSInfo_<ContainerAllocator>  _epsInfo_type;
  _epsInfo_type epsInfo;

   typedef  ::vehicle_msgs::SASInfo_<ContainerAllocator>  _sasInfo_type;
  _sasInfo_type sasInfo;





  typedef boost::shared_ptr< ::vehicle_msgs::PCANInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::PCANInfo_<ContainerAllocator> const> ConstPtr;

}; // struct PCANInfo_

typedef ::vehicle_msgs::PCANInfo_<std::allocator<void> > PCANInfo;

typedef boost::shared_ptr< ::vehicle_msgs::PCANInfo > PCANInfoPtr;
typedef boost::shared_ptr< ::vehicle_msgs::PCANInfo const> PCANInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::PCANInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::PCANInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::PCANInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::PCANInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "389041fc448ce2da258fb1ce2aef72ff";
  }

  static const char* value(const ::vehicle_msgs::PCANInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x389041fc448ce2daULL;
  static const uint64_t static_value2 = 0x258fb1ce2aef72ffULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/PCANInfo";
  }

  static const char* value(const ::vehicle_msgs::PCANInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
EMS1    ems1\n\
EMS5    ems5\n\
TCU1    tcu1\n\
EPB1    epb1\n\
ESC2    esc2\n\
ESC4    esc4\n\
ESC5    esc5\n\
EPS2    eps2\n\
EPSInfo epsInfo\n\
SASInfo sasInfo\n\
\n\
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
MSG: vehicle_msgs/EMS1\n\
# ID=0x083, Len=8, 10ms\n\
float32 ThrottlePosFeedback          # 发送机节气门开度反馈\n\
float32 EngSpd                       # 发送机转速\n\
float32 ActualAccPedal               # 物理油门踏板开度\n\
uint8   AutoDriveStatus              # 自动驾驶功能状态\n\
uint8   EngSpdSignalErrFlag          # 发动机转速信号错误标志\n\
uint8   AccPedalInterventEnable      # 油门踏板干预使能\n\
uint8   RollingCountEMS1             # EMS1滚动计数值\n\
uint8   CheckSumEMS1                 # EMS1校验值 \n\
\n\
================================================================================\n\
MSG: vehicle_msgs/EMS5\n\
# ID=0x0E0, Len=8, 20ms\n\
uint8   BrakePedalSignal             # 制动踏板开关信号\n\
uint8   AccPedalFaultFlag            # 加速踏板信号异常标志\n\
uint8   RollingCountEMS5             # EMS5滚动计数值\n\
float32 AccPedalPos                  # 加速踏板位置\n\
uint8   CheckSumEMS5                 # EMS5校验值 \n\
\n\
================================================================================\n\
MSG: vehicle_msgs/TCU1\n\
# ID=0x165, Len=8, 20ms\n\
uint8 ShiftLeverPosValidFlag # 换挡杆位置是否有效信号\n\
uint8 ActualGear             # 实际档位\n\
uint8 PRNDLStatus            # 档杆信息\n\
uint8 RollingCountTCU1       # TCU1滚动计数器\n\
uint8 CheckSum1              # TCU1校验值\n\
\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/EPB1\n\
# ID=0x31A, Len=8, 100ms\n\
uint8 EPBSystemStateIndicationReq  # EPB状态灯显示\n\
uint8 EPBStatus                    # EPB状态 \n\
\n\
================================================================================\n\
MSG: vehicle_msgs/ESC2\n\
# ID=0x0A0, Len=8, 10ms\n\
uint8   VehSpdValidFlag              # 车速有效信号\n\
uint8   VacuumOriginalValueValidity  # 真空压力原始值有效信号\n\
float32 BrakeOilPress                # 制动主缸油压信号\n\
float32 VehicleSpeed                 # 车速\n\
int16   VacuumOriginalValue          # 真空压力原始值\n\
\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/ESC4\n\
# ID=0x0A6, Len=8, 10ms\n\
uint16  FLWheelPulseCounter          # 左前轮速脉冲信号\n\
uint16  FRWheelPulseCounter          # 右前轮速脉冲信号\n\
uint16  RLWheelPulseCounter          # 左后轮速脉冲信号\n\
uint16  RRWheelPulseCounter          # 右后轮速脉冲信号\n\
uint8   FLWheelPulseCounterValidity  # 左前轮速脉冲信号有效标志\n\
uint8   FRWheelPulseCounterValidity  # 右前轮速脉冲信号有效标志\n\
float32 LongitudinalAcceleration     # 纵向加速度\n\
uint8   RLWheelPulseCounterValidity  # 左后轮速脉冲信号有效标志\n\
uint8   RRWheelPulseCounterValidity  # 右后轮速脉冲信号有效标志\n\
uint8   LongitudinalAccelerationFlag # 纵向加速度标识\n\
\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/ESC5\n\
# ID=0x122, Len=8, 20ms\n\
float32 YawRate             # 横摆角速度\n\
uint8   YawRateValid        # 横摆角速度有效性\n\
float32 LateralAcceleration # 横向加速度信号\n\
uint8   AyvSensorValid      # 横向加速度有效性\n\
uint8   StateAct            # 制动系统工作状态反馈\n\
\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/EPS2\n\
# ID=0x165, Len=8, 20ms\n\
uint8   RollingCountEPS2                                        # EPS2滚动计数值\n\
uint8   DriverSteeringInterferenceDetected                      # 驾驶员干预方向盘检测\n\
uint8   DriverSteeringInterferenceDetectedValidity              # 驾驶员干预方向盘检测有效性\n\
uint8   ElectricalPowerSteeringAvailablityStatus                # EPS可控状态\n\
uint8   ElectricalPowerSteeringAvailablityStatusProtectionValue # EPS可用状态保护算法值\n\
float32 SteeringTorqueAct                                       # 方向盘力矩反馈\n\
\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/EPSInfo\n\
# ID=0x235, Len=2, 40ms\n\
uint8 WarningLampState             # EPS警告灯状态\n\
\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/SASInfo\n\
# ID=0x0A5, Len=8, 10ms                         \n\
float32 SteeringAngle                # 转向角信号\n\
uint16  SteeringRotSpd               # 转向角速度\n\
uint8   CheckSumSAS1                 # SAS1校验值\n\
uint8   RollingCountSAS1             # SAS1滚动计数值\n\
\n\
";
  }

  static const char* value(const ::vehicle_msgs::PCANInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ems1);
      stream.next(m.ems5);
      stream.next(m.tcu1);
      stream.next(m.epb1);
      stream.next(m.esc2);
      stream.next(m.esc4);
      stream.next(m.esc5);
      stream.next(m.eps2);
      stream.next(m.epsInfo);
      stream.next(m.sasInfo);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PCANInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::PCANInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::PCANInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ems1: ";
    s << std::endl;
    Printer< ::vehicle_msgs::EMS1_<ContainerAllocator> >::stream(s, indent + "  ", v.ems1);
    s << indent << "ems5: ";
    s << std::endl;
    Printer< ::vehicle_msgs::EMS5_<ContainerAllocator> >::stream(s, indent + "  ", v.ems5);
    s << indent << "tcu1: ";
    s << std::endl;
    Printer< ::vehicle_msgs::TCU1_<ContainerAllocator> >::stream(s, indent + "  ", v.tcu1);
    s << indent << "epb1: ";
    s << std::endl;
    Printer< ::vehicle_msgs::EPB1_<ContainerAllocator> >::stream(s, indent + "  ", v.epb1);
    s << indent << "esc2: ";
    s << std::endl;
    Printer< ::vehicle_msgs::ESC2_<ContainerAllocator> >::stream(s, indent + "  ", v.esc2);
    s << indent << "esc4: ";
    s << std::endl;
    Printer< ::vehicle_msgs::ESC4_<ContainerAllocator> >::stream(s, indent + "  ", v.esc4);
    s << indent << "esc5: ";
    s << std::endl;
    Printer< ::vehicle_msgs::ESC5_<ContainerAllocator> >::stream(s, indent + "  ", v.esc5);
    s << indent << "eps2: ";
    s << std::endl;
    Printer< ::vehicle_msgs::EPS2_<ContainerAllocator> >::stream(s, indent + "  ", v.eps2);
    s << indent << "epsInfo: ";
    s << std::endl;
    Printer< ::vehicle_msgs::EPSInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.epsInfo);
    s << indent << "sasInfo: ";
    s << std::endl;
    Printer< ::vehicle_msgs::SASInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.sasInfo);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_PCANINFO_H

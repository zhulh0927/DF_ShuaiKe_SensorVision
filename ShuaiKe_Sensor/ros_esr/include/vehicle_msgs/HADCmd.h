// Generated by gencpp from file vehicle_msgs/HADCmd.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_HADCMD_H
#define VEHICLE_MSGS_MESSAGE_HADCMD_H


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
struct HADCmd_
{
  typedef HADCmd_<ContainerAllocator> Type;

  HADCmd_()
    : BcanControlFlag(0)
    , FrontWiperCtrlCmd(0)
    , RearWiperCtrlCmd(0)
    , LowBeamCtrlCmd(0)
    , HighBeamCtrlCmd(0)
    , BackFogLightCtrlCmd(0)
    , FrontFogLightCtrlCmd(0)
    , PositionLampCtrlCmd(0)
    , LeftLightCtrlCmd(0)
    , RightLightCtrlCmd(0)
    , HarzadCtrlCmd(0)
    , BrakeLampCtrlCmd(0)
    , ReversingLampCtrlCmd(0)
    , AlarmHornCtrlCmd(0)
    , WorkState(0)
    , llhPos()  {
      llhPos.assign(0);
  }
  HADCmd_(const ContainerAllocator& _alloc)
    : BcanControlFlag(0)
    , FrontWiperCtrlCmd(0)
    , RearWiperCtrlCmd(0)
    , LowBeamCtrlCmd(0)
    , HighBeamCtrlCmd(0)
    , BackFogLightCtrlCmd(0)
    , FrontFogLightCtrlCmd(0)
    , PositionLampCtrlCmd(0)
    , LeftLightCtrlCmd(0)
    , RightLightCtrlCmd(0)
    , HarzadCtrlCmd(0)
    , BrakeLampCtrlCmd(0)
    , ReversingLampCtrlCmd(0)
    , AlarmHornCtrlCmd(0)
    , WorkState(0)
    , llhPos()  {
  (void)_alloc;
      llhPos.assign(0);
  }



   typedef uint32_t _BcanControlFlag_type;
  _BcanControlFlag_type BcanControlFlag;

   typedef uint8_t _FrontWiperCtrlCmd_type;
  _FrontWiperCtrlCmd_type FrontWiperCtrlCmd;

   typedef uint8_t _RearWiperCtrlCmd_type;
  _RearWiperCtrlCmd_type RearWiperCtrlCmd;

   typedef uint8_t _LowBeamCtrlCmd_type;
  _LowBeamCtrlCmd_type LowBeamCtrlCmd;

   typedef uint8_t _HighBeamCtrlCmd_type;
  _HighBeamCtrlCmd_type HighBeamCtrlCmd;

   typedef uint8_t _BackFogLightCtrlCmd_type;
  _BackFogLightCtrlCmd_type BackFogLightCtrlCmd;

   typedef uint8_t _FrontFogLightCtrlCmd_type;
  _FrontFogLightCtrlCmd_type FrontFogLightCtrlCmd;

   typedef uint8_t _PositionLampCtrlCmd_type;
  _PositionLampCtrlCmd_type PositionLampCtrlCmd;

   typedef uint8_t _LeftLightCtrlCmd_type;
  _LeftLightCtrlCmd_type LeftLightCtrlCmd;

   typedef uint8_t _RightLightCtrlCmd_type;
  _RightLightCtrlCmd_type RightLightCtrlCmd;

   typedef uint8_t _HarzadCtrlCmd_type;
  _HarzadCtrlCmd_type HarzadCtrlCmd;

   typedef uint8_t _BrakeLampCtrlCmd_type;
  _BrakeLampCtrlCmd_type BrakeLampCtrlCmd;

   typedef uint8_t _ReversingLampCtrlCmd_type;
  _ReversingLampCtrlCmd_type ReversingLampCtrlCmd;

   typedef uint8_t _AlarmHornCtrlCmd_type;
  _AlarmHornCtrlCmd_type AlarmHornCtrlCmd;

   typedef uint8_t _WorkState_type;
  _WorkState_type WorkState;

   typedef boost::array<uint32_t, 2>  _llhPos_type;
  _llhPos_type llhPos;




  typedef boost::shared_ptr< ::vehicle_msgs::HADCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::HADCmd_<ContainerAllocator> const> ConstPtr;

}; // struct HADCmd_

typedef ::vehicle_msgs::HADCmd_<std::allocator<void> > HADCmd;

typedef boost::shared_ptr< ::vehicle_msgs::HADCmd > HADCmdPtr;
typedef boost::shared_ptr< ::vehicle_msgs::HADCmd const> HADCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::HADCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::HADCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vehicle_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'vehicle_msgs': ['/mnt/hgfs/Share/DFAx7i/ros_messages/src/vehicle_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::HADCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::HADCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::HADCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31bc9ae288649f0e148b5a5a72598423";
  }

  static const char* value(const ::vehicle_msgs::HADCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31bc9ae288649f0eULL;
  static const uint64_t static_value2 = 0x148b5a5a72598423ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/HADCmd";
  }

  static const char* value(const ::vehicle_msgs::HADCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#  ID=0x303, Len=4, 100ms\n\
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

  static const char* value(const ::vehicle_msgs::HADCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.BcanControlFlag);
      stream.next(m.FrontWiperCtrlCmd);
      stream.next(m.RearWiperCtrlCmd);
      stream.next(m.LowBeamCtrlCmd);
      stream.next(m.HighBeamCtrlCmd);
      stream.next(m.BackFogLightCtrlCmd);
      stream.next(m.FrontFogLightCtrlCmd);
      stream.next(m.PositionLampCtrlCmd);
      stream.next(m.LeftLightCtrlCmd);
      stream.next(m.RightLightCtrlCmd);
      stream.next(m.HarzadCtrlCmd);
      stream.next(m.BrakeLampCtrlCmd);
      stream.next(m.ReversingLampCtrlCmd);
      stream.next(m.AlarmHornCtrlCmd);
      stream.next(m.WorkState);
      stream.next(m.llhPos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HADCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::HADCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::HADCmd_<ContainerAllocator>& v)
  {
    s << indent << "BcanControlFlag: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.BcanControlFlag);
    s << indent << "FrontWiperCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.FrontWiperCtrlCmd);
    s << indent << "RearWiperCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RearWiperCtrlCmd);
    s << indent << "LowBeamCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LowBeamCtrlCmd);
    s << indent << "HighBeamCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.HighBeamCtrlCmd);
    s << indent << "BackFogLightCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BackFogLightCtrlCmd);
    s << indent << "FrontFogLightCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.FrontFogLightCtrlCmd);
    s << indent << "PositionLampCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.PositionLampCtrlCmd);
    s << indent << "LeftLightCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LeftLightCtrlCmd);
    s << indent << "RightLightCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RightLightCtrlCmd);
    s << indent << "HarzadCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.HarzadCtrlCmd);
    s << indent << "BrakeLampCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BrakeLampCtrlCmd);
    s << indent << "ReversingLampCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ReversingLampCtrlCmd);
    s << indent << "AlarmHornCtrlCmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AlarmHornCtrlCmd);
    s << indent << "WorkState: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.WorkState);
    s << indent << "llhPos[]" << std::endl;
    for (size_t i = 0; i < v.llhPos.size(); ++i)
    {
      s << indent << "  llhPos[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.llhPos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_HADCMD_H

// Generated by gencpp from file vehicle_msgs/EPS2.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_EPS2_H
#define VEHICLE_MSGS_MESSAGE_EPS2_H


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
struct EPS2_
{
  typedef EPS2_<ContainerAllocator> Type;

  EPS2_()
    : RollingCountEPS2(0)
    , DriverSteeringInterferenceDetected(0)
    , DriverSteeringInterferenceDetectedValidity(0)
    , ElectricalPowerSteeringAvailablityStatus(0)
    , ElectricalPowerSteeringAvailablityStatusProtectionValue(0)
    , SteeringTorqueAct(0.0)  {
    }
  EPS2_(const ContainerAllocator& _alloc)
    : RollingCountEPS2(0)
    , DriverSteeringInterferenceDetected(0)
    , DriverSteeringInterferenceDetectedValidity(0)
    , ElectricalPowerSteeringAvailablityStatus(0)
    , ElectricalPowerSteeringAvailablityStatusProtectionValue(0)
    , SteeringTorqueAct(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _RollingCountEPS2_type;
  _RollingCountEPS2_type RollingCountEPS2;

   typedef uint8_t _DriverSteeringInterferenceDetected_type;
  _DriverSteeringInterferenceDetected_type DriverSteeringInterferenceDetected;

   typedef uint8_t _DriverSteeringInterferenceDetectedValidity_type;
  _DriverSteeringInterferenceDetectedValidity_type DriverSteeringInterferenceDetectedValidity;

   typedef uint8_t _ElectricalPowerSteeringAvailablityStatus_type;
  _ElectricalPowerSteeringAvailablityStatus_type ElectricalPowerSteeringAvailablityStatus;

   typedef uint8_t _ElectricalPowerSteeringAvailablityStatusProtectionValue_type;
  _ElectricalPowerSteeringAvailablityStatusProtectionValue_type ElectricalPowerSteeringAvailablityStatusProtectionValue;

   typedef float _SteeringTorqueAct_type;
  _SteeringTorqueAct_type SteeringTorqueAct;





  typedef boost::shared_ptr< ::vehicle_msgs::EPS2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::EPS2_<ContainerAllocator> const> ConstPtr;

}; // struct EPS2_

typedef ::vehicle_msgs::EPS2_<std::allocator<void> > EPS2;

typedef boost::shared_ptr< ::vehicle_msgs::EPS2 > EPS2Ptr;
typedef boost::shared_ptr< ::vehicle_msgs::EPS2 const> EPS2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::EPS2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::EPS2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vehicle_msgs::EPS2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::EPS2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::EPS2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::EPS2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::EPS2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::EPS2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::EPS2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cbfcc99842089b6df53d8bc780a97a80";
  }

  static const char* value(const ::vehicle_msgs::EPS2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcbfcc99842089b6dULL;
  static const uint64_t static_value2 = 0xf53d8bc780a97a80ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::EPS2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/EPS2";
  }

  static const char* value(const ::vehicle_msgs::EPS2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::EPS2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ID=0x165, Len=8, 20ms\n\
uint8   RollingCountEPS2                                        # EPS2滚动计数值\n\
uint8   DriverSteeringInterferenceDetected                      # 驾驶员干预方向盘检测\n\
uint8   DriverSteeringInterferenceDetectedValidity              # 驾驶员干预方向盘检测有效性\n\
uint8   ElectricalPowerSteeringAvailablityStatus                # EPS可控状态\n\
uint8   ElectricalPowerSteeringAvailablityStatusProtectionValue # EPS可用状态保护算法值\n\
float32 SteeringTorqueAct                                       # 方向盘力矩反馈\n\
\n\
";
  }

  static const char* value(const ::vehicle_msgs::EPS2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::EPS2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.RollingCountEPS2);
      stream.next(m.DriverSteeringInterferenceDetected);
      stream.next(m.DriverSteeringInterferenceDetectedValidity);
      stream.next(m.ElectricalPowerSteeringAvailablityStatus);
      stream.next(m.ElectricalPowerSteeringAvailablityStatusProtectionValue);
      stream.next(m.SteeringTorqueAct);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EPS2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::EPS2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::EPS2_<ContainerAllocator>& v)
  {
    s << indent << "RollingCountEPS2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RollingCountEPS2);
    s << indent << "DriverSteeringInterferenceDetected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.DriverSteeringInterferenceDetected);
    s << indent << "DriverSteeringInterferenceDetectedValidity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.DriverSteeringInterferenceDetectedValidity);
    s << indent << "ElectricalPowerSteeringAvailablityStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ElectricalPowerSteeringAvailablityStatus);
    s << indent << "ElectricalPowerSteeringAvailablityStatusProtectionValue: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ElectricalPowerSteeringAvailablityStatusProtectionValue);
    s << indent << "SteeringTorqueAct: ";
    Printer<float>::stream(s, indent + "  ", v.SteeringTorqueAct);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_EPS2_H

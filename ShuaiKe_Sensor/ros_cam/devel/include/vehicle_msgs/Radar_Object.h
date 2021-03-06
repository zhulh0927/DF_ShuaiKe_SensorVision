// Generated by gencpp from file vehicle_msgs/Radar_Object.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_RADAR_OBJECT_H
#define VEHICLE_MSGS_MESSAGE_RADAR_OBJECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <vehicle_msgs/FrameStamp.h>
#include <vehicle_msgs/FrameStamp.h>

namespace vehicle_msgs
{
template <class ContainerAllocator>
struct Radar_Object_
{
  typedef Radar_Object_<ContainerAllocator> Type;

  Radar_Object_()
    : header()
    , messageID(0)
    , localStamp()
    , globalStamp()
    , targetID(0)
    , range(0.0)
    , angle(0.0)
    , x(0.0)
    , y(0.0)
    , height(0.0)
    , width(0.0)
    , rangeRate(0.0)
    , latRate(0.0)
    , trackStatus(0)
    , isACCTarget(0)
    , isCMBBTarget(0)
    , isFCWTarget(0)  {
    }
  Radar_Object_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , messageID(0)
    , localStamp(_alloc)
    , globalStamp(_alloc)
    , targetID(0)
    , range(0.0)
    , angle(0.0)
    , x(0.0)
    , y(0.0)
    , height(0.0)
    , width(0.0)
    , rangeRate(0.0)
    , latRate(0.0)
    , trackStatus(0)
    , isACCTarget(0)
    , isCMBBTarget(0)
    , isFCWTarget(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _messageID_type;
  _messageID_type messageID;

   typedef  ::vehicle_msgs::FrameStamp_<ContainerAllocator>  _localStamp_type;
  _localStamp_type localStamp;

   typedef  ::vehicle_msgs::FrameStamp_<ContainerAllocator>  _globalStamp_type;
  _globalStamp_type globalStamp;

   typedef int8_t _targetID_type;
  _targetID_type targetID;

   typedef double _range_type;
  _range_type range;

   typedef double _angle_type;
  _angle_type angle;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _height_type;
  _height_type height;

   typedef double _width_type;
  _width_type width;

   typedef double _rangeRate_type;
  _rangeRate_type rangeRate;

   typedef double _latRate_type;
  _latRate_type latRate;

   typedef int8_t _trackStatus_type;
  _trackStatus_type trackStatus;

   typedef int8_t _isACCTarget_type;
  _isACCTarget_type isACCTarget;

   typedef int8_t _isCMBBTarget_type;
  _isCMBBTarget_type isCMBBTarget;

   typedef int8_t _isFCWTarget_type;
  _isFCWTarget_type isFCWTarget;





  typedef boost::shared_ptr< ::vehicle_msgs::Radar_Object_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::Radar_Object_<ContainerAllocator> const> ConstPtr;

}; // struct Radar_Object_

typedef ::vehicle_msgs::Radar_Object_<std::allocator<void> > Radar_Object;

typedef boost::shared_ptr< ::vehicle_msgs::Radar_Object > Radar_ObjectPtr;
typedef boost::shared_ptr< ::vehicle_msgs::Radar_Object const> Radar_ObjectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::Radar_Object_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::Radar_Object_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::Radar_Object_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::Radar_Object_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b485c0c1a11c58f090711959b010a872";
  }

  static const char* value(const ::vehicle_msgs::Radar_Object_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb485c0c1a11c58f0ULL;
  static const uint64_t static_value2 = 0x90711959b010a872ULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/Radar_Object";
  }

  static const char* value(const ::vehicle_msgs::Radar_Object_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return " \n\
Header  header\n\
int32 	messageID              #为每一个MSG设定唯一的标识码\n\
\n\
FrameStamp localStamp\n\
FrameStamp globalStamp\n\
\n\
int8       targetID         #雷达目标ID（1~64）\n\
float64    range            #目标距离（cm）\n\
float64    angle            #角度（deg），正前为0，顺时针为正\n\
float64    x                #坐标x（cm），右为正\n\
float64    y                #坐标y（cm），前为正\n\
\n\
float64    height           #高度（暂无）\n\
float64    width            #宽度（暂无）\n\
float64    rangeRate        #距离变化率（m/s），远离为正，接近为负\n\
float64    latRate          #角速度（deg/s），逆时针为正\n\
\n\
int8       trackStatus      #目标追踪状态\n\
                #define     ESR_NO_TARGET               0\n\
                #define     ESR_NEW_TARGET              1\n\
                #define     ESR_UPDATED_TARGET          3\n\
                #define     ESR_COASTED_TARGET          4\n\
                #define     ESR_INVALID_COASTED_TARGET  6\n\
\n\
\n\
int8       isACCTarget      # 0-no, 1-stat, 2-move\n\
int8       isCMBBTarget     # 0-no, 1-stat, 2-move\n\
int8       isFCWTarget      # 0-no, 1-stat, 2-move\n\
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
MSG: vehicle_msgs/FrameStamp\n\
#MSG FrameStamp\n\
Header header\n\
float64 time\n\
float64  lat\n\
float64  lng\n\
float64  height\n\
float64[3] position\n\
float64[3] orientation\n\
float64[3] linearSpeed\n\
float64[3] angularSpeed \n\
";
  }

  static const char* value(const ::vehicle_msgs::Radar_Object_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.messageID);
      stream.next(m.localStamp);
      stream.next(m.globalStamp);
      stream.next(m.targetID);
      stream.next(m.range);
      stream.next(m.angle);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.rangeRate);
      stream.next(m.latRate);
      stream.next(m.trackStatus);
      stream.next(m.isACCTarget);
      stream.next(m.isCMBBTarget);
      stream.next(m.isFCWTarget);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Radar_Object_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::Radar_Object_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::Radar_Object_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "messageID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.messageID);
    s << indent << "localStamp: ";
    s << std::endl;
    Printer< ::vehicle_msgs::FrameStamp_<ContainerAllocator> >::stream(s, indent + "  ", v.localStamp);
    s << indent << "globalStamp: ";
    s << std::endl;
    Printer< ::vehicle_msgs::FrameStamp_<ContainerAllocator> >::stream(s, indent + "  ", v.globalStamp);
    s << indent << "targetID: ";
    Printer<int8_t>::stream(s, indent + "  ", v.targetID);
    s << indent << "range: ";
    Printer<double>::stream(s, indent + "  ", v.range);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
    s << indent << "rangeRate: ";
    Printer<double>::stream(s, indent + "  ", v.rangeRate);
    s << indent << "latRate: ";
    Printer<double>::stream(s, indent + "  ", v.latRate);
    s << indent << "trackStatus: ";
    Printer<int8_t>::stream(s, indent + "  ", v.trackStatus);
    s << indent << "isACCTarget: ";
    Printer<int8_t>::stream(s, indent + "  ", v.isACCTarget);
    s << indent << "isCMBBTarget: ";
    Printer<int8_t>::stream(s, indent + "  ", v.isCMBBTarget);
    s << indent << "isFCWTarget: ";
    Printer<int8_t>::stream(s, indent + "  ", v.isFCWTarget);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_RADAR_OBJECT_H

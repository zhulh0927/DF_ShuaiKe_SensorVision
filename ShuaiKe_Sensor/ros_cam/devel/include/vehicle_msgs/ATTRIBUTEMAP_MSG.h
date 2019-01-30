// Generated by gencpp from file vehicle_msgs/ATTRIBUTEMAP_MSG.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_ATTRIBUTEMAP_MSG_H
#define VEHICLE_MSGS_MESSAGE_ATTRIBUTEMAP_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <vehicle_msgs/LOCAL_POS_DATA.h>
#include <vehicle_msgs/PositionData.h>

namespace vehicle_msgs
{
template <class ContainerAllocator>
struct ATTRIBUTEMAP_MSG_
{
  typedef ATTRIBUTEMAP_MSG_<ContainerAllocator> Type;

  ATTRIBUTEMAP_MSG_()
    : MessageID(0)
    , MessageSeqNum(0)
    , LocalPoseTime(0.0)
    , GlobalPosTime(0.0)
    , LocalPose()
    , Position()
    , MapWidth(0)
    , MapHeight(0)
    , GridWidth(0)
    , GridHeight(0)
    , VehicleGridX(0)
    , VehicleGridY(0)
    , LocalAttributeMap()
    , index_surfacemap(0)
    , index_positiveobstacle(0)  {
      LocalAttributeMap.assign(0);
  }
  ATTRIBUTEMAP_MSG_(const ContainerAllocator& _alloc)
    : MessageID(0)
    , MessageSeqNum(0)
    , LocalPoseTime(0.0)
    , GlobalPosTime(0.0)
    , LocalPose(_alloc)
    , Position(_alloc)
    , MapWidth(0)
    , MapHeight(0)
    , GridWidth(0)
    , GridHeight(0)
    , VehicleGridX(0)
    , VehicleGridY(0)
    , LocalAttributeMap()
    , index_surfacemap(0)
    , index_positiveobstacle(0)  {
  (void)_alloc;
      LocalAttributeMap.assign(0);
  }



   typedef int32_t _MessageID_type;
  _MessageID_type MessageID;

   typedef int32_t _MessageSeqNum_type;
  _MessageSeqNum_type MessageSeqNum;

   typedef double _LocalPoseTime_type;
  _LocalPoseTime_type LocalPoseTime;

   typedef double _GlobalPosTime_type;
  _GlobalPosTime_type GlobalPosTime;

   typedef  ::vehicle_msgs::LOCAL_POS_DATA_<ContainerAllocator>  _LocalPose_type;
  _LocalPose_type LocalPose;

   typedef  ::vehicle_msgs::PositionData_<ContainerAllocator>  _Position_type;
  _Position_type Position;

   typedef int32_t _MapWidth_type;
  _MapWidth_type MapWidth;

   typedef int32_t _MapHeight_type;
  _MapHeight_type MapHeight;

   typedef int32_t _GridWidth_type;
  _GridWidth_type GridWidth;

   typedef int32_t _GridHeight_type;
  _GridHeight_type GridHeight;

   typedef int32_t _VehicleGridX_type;
  _VehicleGridX_type VehicleGridX;

   typedef int32_t _VehicleGridY_type;
  _VehicleGridY_type VehicleGridY;

   typedef boost::array<uint8_t, 125000>  _LocalAttributeMap_type;
  _LocalAttributeMap_type LocalAttributeMap;

   typedef uint32_t _index_surfacemap_type;
  _index_surfacemap_type index_surfacemap;

   typedef uint32_t _index_positiveobstacle_type;
  _index_positiveobstacle_type index_positiveobstacle;





  typedef boost::shared_ptr< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> const> ConstPtr;

}; // struct ATTRIBUTEMAP_MSG_

typedef ::vehicle_msgs::ATTRIBUTEMAP_MSG_<std::allocator<void> > ATTRIBUTEMAP_MSG;

typedef boost::shared_ptr< ::vehicle_msgs::ATTRIBUTEMAP_MSG > ATTRIBUTEMAP_MSGPtr;
typedef boost::shared_ptr< ::vehicle_msgs::ATTRIBUTEMAP_MSG const> ATTRIBUTEMAP_MSGConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a31d6cfb75ae4f928695c77b0f545e6c";
  }

  static const char* value(const ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa31d6cfb75ae4f92ULL;
  static const uint64_t static_value2 = 0x8695c77b0f545e6cULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/ATTRIBUTEMAP_MSG";
  }

  static const char* value(const ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 MessageID\n\
int32 MessageSeqNum\n\
\n\
float64 LocalPoseTime       	# LocalPose的时间of message\n\
float64 GlobalPosTime       	# LocalPose的时间of message\n\
 \n\
LOCAL_POS_DATA LocalPose          #局部定位\n\
PositionData Position		#全局定位\n\
int32 MapWidth\n\
int32 MapHeight\n\
int32 GridWidth\n\
int32 GridHeight\n\
int32 VehicleGridX\n\
int32 VehicleGridY\n\
\n\
uint8[125000] LocalAttributeMap\n\
\n\
uint32 index_surfacemap\n\
uint32 index_positiveobstacle\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/LOCAL_POS_DATA\n\
\n\
uint32    header  #数据头\n\
float64   time	#millisecond\n\
int32 dr_x    #centimeter\n\
int32 dr_y    #centimeter\n\
int32 dr_z    #centimeter\n\
int32 dr_heading #0.01degree\n\
int32 dr_roll   #0.01degree\n\
int32 dr_pitch  #0.01degree\n\
int32 lf_speed #left_front wheel speed,cm/s\n\
int32 rf_speed #right_front wheel speed,cm/s\n\
int32 lr_speed #left_rear wheel speed,cm/s\n\
int32 rr_speed #right_rear wheel speed,cm/s\n\
int32 rot_x #imu三轴陀螺速度 0.01degree/s\n\
int32 rot_y #imu三轴陀螺速度 0.01degree/s\n\
int32 rot_z  #imu三轴陀螺速度 0.01degree/s\n\
int32 acc_x  #imu三轴加速度  0.01m/s^2\n\
int32 acc_y #imu三轴加速度  0.01m/s^2\n\
int32 acc_z  #imu三轴加速度  0.01m/s^2\n\
int32  steer  	#-3000(right)~3000(left) degree  0.01degree/s\n\
int32  brake       #0(zero)~100(full)\n\
int32  fuel          #0(zero)~100(full)\n\
int32 trans  #PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3\n\
int8 VehicleState#车辆状态\n\
int32 mode      #行驶模式 #DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2\n\
\n\
int32 drStatus		#dr运行状态\n\
int32 errorStatus	#错误状态\n\
int32 emergency_flag   #故障标志位\n\
int32 hardswitch_on\n\
\n\
================================================================================\n\
MSG: vehicle_msgs/PositionData\n\
int16 gps_flag       #gps info is updated\n\
int16 gps_week\n\
float64 gps_millisecond        #millisecond in a week\n\
int32[2] llhPos	#经纬度，llpos[i]/SC_POS 单位为度\n\
int32[2] gaussPos  #高斯投影位置,cm，\n\
int32 height         #cm\n\
int32 pitch  #欧拉角，单位为0.01度\n\
int32 roll   #欧拉角，单位为0.01度\n\
int32 azimuth        #欧拉角，单位为0.01度,向东为零度，逆时针0-360\n\
int32 northVelocity  #north速度，单位为cm/s\n\
int32 eastVelocity\n\
int32 upVelocity\n\
int32 positionStatus	  	#系统运行状态\n\
int16 motion_flag    # motion info is updated\n\
int16 motion_week\n\
int32 motion_millisecond\n\
int32[2] drPos\n\
int32 drHeight\n\
int32 drAzimuth\n\
int32 drNorthVelocity\n\
int32 drEastVelocity\n\
int32 drUpVelocity\n\
int32[2] reserved\n\
\n\
";
  }

  static const char* value(const ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.MessageID);
      stream.next(m.MessageSeqNum);
      stream.next(m.LocalPoseTime);
      stream.next(m.GlobalPosTime);
      stream.next(m.LocalPose);
      stream.next(m.Position);
      stream.next(m.MapWidth);
      stream.next(m.MapHeight);
      stream.next(m.GridWidth);
      stream.next(m.GridHeight);
      stream.next(m.VehicleGridX);
      stream.next(m.VehicleGridY);
      stream.next(m.LocalAttributeMap);
      stream.next(m.index_surfacemap);
      stream.next(m.index_positiveobstacle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ATTRIBUTEMAP_MSG_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::ATTRIBUTEMAP_MSG_<ContainerAllocator>& v)
  {
    s << indent << "MessageID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.MessageID);
    s << indent << "MessageSeqNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.MessageSeqNum);
    s << indent << "LocalPoseTime: ";
    Printer<double>::stream(s, indent + "  ", v.LocalPoseTime);
    s << indent << "GlobalPosTime: ";
    Printer<double>::stream(s, indent + "  ", v.GlobalPosTime);
    s << indent << "LocalPose: ";
    s << std::endl;
    Printer< ::vehicle_msgs::LOCAL_POS_DATA_<ContainerAllocator> >::stream(s, indent + "  ", v.LocalPose);
    s << indent << "Position: ";
    s << std::endl;
    Printer< ::vehicle_msgs::PositionData_<ContainerAllocator> >::stream(s, indent + "  ", v.Position);
    s << indent << "MapWidth: ";
    Printer<int32_t>::stream(s, indent + "  ", v.MapWidth);
    s << indent << "MapHeight: ";
    Printer<int32_t>::stream(s, indent + "  ", v.MapHeight);
    s << indent << "GridWidth: ";
    Printer<int32_t>::stream(s, indent + "  ", v.GridWidth);
    s << indent << "GridHeight: ";
    Printer<int32_t>::stream(s, indent + "  ", v.GridHeight);
    s << indent << "VehicleGridX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.VehicleGridX);
    s << indent << "VehicleGridY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.VehicleGridY);
    s << indent << "LocalAttributeMap[]" << std::endl;
    for (size_t i = 0; i < v.LocalAttributeMap.size(); ++i)
    {
      s << indent << "  LocalAttributeMap[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.LocalAttributeMap[i]);
    }
    s << indent << "index_surfacemap: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.index_surfacemap);
    s << indent << "index_positiveobstacle: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.index_positiveobstacle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_ATTRIBUTEMAP_MSG_H
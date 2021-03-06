// Generated by gencpp from file pos_ins100/insarrayMsg.msg
// DO NOT EDIT!


#ifndef POS_INS100_MESSAGE_INSARRAYMSG_H
#define POS_INS100_MESSAGE_INSARRAYMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pos_ins100/insMsg.h>

namespace pos_ins100
{
template <class ContainerAllocator>
struct insarrayMsg_
{
  typedef insarrayMsg_<ContainerAllocator> Type;

  insarrayMsg_()
    : MessageID(0)
    , insposition()
    , DataNumber(0)
    , SystemTimeDiff(0.0)
    , MessageSeqNum(0)  {
    }
  insarrayMsg_(const ContainerAllocator& _alloc)
    : MessageID(0)
    , insposition()
    , DataNumber(0)
    , SystemTimeDiff(0.0)
    , MessageSeqNum(0)  {
  (void)_alloc;
      insposition.assign( ::pos_ins100::insMsg_<ContainerAllocator> (_alloc));
  }



   typedef int32_t _MessageID_type;
  _MessageID_type MessageID;

   typedef boost::array< ::pos_ins100::insMsg_<ContainerAllocator> , 50>  _insposition_type;
  _insposition_type insposition;

   typedef int32_t _DataNumber_type;
  _DataNumber_type DataNumber;

   typedef double _SystemTimeDiff_type;
  _SystemTimeDiff_type SystemTimeDiff;

   typedef int32_t _MessageSeqNum_type;
  _MessageSeqNum_type MessageSeqNum;




  typedef boost::shared_ptr< ::pos_ins100::insarrayMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pos_ins100::insarrayMsg_<ContainerAllocator> const> ConstPtr;

}; // struct insarrayMsg_

typedef ::pos_ins100::insarrayMsg_<std::allocator<void> > insarrayMsg;

typedef boost::shared_ptr< ::pos_ins100::insarrayMsg > insarrayMsgPtr;
typedef boost::shared_ptr< ::pos_ins100::insarrayMsg const> insarrayMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pos_ins100::insarrayMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pos_ins100::insarrayMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pos_ins100

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pos_ins100': ['/mnt/hgfs/Share/DFAx7i/ros_messages/src/pos_ins100/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pos_ins100::insarrayMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pos_ins100::insarrayMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pos_ins100::insarrayMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0a794f38210f66a597566f7f4a8266a";
  }

  static const char* value(const ::pos_ins100::insarrayMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0a794f38210f66aULL;
  static const uint64_t static_value2 = 0x597566f7f4a8266aULL;
};

template<class ContainerAllocator>
struct DataType< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pos_ins100/insarrayMsg";
  }

  static const char* value(const ::pos_ins100::insarrayMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 MessageID\n\
insMsg[50] insposition\n\
int32 DataNumber\n\
float64 SystemTimeDiff\n\
int32 MessageSeqNum\n\
\n\
================================================================================\n\
MSG: pos_ins100/insMsg\n\
int16 gps_flag               #gps info is updated\n\
int16 gps_week\n\
float64 gps_millisecond        #millisecond in a week\n\
int32[2] llhPos    #经纬度，llpos[i]/SC_POS 单位为度\n\
int32[2] gaussPos			  #高斯投影位置,cm，\n\
int32 height                 #cm\n\
int32 pitch                  #欧拉角，单位为0.01度\n\
int32 roll                   #欧拉角，单位为0.01度\n\
int32 azimuth                #欧拉角，单位为0.01度,向东为零度，逆时针0-360\n\
int32 northVelocity          #north速度，单位为cm/s\n\
int32 eastVelocity\n\
int32 velocity_hor\n\
int32 velocity_trk\n\
int32 upVelocity\n\
int32 positionStatus		  #系统运行状态\n\
int16 motion_flag            # motion info is updated\n\
int16 motion_week\n\
int32 motion_millisecond\n\
int32[2] drPos\n\
int32 drHeight\n\
int32 drAzimuth\n\
int32 drNorthVelocity\n\
int32 drEastVelocity\n\
int32 drUpVelocity\n\
int32[2] reserved\n\
int32 number_of_sattelite\n\
float32 variance_x\n\
float32 variance_y\n\
float64 time              #IMU time,millisecond\n\
int32 dr_x                #centimeter\n\
int32 dr_y\n\
int32 dr_z\n\
int32 dr_heading          #0.01degree\n\
int32 dr_roll\n\
int32 dr_pitch\n\
float64 omega_x\n\
float64 omega_y\n\
float64 omega_z\n\
float64 acc_x\n\
float64 acc_y\n\
float64 acc_z\n\
int32 MessageSeqNum\n\
";
  }

  static const char* value(const ::pos_ins100::insarrayMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.MessageID);
      stream.next(m.insposition);
      stream.next(m.DataNumber);
      stream.next(m.SystemTimeDiff);
      stream.next(m.MessageSeqNum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct insarrayMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pos_ins100::insarrayMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pos_ins100::insarrayMsg_<ContainerAllocator>& v)
  {
    s << indent << "MessageID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.MessageID);
    s << indent << "insposition[]" << std::endl;
    for (size_t i = 0; i < v.insposition.size(); ++i)
    {
      s << indent << "  insposition[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pos_ins100::insMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.insposition[i]);
    }
    s << indent << "DataNumber: ";
    Printer<int32_t>::stream(s, indent + "  ", v.DataNumber);
    s << indent << "SystemTimeDiff: ";
    Printer<double>::stream(s, indent + "  ", v.SystemTimeDiff);
    s << indent << "MessageSeqNum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.MessageSeqNum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // POS_INS100_MESSAGE_INSARRAYMSG_H

# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vehicle_msgs/ATTRIBUTEMAP_MSG.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import vehicle_msgs.msg

class ATTRIBUTEMAP_MSG(genpy.Message):
  _md5sum = "a31d6cfb75ae4f928695c77b0f545e6c"
  _type = "vehicle_msgs/ATTRIBUTEMAP_MSG"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 MessageID
int32 MessageSeqNum

float64 LocalPoseTime       	# LocalPose的时间of message
float64 GlobalPosTime       	# LocalPose的时间of message
 
LOCAL_POS_DATA LocalPose          #局部定位
PositionData Position		#全局定位
int32 MapWidth
int32 MapHeight
int32 GridWidth
int32 GridHeight
int32 VehicleGridX
int32 VehicleGridY

uint8[125000] LocalAttributeMap

uint32 index_surfacemap
uint32 index_positiveobstacle

================================================================================
MSG: vehicle_msgs/LOCAL_POS_DATA

uint32    header  #数据头
float64   time	#millisecond
int32 dr_x    #centimeter
int32 dr_y    #centimeter
int32 dr_z    #centimeter
int32 dr_heading #0.01degree
int32 dr_roll   #0.01degree
int32 dr_pitch  #0.01degree
int32 lf_speed #left_front wheel speed,cm/s
int32 rf_speed #right_front wheel speed,cm/s
int32 lr_speed #left_rear wheel speed,cm/s
int32 rr_speed #right_rear wheel speed,cm/s
int32 rot_x #imu三轴陀螺速度 0.01degree/s
int32 rot_y #imu三轴陀螺速度 0.01degree/s
int32 rot_z  #imu三轴陀螺速度 0.01degree/s
int32 acc_x  #imu三轴加速度  0.01m/s^2
int32 acc_y #imu三轴加速度  0.01m/s^2
int32 acc_z  #imu三轴加速度  0.01m/s^2
int32  steer  	#-3000(right)~3000(left) degree  0.01degree/s
int32  brake       #0(zero)~100(full)
int32  fuel          #0(zero)~100(full)
int32 trans  #PARK=0,BACKWARD=1,NEURAL=2,FORWARD=3
int8 VehicleState#车辆状态
int32 mode      #行驶模式 #DIRECT_ACTUATOR=0,REMOTE_PILOT=1,AUTO_PILOT=2

int32 drStatus		#dr运行状态
int32 errorStatus	#错误状态
int32 emergency_flag   #故障标志位
int32 hardswitch_on

================================================================================
MSG: vehicle_msgs/PositionData
int16 gps_flag       #gps info is updated
int16 gps_week
float64 gps_millisecond        #millisecond in a week
int32[2] llhPos	#经纬度，llpos[i]/SC_POS 单位为度
int32[2] gaussPos  #高斯投影位置,cm，
int32 height         #cm
int32 pitch  #欧拉角，单位为0.01度
int32 roll   #欧拉角，单位为0.01度
int32 azimuth        #欧拉角，单位为0.01度,向东为零度，逆时针0-360
int32 northVelocity  #north速度，单位为cm/s
int32 eastVelocity
int32 upVelocity
int32 positionStatus	  	#系统运行状态
int16 motion_flag    # motion info is updated
int16 motion_week
int32 motion_millisecond
int32[2] drPos
int32 drHeight
int32 drAzimuth
int32 drNorthVelocity
int32 drEastVelocity
int32 drUpVelocity
int32[2] reserved

"""
  __slots__ = ['MessageID','MessageSeqNum','LocalPoseTime','GlobalPosTime','LocalPose','Position','MapWidth','MapHeight','GridWidth','GridHeight','VehicleGridX','VehicleGridY','LocalAttributeMap','index_surfacemap','index_positiveobstacle']
  _slot_types = ['int32','int32','float64','float64','vehicle_msgs/LOCAL_POS_DATA','vehicle_msgs/PositionData','int32','int32','int32','int32','int32','int32','uint8[125000]','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       MessageID,MessageSeqNum,LocalPoseTime,GlobalPosTime,LocalPose,Position,MapWidth,MapHeight,GridWidth,GridHeight,VehicleGridX,VehicleGridY,LocalAttributeMap,index_surfacemap,index_positiveobstacle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ATTRIBUTEMAP_MSG, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.MessageID is None:
        self.MessageID = 0
      if self.MessageSeqNum is None:
        self.MessageSeqNum = 0
      if self.LocalPoseTime is None:
        self.LocalPoseTime = 0.
      if self.GlobalPosTime is None:
        self.GlobalPosTime = 0.
      if self.LocalPose is None:
        self.LocalPose = vehicle_msgs.msg.LOCAL_POS_DATA()
      if self.Position is None:
        self.Position = vehicle_msgs.msg.PositionData()
      if self.MapWidth is None:
        self.MapWidth = 0
      if self.MapHeight is None:
        self.MapHeight = 0
      if self.GridWidth is None:
        self.GridWidth = 0
      if self.GridHeight is None:
        self.GridHeight = 0
      if self.VehicleGridX is None:
        self.VehicleGridX = 0
      if self.VehicleGridY is None:
        self.VehicleGridY = 0
      if self.LocalAttributeMap is None:
        self.LocalAttributeMap = b'\0'*125000
      if self.index_surfacemap is None:
        self.index_surfacemap = 0
      if self.index_positiveobstacle is None:
        self.index_positiveobstacle = 0
    else:
      self.MessageID = 0
      self.MessageSeqNum = 0
      self.LocalPoseTime = 0.
      self.GlobalPosTime = 0.
      self.LocalPose = vehicle_msgs.msg.LOCAL_POS_DATA()
      self.Position = vehicle_msgs.msg.PositionData()
      self.MapWidth = 0
      self.MapHeight = 0
      self.GridWidth = 0
      self.GridHeight = 0
      self.VehicleGridX = 0
      self.VehicleGridY = 0
      self.LocalAttributeMap = b'\0'*125000
      self.index_surfacemap = 0
      self.index_positiveobstacle = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2i2dId20ib5i2hd().pack(_x.MessageID, _x.MessageSeqNum, _x.LocalPoseTime, _x.GlobalPosTime, _x.LocalPose.header, _x.LocalPose.time, _x.LocalPose.dr_x, _x.LocalPose.dr_y, _x.LocalPose.dr_z, _x.LocalPose.dr_heading, _x.LocalPose.dr_roll, _x.LocalPose.dr_pitch, _x.LocalPose.lf_speed, _x.LocalPose.rf_speed, _x.LocalPose.lr_speed, _x.LocalPose.rr_speed, _x.LocalPose.rot_x, _x.LocalPose.rot_y, _x.LocalPose.rot_z, _x.LocalPose.acc_x, _x.LocalPose.acc_y, _x.LocalPose.acc_z, _x.LocalPose.steer, _x.LocalPose.brake, _x.LocalPose.fuel, _x.LocalPose.trans, _x.LocalPose.VehicleState, _x.LocalPose.mode, _x.LocalPose.drStatus, _x.LocalPose.errorStatus, _x.LocalPose.emergency_flag, _x.LocalPose.hardswitch_on, _x.Position.gps_flag, _x.Position.gps_week, _x.Position.gps_millisecond))
      buff.write(_get_struct_2i().pack(*self.Position.llhPos))
      buff.write(_get_struct_2i().pack(*self.Position.gaussPos))
      _x = self
      buff.write(_get_struct_8i2hi().pack(_x.Position.height, _x.Position.pitch, _x.Position.roll, _x.Position.azimuth, _x.Position.northVelocity, _x.Position.eastVelocity, _x.Position.upVelocity, _x.Position.positionStatus, _x.Position.motion_flag, _x.Position.motion_week, _x.Position.motion_millisecond))
      buff.write(_get_struct_2i().pack(*self.Position.drPos))
      _x = self
      buff.write(_get_struct_5i().pack(_x.Position.drHeight, _x.Position.drAzimuth, _x.Position.drNorthVelocity, _x.Position.drEastVelocity, _x.Position.drUpVelocity))
      buff.write(_get_struct_2i().pack(*self.Position.reserved))
      _x = self
      buff.write(_get_struct_6i().pack(_x.MapWidth, _x.MapHeight, _x.GridWidth, _x.GridHeight, _x.VehicleGridX, _x.VehicleGridY))
      _x = self.LocalAttributeMap
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_125000B().pack(*_x))
      else:
        buff.write(_get_struct_125000s().pack(_x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.index_surfacemap, _x.index_positiveobstacle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.LocalPose is None:
        self.LocalPose = vehicle_msgs.msg.LOCAL_POS_DATA()
      if self.Position is None:
        self.Position = vehicle_msgs.msg.PositionData()
      end = 0
      _x = self
      start = end
      end += 149
      (_x.MessageID, _x.MessageSeqNum, _x.LocalPoseTime, _x.GlobalPosTime, _x.LocalPose.header, _x.LocalPose.time, _x.LocalPose.dr_x, _x.LocalPose.dr_y, _x.LocalPose.dr_z, _x.LocalPose.dr_heading, _x.LocalPose.dr_roll, _x.LocalPose.dr_pitch, _x.LocalPose.lf_speed, _x.LocalPose.rf_speed, _x.LocalPose.lr_speed, _x.LocalPose.rr_speed, _x.LocalPose.rot_x, _x.LocalPose.rot_y, _x.LocalPose.rot_z, _x.LocalPose.acc_x, _x.LocalPose.acc_y, _x.LocalPose.acc_z, _x.LocalPose.steer, _x.LocalPose.brake, _x.LocalPose.fuel, _x.LocalPose.trans, _x.LocalPose.VehicleState, _x.LocalPose.mode, _x.LocalPose.drStatus, _x.LocalPose.errorStatus, _x.LocalPose.emergency_flag, _x.LocalPose.hardswitch_on, _x.Position.gps_flag, _x.Position.gps_week, _x.Position.gps_millisecond,) = _get_struct_2i2dId20ib5i2hd().unpack(str[start:end])
      start = end
      end += 8
      self.Position.llhPos = _get_struct_2i().unpack(str[start:end])
      start = end
      end += 8
      self.Position.gaussPos = _get_struct_2i().unpack(str[start:end])
      _x = self
      start = end
      end += 40
      (_x.Position.height, _x.Position.pitch, _x.Position.roll, _x.Position.azimuth, _x.Position.northVelocity, _x.Position.eastVelocity, _x.Position.upVelocity, _x.Position.positionStatus, _x.Position.motion_flag, _x.Position.motion_week, _x.Position.motion_millisecond,) = _get_struct_8i2hi().unpack(str[start:end])
      start = end
      end += 8
      self.Position.drPos = _get_struct_2i().unpack(str[start:end])
      _x = self
      start = end
      end += 20
      (_x.Position.drHeight, _x.Position.drAzimuth, _x.Position.drNorthVelocity, _x.Position.drEastVelocity, _x.Position.drUpVelocity,) = _get_struct_5i().unpack(str[start:end])
      start = end
      end += 8
      self.Position.reserved = _get_struct_2i().unpack(str[start:end])
      _x = self
      start = end
      end += 24
      (_x.MapWidth, _x.MapHeight, _x.GridWidth, _x.GridHeight, _x.VehicleGridX, _x.VehicleGridY,) = _get_struct_6i().unpack(str[start:end])
      start = end
      end += 125000
      self.LocalAttributeMap = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.index_surfacemap, _x.index_positiveobstacle,) = _get_struct_2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2i2dId20ib5i2hd().pack(_x.MessageID, _x.MessageSeqNum, _x.LocalPoseTime, _x.GlobalPosTime, _x.LocalPose.header, _x.LocalPose.time, _x.LocalPose.dr_x, _x.LocalPose.dr_y, _x.LocalPose.dr_z, _x.LocalPose.dr_heading, _x.LocalPose.dr_roll, _x.LocalPose.dr_pitch, _x.LocalPose.lf_speed, _x.LocalPose.rf_speed, _x.LocalPose.lr_speed, _x.LocalPose.rr_speed, _x.LocalPose.rot_x, _x.LocalPose.rot_y, _x.LocalPose.rot_z, _x.LocalPose.acc_x, _x.LocalPose.acc_y, _x.LocalPose.acc_z, _x.LocalPose.steer, _x.LocalPose.brake, _x.LocalPose.fuel, _x.LocalPose.trans, _x.LocalPose.VehicleState, _x.LocalPose.mode, _x.LocalPose.drStatus, _x.LocalPose.errorStatus, _x.LocalPose.emergency_flag, _x.LocalPose.hardswitch_on, _x.Position.gps_flag, _x.Position.gps_week, _x.Position.gps_millisecond))
      buff.write(self.Position.llhPos.tostring())
      buff.write(self.Position.gaussPos.tostring())
      _x = self
      buff.write(_get_struct_8i2hi().pack(_x.Position.height, _x.Position.pitch, _x.Position.roll, _x.Position.azimuth, _x.Position.northVelocity, _x.Position.eastVelocity, _x.Position.upVelocity, _x.Position.positionStatus, _x.Position.motion_flag, _x.Position.motion_week, _x.Position.motion_millisecond))
      buff.write(self.Position.drPos.tostring())
      _x = self
      buff.write(_get_struct_5i().pack(_x.Position.drHeight, _x.Position.drAzimuth, _x.Position.drNorthVelocity, _x.Position.drEastVelocity, _x.Position.drUpVelocity))
      buff.write(self.Position.reserved.tostring())
      _x = self
      buff.write(_get_struct_6i().pack(_x.MapWidth, _x.MapHeight, _x.GridWidth, _x.GridHeight, _x.VehicleGridX, _x.VehicleGridY))
      _x = self.LocalAttributeMap
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_125000B().pack(*_x))
      else:
        buff.write(_get_struct_125000s().pack(_x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.index_surfacemap, _x.index_positiveobstacle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.LocalPose is None:
        self.LocalPose = vehicle_msgs.msg.LOCAL_POS_DATA()
      if self.Position is None:
        self.Position = vehicle_msgs.msg.PositionData()
      end = 0
      _x = self
      start = end
      end += 149
      (_x.MessageID, _x.MessageSeqNum, _x.LocalPoseTime, _x.GlobalPosTime, _x.LocalPose.header, _x.LocalPose.time, _x.LocalPose.dr_x, _x.LocalPose.dr_y, _x.LocalPose.dr_z, _x.LocalPose.dr_heading, _x.LocalPose.dr_roll, _x.LocalPose.dr_pitch, _x.LocalPose.lf_speed, _x.LocalPose.rf_speed, _x.LocalPose.lr_speed, _x.LocalPose.rr_speed, _x.LocalPose.rot_x, _x.LocalPose.rot_y, _x.LocalPose.rot_z, _x.LocalPose.acc_x, _x.LocalPose.acc_y, _x.LocalPose.acc_z, _x.LocalPose.steer, _x.LocalPose.brake, _x.LocalPose.fuel, _x.LocalPose.trans, _x.LocalPose.VehicleState, _x.LocalPose.mode, _x.LocalPose.drStatus, _x.LocalPose.errorStatus, _x.LocalPose.emergency_flag, _x.LocalPose.hardswitch_on, _x.Position.gps_flag, _x.Position.gps_week, _x.Position.gps_millisecond,) = _get_struct_2i2dId20ib5i2hd().unpack(str[start:end])
      start = end
      end += 8
      self.Position.llhPos = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=2)
      start = end
      end += 8
      self.Position.gaussPos = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=2)
      _x = self
      start = end
      end += 40
      (_x.Position.height, _x.Position.pitch, _x.Position.roll, _x.Position.azimuth, _x.Position.northVelocity, _x.Position.eastVelocity, _x.Position.upVelocity, _x.Position.positionStatus, _x.Position.motion_flag, _x.Position.motion_week, _x.Position.motion_millisecond,) = _get_struct_8i2hi().unpack(str[start:end])
      start = end
      end += 8
      self.Position.drPos = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=2)
      _x = self
      start = end
      end += 20
      (_x.Position.drHeight, _x.Position.drAzimuth, _x.Position.drNorthVelocity, _x.Position.drEastVelocity, _x.Position.drUpVelocity,) = _get_struct_5i().unpack(str[start:end])
      start = end
      end += 8
      self.Position.reserved = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=2)
      _x = self
      start = end
      end += 24
      (_x.MapWidth, _x.MapHeight, _x.GridWidth, _x.GridHeight, _x.VehicleGridX, _x.VehicleGridY,) = _get_struct_6i().unpack(str[start:end])
      start = end
      end += 125000
      self.LocalAttributeMap = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.index_surfacemap, _x.index_positiveobstacle,) = _get_struct_2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_125000B = None
def _get_struct_125000B():
    global _struct_125000B
    if _struct_125000B is None:
        _struct_125000B = struct.Struct("<125000B")
    return _struct_125000B
_struct_6i = None
def _get_struct_6i():
    global _struct_6i
    if _struct_6i is None:
        _struct_6i = struct.Struct("<6i")
    return _struct_6i
_struct_2i2dId20ib5i2hd = None
def _get_struct_2i2dId20ib5i2hd():
    global _struct_2i2dId20ib5i2hd
    if _struct_2i2dId20ib5i2hd is None:
        _struct_2i2dId20ib5i2hd = struct.Struct("<2i2dId20ib5i2hd")
    return _struct_2i2dId20ib5i2hd
_struct_8i2hi = None
def _get_struct_8i2hi():
    global _struct_8i2hi
    if _struct_8i2hi is None:
        _struct_8i2hi = struct.Struct("<8i2hi")
    return _struct_8i2hi
_struct_125000s = None
def _get_struct_125000s():
    global _struct_125000s
    if _struct_125000s is None:
        _struct_125000s = struct.Struct("<125000s")
    return _struct_125000s
_struct_5i = None
def _get_struct_5i():
    global _struct_5i
    if _struct_5i is None:
        _struct_5i = struct.Struct("<5i")
    return _struct_5i
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I

# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vehicle_msgs/Camera_Obj.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import vehicle_msgs.msg
import std_msgs.msg

class Camera_Obj(genpy.Message):
  _md5sum = "a330d0448787266098e8365de315bedb"
  _type = "vehicle_msgs/Camera_Obj"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header  header
int32 	messageID              #为每一个MSG设定唯一的标识码

FrameStamp localStamp
FrameStamp globalStamp
 
int32 camera_obstacle_id
float64 camera_obstacleposx
float64 camera_obstacleposy
int32 blinkerInfo
int32 cut_in_and_out
int32 obstacle_type
int32 obstacle_status
int32 obstacle_valid
int32 obstacles_brake_lights
float64 obstacle_length
float64 obstacle_width
float64 obstacles_velx

int32 obstacleAge
int32 obstacleLane
int32 CIPVFlag
float64 RadarPosX
float64 RadarVelX
int32 RadarMatchConfidence
int32 MatcheRadarID

float64 obstacleAngleRate
int32 obstacles_velY
float64 object_Accel_X
int32 obstacleReplaced
float64 obstacleAngle

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: vehicle_msgs/FrameStamp
#MSG FrameStamp
Header header
float64 time
float64  lat
float64  lng
float64  height
float64[3] position
float64[3] orientation
float64[3] linearSpeed
float64[3] angularSpeed 
"""
  __slots__ = ['header','messageID','localStamp','globalStamp','camera_obstacle_id','camera_obstacleposx','camera_obstacleposy','blinkerInfo','cut_in_and_out','obstacle_type','obstacle_status','obstacle_valid','obstacles_brake_lights','obstacle_length','obstacle_width','obstacles_velx','obstacleAge','obstacleLane','CIPVFlag','RadarPosX','RadarVelX','RadarMatchConfidence','MatcheRadarID','obstacleAngleRate','obstacles_velY','object_Accel_X','obstacleReplaced','obstacleAngle']
  _slot_types = ['std_msgs/Header','int32','vehicle_msgs/FrameStamp','vehicle_msgs/FrameStamp','int32','float64','float64','int32','int32','int32','int32','int32','int32','float64','float64','float64','int32','int32','int32','float64','float64','int32','int32','float64','int32','float64','int32','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,messageID,localStamp,globalStamp,camera_obstacle_id,camera_obstacleposx,camera_obstacleposy,blinkerInfo,cut_in_and_out,obstacle_type,obstacle_status,obstacle_valid,obstacles_brake_lights,obstacle_length,obstacle_width,obstacles_velx,obstacleAge,obstacleLane,CIPVFlag,RadarPosX,RadarVelX,RadarMatchConfidence,MatcheRadarID,obstacleAngleRate,obstacles_velY,object_Accel_X,obstacleReplaced,obstacleAngle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Camera_Obj, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.messageID is None:
        self.messageID = 0
      if self.localStamp is None:
        self.localStamp = vehicle_msgs.msg.FrameStamp()
      if self.globalStamp is None:
        self.globalStamp = vehicle_msgs.msg.FrameStamp()
      if self.camera_obstacle_id is None:
        self.camera_obstacle_id = 0
      if self.camera_obstacleposx is None:
        self.camera_obstacleposx = 0.
      if self.camera_obstacleposy is None:
        self.camera_obstacleposy = 0.
      if self.blinkerInfo is None:
        self.blinkerInfo = 0
      if self.cut_in_and_out is None:
        self.cut_in_and_out = 0
      if self.obstacle_type is None:
        self.obstacle_type = 0
      if self.obstacle_status is None:
        self.obstacle_status = 0
      if self.obstacle_valid is None:
        self.obstacle_valid = 0
      if self.obstacles_brake_lights is None:
        self.obstacles_brake_lights = 0
      if self.obstacle_length is None:
        self.obstacle_length = 0.
      if self.obstacle_width is None:
        self.obstacle_width = 0.
      if self.obstacles_velx is None:
        self.obstacles_velx = 0.
      if self.obstacleAge is None:
        self.obstacleAge = 0
      if self.obstacleLane is None:
        self.obstacleLane = 0
      if self.CIPVFlag is None:
        self.CIPVFlag = 0
      if self.RadarPosX is None:
        self.RadarPosX = 0.
      if self.RadarVelX is None:
        self.RadarVelX = 0.
      if self.RadarMatchConfidence is None:
        self.RadarMatchConfidence = 0
      if self.MatcheRadarID is None:
        self.MatcheRadarID = 0
      if self.obstacleAngleRate is None:
        self.obstacleAngleRate = 0.
      if self.obstacles_velY is None:
        self.obstacles_velY = 0
      if self.object_Accel_X is None:
        self.object_Accel_X = 0.
      if self.obstacleReplaced is None:
        self.obstacleReplaced = 0
      if self.obstacleAngle is None:
        self.obstacleAngle = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.messageID = 0
      self.localStamp = vehicle_msgs.msg.FrameStamp()
      self.globalStamp = vehicle_msgs.msg.FrameStamp()
      self.camera_obstacle_id = 0
      self.camera_obstacleposx = 0.
      self.camera_obstacleposy = 0.
      self.blinkerInfo = 0
      self.cut_in_and_out = 0
      self.obstacle_type = 0
      self.obstacle_status = 0
      self.obstacle_valid = 0
      self.obstacles_brake_lights = 0
      self.obstacle_length = 0.
      self.obstacle_width = 0.
      self.obstacles_velx = 0.
      self.obstacleAge = 0
      self.obstacleLane = 0
      self.CIPVFlag = 0
      self.RadarPosX = 0.
      self.RadarVelX = 0.
      self.RadarMatchConfidence = 0
      self.MatcheRadarID = 0
      self.obstacleAngleRate = 0.
      self.obstacles_velY = 0
      self.object_Accel_X = 0.
      self.obstacleReplaced = 0
      self.obstacleAngle = 0.

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_i3I().pack(_x.messageID, _x.localStamp.header.seq, _x.localStamp.header.stamp.secs, _x.localStamp.header.stamp.nsecs))
      _x = self.localStamp.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4d().pack(_x.localStamp.time, _x.localStamp.lat, _x.localStamp.lng, _x.localStamp.height))
      buff.write(_get_struct_3d().pack(*self.localStamp.position))
      buff.write(_get_struct_3d().pack(*self.localStamp.orientation))
      buff.write(_get_struct_3d().pack(*self.localStamp.linearSpeed))
      buff.write(_get_struct_3d().pack(*self.localStamp.angularSpeed))
      _x = self
      buff.write(_get_struct_3I().pack(_x.globalStamp.header.seq, _x.globalStamp.header.stamp.secs, _x.globalStamp.header.stamp.nsecs))
      _x = self.globalStamp.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4d().pack(_x.globalStamp.time, _x.globalStamp.lat, _x.globalStamp.lng, _x.globalStamp.height))
      buff.write(_get_struct_3d().pack(*self.globalStamp.position))
      buff.write(_get_struct_3d().pack(*self.globalStamp.orientation))
      buff.write(_get_struct_3d().pack(*self.globalStamp.linearSpeed))
      buff.write(_get_struct_3d().pack(*self.globalStamp.angularSpeed))
      _x = self
      buff.write(_get_struct_i2d6i3d3i2d2ididid().pack(_x.camera_obstacle_id, _x.camera_obstacleposx, _x.camera_obstacleposy, _x.blinkerInfo, _x.cut_in_and_out, _x.obstacle_type, _x.obstacle_status, _x.obstacle_valid, _x.obstacles_brake_lights, _x.obstacle_length, _x.obstacle_width, _x.obstacles_velx, _x.obstacleAge, _x.obstacleLane, _x.CIPVFlag, _x.RadarPosX, _x.RadarVelX, _x.RadarMatchConfidence, _x.MatcheRadarID, _x.obstacleAngleRate, _x.obstacles_velY, _x.object_Accel_X, _x.obstacleReplaced, _x.obstacleAngle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.localStamp is None:
        self.localStamp = vehicle_msgs.msg.FrameStamp()
      if self.globalStamp is None:
        self.globalStamp = vehicle_msgs.msg.FrameStamp()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 16
      (_x.messageID, _x.localStamp.header.seq, _x.localStamp.header.stamp.secs, _x.localStamp.header.stamp.nsecs,) = _get_struct_i3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.localStamp.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.localStamp.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.localStamp.time, _x.localStamp.lat, _x.localStamp.lng, _x.localStamp.height,) = _get_struct_4d().unpack(str[start:end])
      start = end
      end += 24
      self.localStamp.position = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 24
      self.localStamp.orientation = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 24
      self.localStamp.linearSpeed = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 24
      self.localStamp.angularSpeed = _get_struct_3d().unpack(str[start:end])
      _x = self
      start = end
      end += 12
      (_x.globalStamp.header.seq, _x.globalStamp.header.stamp.secs, _x.globalStamp.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.globalStamp.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.globalStamp.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.globalStamp.time, _x.globalStamp.lat, _x.globalStamp.lng, _x.globalStamp.height,) = _get_struct_4d().unpack(str[start:end])
      start = end
      end += 24
      self.globalStamp.position = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 24
      self.globalStamp.orientation = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 24
      self.globalStamp.linearSpeed = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 24
      self.globalStamp.angularSpeed = _get_struct_3d().unpack(str[start:end])
      _x = self
      start = end
      end += 136
      (_x.camera_obstacle_id, _x.camera_obstacleposx, _x.camera_obstacleposy, _x.blinkerInfo, _x.cut_in_and_out, _x.obstacle_type, _x.obstacle_status, _x.obstacle_valid, _x.obstacles_brake_lights, _x.obstacle_length, _x.obstacle_width, _x.obstacles_velx, _x.obstacleAge, _x.obstacleLane, _x.CIPVFlag, _x.RadarPosX, _x.RadarVelX, _x.RadarMatchConfidence, _x.MatcheRadarID, _x.obstacleAngleRate, _x.obstacles_velY, _x.object_Accel_X, _x.obstacleReplaced, _x.obstacleAngle,) = _get_struct_i2d6i3d3i2d2ididid().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_i3I().pack(_x.messageID, _x.localStamp.header.seq, _x.localStamp.header.stamp.secs, _x.localStamp.header.stamp.nsecs))
      _x = self.localStamp.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4d().pack(_x.localStamp.time, _x.localStamp.lat, _x.localStamp.lng, _x.localStamp.height))
      buff.write(self.localStamp.position.tostring())
      buff.write(self.localStamp.orientation.tostring())
      buff.write(self.localStamp.linearSpeed.tostring())
      buff.write(self.localStamp.angularSpeed.tostring())
      _x = self
      buff.write(_get_struct_3I().pack(_x.globalStamp.header.seq, _x.globalStamp.header.stamp.secs, _x.globalStamp.header.stamp.nsecs))
      _x = self.globalStamp.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4d().pack(_x.globalStamp.time, _x.globalStamp.lat, _x.globalStamp.lng, _x.globalStamp.height))
      buff.write(self.globalStamp.position.tostring())
      buff.write(self.globalStamp.orientation.tostring())
      buff.write(self.globalStamp.linearSpeed.tostring())
      buff.write(self.globalStamp.angularSpeed.tostring())
      _x = self
      buff.write(_get_struct_i2d6i3d3i2d2ididid().pack(_x.camera_obstacle_id, _x.camera_obstacleposx, _x.camera_obstacleposy, _x.blinkerInfo, _x.cut_in_and_out, _x.obstacle_type, _x.obstacle_status, _x.obstacle_valid, _x.obstacles_brake_lights, _x.obstacle_length, _x.obstacle_width, _x.obstacles_velx, _x.obstacleAge, _x.obstacleLane, _x.CIPVFlag, _x.RadarPosX, _x.RadarVelX, _x.RadarMatchConfidence, _x.MatcheRadarID, _x.obstacleAngleRate, _x.obstacles_velY, _x.object_Accel_X, _x.obstacleReplaced, _x.obstacleAngle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.localStamp is None:
        self.localStamp = vehicle_msgs.msg.FrameStamp()
      if self.globalStamp is None:
        self.globalStamp = vehicle_msgs.msg.FrameStamp()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 16
      (_x.messageID, _x.localStamp.header.seq, _x.localStamp.header.stamp.secs, _x.localStamp.header.stamp.nsecs,) = _get_struct_i3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.localStamp.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.localStamp.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.localStamp.time, _x.localStamp.lat, _x.localStamp.lng, _x.localStamp.height,) = _get_struct_4d().unpack(str[start:end])
      start = end
      end += 24
      self.localStamp.position = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      start = end
      end += 24
      self.localStamp.orientation = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      start = end
      end += 24
      self.localStamp.linearSpeed = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      start = end
      end += 24
      self.localStamp.angularSpeed = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      _x = self
      start = end
      end += 12
      (_x.globalStamp.header.seq, _x.globalStamp.header.stamp.secs, _x.globalStamp.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.globalStamp.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.globalStamp.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.globalStamp.time, _x.globalStamp.lat, _x.globalStamp.lng, _x.globalStamp.height,) = _get_struct_4d().unpack(str[start:end])
      start = end
      end += 24
      self.globalStamp.position = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      start = end
      end += 24
      self.globalStamp.orientation = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      start = end
      end += 24
      self.globalStamp.linearSpeed = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      start = end
      end += 24
      self.globalStamp.angularSpeed = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      _x = self
      start = end
      end += 136
      (_x.camera_obstacle_id, _x.camera_obstacleposx, _x.camera_obstacleposy, _x.blinkerInfo, _x.cut_in_and_out, _x.obstacle_type, _x.obstacle_status, _x.obstacle_valid, _x.obstacles_brake_lights, _x.obstacle_length, _x.obstacle_width, _x.obstacles_velx, _x.obstacleAge, _x.obstacleLane, _x.CIPVFlag, _x.RadarPosX, _x.RadarVelX, _x.RadarMatchConfidence, _x.MatcheRadarID, _x.obstacleAngleRate, _x.obstacles_velY, _x.object_Accel_X, _x.obstacleReplaced, _x.obstacleAngle,) = _get_struct_i2d6i3d3i2d2ididid().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_i3I = None
def _get_struct_i3I():
    global _struct_i3I
    if _struct_i3I is None:
        _struct_i3I = struct.Struct("<i3I")
    return _struct_i3I
_struct_i2d6i3d3i2d2ididid = None
def _get_struct_i2d6i3d3i2d2ididid():
    global _struct_i2d6i3d3i2d2ididid
    if _struct_i2d6i3d3i2d2ididid is None:
        _struct_i2d6i3d3i2d2ididid = struct.Struct("<i2d6i3d3i2d2ididid")
    return _struct_i2d6i3d3i2d2ididid
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d

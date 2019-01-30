# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vehicle_msgs/BCANInfo.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import vehicle_msgs.msg
import std_msgs.msg

class BCANInfo(genpy.Message):
  _md5sum = "bb9e346be5c6dbb42e95965b108b34f2"
  _type = "vehicle_msgs/BCANInfo"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
BCM2    bcm2
BCM3    bcm3 

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
MSG: vehicle_msgs/BCM2
# ID=0x23A, Len=8, 40ms                         
uint8 LeftLightState               # 左转向灯状态
uint8 RightLightState              # 右转向灯状态
uint8 PositionLampState            # 位置灯状态
uint8 HighBeamState                # 远光灯状态
uint8 LowBeamState                 # 近光灯状态
uint8 BackFogLightState            # 后雾灯状态
uint8 FrontFogLightState           # 前雾灯状态 
												 

================================================================================
MSG: vehicle_msgs/BCM3
# ID=0x33C, Len=3, 100ms                        
uint8  FrontWiperState              # 前雨刮开光状态 
"""
  __slots__ = ['header','bcm2','bcm3']
  _slot_types = ['std_msgs/Header','vehicle_msgs/BCM2','vehicle_msgs/BCM3']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,bcm2,bcm3

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BCANInfo, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.bcm2 is None:
        self.bcm2 = vehicle_msgs.msg.BCM2()
      if self.bcm3 is None:
        self.bcm3 = vehicle_msgs.msg.BCM3()
    else:
      self.header = std_msgs.msg.Header()
      self.bcm2 = vehicle_msgs.msg.BCM2()
      self.bcm3 = vehicle_msgs.msg.BCM3()

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
      buff.write(_get_struct_8B().pack(_x.bcm2.LeftLightState, _x.bcm2.RightLightState, _x.bcm2.PositionLampState, _x.bcm2.HighBeamState, _x.bcm2.LowBeamState, _x.bcm2.BackFogLightState, _x.bcm2.FrontFogLightState, _x.bcm3.FrontWiperState))
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
      if self.bcm2 is None:
        self.bcm2 = vehicle_msgs.msg.BCM2()
      if self.bcm3 is None:
        self.bcm3 = vehicle_msgs.msg.BCM3()
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
      end += 8
      (_x.bcm2.LeftLightState, _x.bcm2.RightLightState, _x.bcm2.PositionLampState, _x.bcm2.HighBeamState, _x.bcm2.LowBeamState, _x.bcm2.BackFogLightState, _x.bcm2.FrontFogLightState, _x.bcm3.FrontWiperState,) = _get_struct_8B().unpack(str[start:end])
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
      buff.write(_get_struct_8B().pack(_x.bcm2.LeftLightState, _x.bcm2.RightLightState, _x.bcm2.PositionLampState, _x.bcm2.HighBeamState, _x.bcm2.LowBeamState, _x.bcm2.BackFogLightState, _x.bcm2.FrontFogLightState, _x.bcm3.FrontWiperState))
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
      if self.bcm2 is None:
        self.bcm2 = vehicle_msgs.msg.BCM2()
      if self.bcm3 is None:
        self.bcm3 = vehicle_msgs.msg.BCM3()
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
      end += 8
      (_x.bcm2.LeftLightState, _x.bcm2.RightLightState, _x.bcm2.PositionLampState, _x.bcm2.HighBeamState, _x.bcm2.LowBeamState, _x.bcm2.BackFogLightState, _x.bcm2.FrontFogLightState, _x.bcm3.FrontWiperState,) = _get_struct_8B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8B = None
def _get_struct_8B():
    global _struct_8B
    if _struct_8B is None:
        _struct_8B = struct.Struct("<8B")
    return _struct_8B
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
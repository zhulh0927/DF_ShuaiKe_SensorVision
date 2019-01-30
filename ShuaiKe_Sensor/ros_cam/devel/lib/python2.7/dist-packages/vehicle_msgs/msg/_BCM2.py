# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vehicle_msgs/BCM2.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class BCM2(genpy.Message):
  _md5sum = "2dd1ec7da8d0951912ffcd735fa9a571"
  _type = "vehicle_msgs/BCM2"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ID=0x23A, Len=8, 40ms                         
uint8 LeftLightState               # 左转向灯状态
uint8 RightLightState              # 右转向灯状态
uint8 PositionLampState            # 位置灯状态
uint8 HighBeamState                # 远光灯状态
uint8 LowBeamState                 # 近光灯状态
uint8 BackFogLightState            # 后雾灯状态
uint8 FrontFogLightState           # 前雾灯状态 
												 
"""
  __slots__ = ['LeftLightState','RightLightState','PositionLampState','HighBeamState','LowBeamState','BackFogLightState','FrontFogLightState']
  _slot_types = ['uint8','uint8','uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       LeftLightState,RightLightState,PositionLampState,HighBeamState,LowBeamState,BackFogLightState,FrontFogLightState

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BCM2, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.LeftLightState is None:
        self.LeftLightState = 0
      if self.RightLightState is None:
        self.RightLightState = 0
      if self.PositionLampState is None:
        self.PositionLampState = 0
      if self.HighBeamState is None:
        self.HighBeamState = 0
      if self.LowBeamState is None:
        self.LowBeamState = 0
      if self.BackFogLightState is None:
        self.BackFogLightState = 0
      if self.FrontFogLightState is None:
        self.FrontFogLightState = 0
    else:
      self.LeftLightState = 0
      self.RightLightState = 0
      self.PositionLampState = 0
      self.HighBeamState = 0
      self.LowBeamState = 0
      self.BackFogLightState = 0
      self.FrontFogLightState = 0

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
      buff.write(_get_struct_7B().pack(_x.LeftLightState, _x.RightLightState, _x.PositionLampState, _x.HighBeamState, _x.LowBeamState, _x.BackFogLightState, _x.FrontFogLightState))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 7
      (_x.LeftLightState, _x.RightLightState, _x.PositionLampState, _x.HighBeamState, _x.LowBeamState, _x.BackFogLightState, _x.FrontFogLightState,) = _get_struct_7B().unpack(str[start:end])
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
      buff.write(_get_struct_7B().pack(_x.LeftLightState, _x.RightLightState, _x.PositionLampState, _x.HighBeamState, _x.LowBeamState, _x.BackFogLightState, _x.FrontFogLightState))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 7
      (_x.LeftLightState, _x.RightLightState, _x.PositionLampState, _x.HighBeamState, _x.LowBeamState, _x.BackFogLightState, _x.FrontFogLightState,) = _get_struct_7B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7B = None
def _get_struct_7B():
    global _struct_7B
    if _struct_7B is None:
        _struct_7B = struct.Struct("<7B")
    return _struct_7B

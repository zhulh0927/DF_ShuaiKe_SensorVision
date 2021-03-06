# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vehicle_msgs/ESC5.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ESC5(genpy.Message):
  _md5sum = "f2151725e15a51ed8a0da3ced00df537"
  _type = "vehicle_msgs/ESC5"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ID=0x122, Len=8, 20ms
float32 YawRate             # 横摆角速度
uint8   YawRateValid        # 横摆角速度有效性
float32 LateralAcceleration # 横向加速度信号
uint8   AyvSensorValid      # 横向加速度有效性
uint8   StateAct            # 制动系统工作状态反馈

"""
  __slots__ = ['YawRate','YawRateValid','LateralAcceleration','AyvSensorValid','StateAct']
  _slot_types = ['float32','uint8','float32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       YawRate,YawRateValid,LateralAcceleration,AyvSensorValid,StateAct

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ESC5, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.YawRate is None:
        self.YawRate = 0.
      if self.YawRateValid is None:
        self.YawRateValid = 0
      if self.LateralAcceleration is None:
        self.LateralAcceleration = 0.
      if self.AyvSensorValid is None:
        self.AyvSensorValid = 0
      if self.StateAct is None:
        self.StateAct = 0
    else:
      self.YawRate = 0.
      self.YawRateValid = 0
      self.LateralAcceleration = 0.
      self.AyvSensorValid = 0
      self.StateAct = 0

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
      buff.write(_get_struct_fBf2B().pack(_x.YawRate, _x.YawRateValid, _x.LateralAcceleration, _x.AyvSensorValid, _x.StateAct))
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
      end += 11
      (_x.YawRate, _x.YawRateValid, _x.LateralAcceleration, _x.AyvSensorValid, _x.StateAct,) = _get_struct_fBf2B().unpack(str[start:end])
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
      buff.write(_get_struct_fBf2B().pack(_x.YawRate, _x.YawRateValid, _x.LateralAcceleration, _x.AyvSensorValid, _x.StateAct))
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
      end += 11
      (_x.YawRate, _x.YawRateValid, _x.LateralAcceleration, _x.AyvSensorValid, _x.StateAct,) = _get_struct_fBf2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_fBf2B = None
def _get_struct_fBf2B():
    global _struct_fBf2B
    if _struct_fBf2B is None:
        _struct_fBf2B = struct.Struct("<fBf2B")
    return _struct_fBf2B

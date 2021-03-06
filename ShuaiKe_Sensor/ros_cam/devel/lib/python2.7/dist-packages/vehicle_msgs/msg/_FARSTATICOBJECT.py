# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vehicle_msgs/FARSTATICOBJECT.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class FARSTATICOBJECT(genpy.Message):
  _md5sum = "e35abdb6373cb523b09aafa17e7a6ea2"
  _type = "vehicle_msgs/FARSTATICOBJECT"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 VertexNumber 	#多边形边界顶点数量
int32[50] ConvexX	#边界顶点坐标X
int32[50] ConvexY	#边界顶点坐标Y
int32 CenterX	#中心点x
int32 CenterY	#中心点y 
"""
  __slots__ = ['VertexNumber','ConvexX','ConvexY','CenterX','CenterY']
  _slot_types = ['int32','int32[50]','int32[50]','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       VertexNumber,ConvexX,ConvexY,CenterX,CenterY

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FARSTATICOBJECT, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.VertexNumber is None:
        self.VertexNumber = 0
      if self.ConvexX is None:
        self.ConvexX = [0] * 50
      if self.ConvexY is None:
        self.ConvexY = [0] * 50
      if self.CenterX is None:
        self.CenterX = 0
      if self.CenterY is None:
        self.CenterY = 0
    else:
      self.VertexNumber = 0
      self.ConvexX = [0] * 50
      self.ConvexY = [0] * 50
      self.CenterX = 0
      self.CenterY = 0

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
      buff.write(_get_struct_i().pack(self.VertexNumber))
      buff.write(_get_struct_50i().pack(*self.ConvexX))
      buff.write(_get_struct_50i().pack(*self.ConvexY))
      _x = self
      buff.write(_get_struct_2i().pack(_x.CenterX, _x.CenterY))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (self.VertexNumber,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 200
      self.ConvexX = _get_struct_50i().unpack(str[start:end])
      start = end
      end += 200
      self.ConvexY = _get_struct_50i().unpack(str[start:end])
      _x = self
      start = end
      end += 8
      (_x.CenterX, _x.CenterY,) = _get_struct_2i().unpack(str[start:end])
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
      buff.write(_get_struct_i().pack(self.VertexNumber))
      buff.write(self.ConvexX.tostring())
      buff.write(self.ConvexY.tostring())
      _x = self
      buff.write(_get_struct_2i().pack(_x.CenterX, _x.CenterY))
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
      start = end
      end += 4
      (self.VertexNumber,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 200
      self.ConvexX = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=50)
      start = end
      end += 200
      self.ConvexY = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=50)
      _x = self
      start = end
      end += 8
      (_x.CenterX, _x.CenterY,) = _get_struct_2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
_struct_50i = None
def _get_struct_50i():
    global _struct_50i
    if _struct_50i is None:
        _struct_50i = struct.Struct("<50i")
    return _struct_50i

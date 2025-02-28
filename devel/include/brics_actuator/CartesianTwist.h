// Generated by gencpp from file brics_actuator/CartesianTwist.msg
// DO NOT EDIT!


#ifndef BRICS_ACTUATOR_MESSAGE_CARTESIANTWIST_H
#define BRICS_ACTUATOR_MESSAGE_CARTESIANTWIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <brics_actuator/Poison.h>
#include <brics_actuator/CartesianVector.h>
#include <brics_actuator/CartesianVector.h>

namespace brics_actuator
{
template <class ContainerAllocator>
struct CartesianTwist_
{
  typedef CartesianTwist_<ContainerAllocator> Type;

  CartesianTwist_()
    : timeStamp()
    , poisonStamp()
    , base_frame_uri()
    , target_frame_uri()
    , translation()
    , rotation()  {
    }
  CartesianTwist_(const ContainerAllocator& _alloc)
    : timeStamp()
    , poisonStamp(_alloc)
    , base_frame_uri(_alloc)
    , target_frame_uri(_alloc)
    , translation(_alloc)
    , rotation(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _timeStamp_type;
  _timeStamp_type timeStamp;

   typedef  ::brics_actuator::Poison_<ContainerAllocator>  _poisonStamp_type;
  _poisonStamp_type poisonStamp;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _base_frame_uri_type;
  _base_frame_uri_type base_frame_uri;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _target_frame_uri_type;
  _target_frame_uri_type target_frame_uri;

   typedef  ::brics_actuator::CartesianVector_<ContainerAllocator>  _translation_type;
  _translation_type translation;

   typedef  ::brics_actuator::CartesianVector_<ContainerAllocator>  _rotation_type;
  _rotation_type rotation;





  typedef boost::shared_ptr< ::brics_actuator::CartesianTwist_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::brics_actuator::CartesianTwist_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianTwist_

typedef ::brics_actuator::CartesianTwist_<std::allocator<void> > CartesianTwist;

typedef boost::shared_ptr< ::brics_actuator::CartesianTwist > CartesianTwistPtr;
typedef boost::shared_ptr< ::brics_actuator::CartesianTwist const> CartesianTwistConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::brics_actuator::CartesianTwist_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::brics_actuator::CartesianTwist_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace brics_actuator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'brics_actuator': ['/home/reaper/catkin_ws/src/brics_actuator/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::brics_actuator::CartesianTwist_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::CartesianTwist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::CartesianTwist_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e86336d0ca57e442a1f55b8cb29e1a22";
  }

  static const char* value(const ::brics_actuator::CartesianTwist_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe86336d0ca57e442ULL;
  static const uint64_t static_value2 = 0xa1f55b8cb29e1a22ULL;
};

template<class ContainerAllocator>
struct DataType< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "brics_actuator/CartesianTwist";
  }

  static const char* value(const ::brics_actuator::CartesianTwist_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time timeStamp\n\
Poison poisonStamp\n\
string base_frame_uri\n\
string target_frame_uri\n\
# need some more frames?	\n\
CartesianVector translation \n\
CartesianVector rotation\n\
\n\
================================================================================\n\
MSG: brics_actuator/Poison\n\
string originator 		# node id\n\
string description 		# encoding still an issue\n\
float32 qos			# reliability of the channel\n\
				# 0..1 where 1 means healthy\n\
\n\
================================================================================\n\
MSG: brics_actuator/CartesianVector\n\
string unit\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::brics_actuator::CartesianTwist_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timeStamp);
      stream.next(m.poisonStamp);
      stream.next(m.base_frame_uri);
      stream.next(m.target_frame_uri);
      stream.next(m.translation);
      stream.next(m.rotation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianTwist_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::brics_actuator::CartesianTwist_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::brics_actuator::CartesianTwist_<ContainerAllocator>& v)
  {
    s << indent << "timeStamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timeStamp);
    s << indent << "poisonStamp: ";
    s << std::endl;
    Printer< ::brics_actuator::Poison_<ContainerAllocator> >::stream(s, indent + "  ", v.poisonStamp);
    s << indent << "base_frame_uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.base_frame_uri);
    s << indent << "target_frame_uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.target_frame_uri);
    s << indent << "translation: ";
    s << std::endl;
    Printer< ::brics_actuator::CartesianVector_<ContainerAllocator> >::stream(s, indent + "  ", v.translation);
    s << indent << "rotation: ";
    s << std::endl;
    Printer< ::brics_actuator::CartesianVector_<ContainerAllocator> >::stream(s, indent + "  ", v.rotation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BRICS_ACTUATOR_MESSAGE_CARTESIANTWIST_H

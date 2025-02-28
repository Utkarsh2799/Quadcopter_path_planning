// Generated by gencpp from file brics_actuator/JointTorques.msg
// DO NOT EDIT!


#ifndef BRICS_ACTUATOR_MESSAGE_JOINTTORQUES_H
#define BRICS_ACTUATOR_MESSAGE_JOINTTORQUES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <brics_actuator/Poison.h>
#include <brics_actuator/JointValue.h>

namespace brics_actuator
{
template <class ContainerAllocator>
struct JointTorques_
{
  typedef JointTorques_<ContainerAllocator> Type;

  JointTorques_()
    : poisonStamp()
    , torques()  {
    }
  JointTorques_(const ContainerAllocator& _alloc)
    : poisonStamp(_alloc)
    , torques(_alloc)  {
  (void)_alloc;
    }



   typedef  ::brics_actuator::Poison_<ContainerAllocator>  _poisonStamp_type;
  _poisonStamp_type poisonStamp;

   typedef std::vector< ::brics_actuator::JointValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::brics_actuator::JointValue_<ContainerAllocator> >::other >  _torques_type;
  _torques_type torques;





  typedef boost::shared_ptr< ::brics_actuator::JointTorques_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::brics_actuator::JointTorques_<ContainerAllocator> const> ConstPtr;

}; // struct JointTorques_

typedef ::brics_actuator::JointTorques_<std::allocator<void> > JointTorques;

typedef boost::shared_ptr< ::brics_actuator::JointTorques > JointTorquesPtr;
typedef boost::shared_ptr< ::brics_actuator::JointTorques const> JointTorquesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::brics_actuator::JointTorques_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::brics_actuator::JointTorques_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::brics_actuator::JointTorques_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::brics_actuator::JointTorques_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::JointTorques_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::JointTorques_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::JointTorques_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::JointTorques_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::brics_actuator::JointTorques_<ContainerAllocator> >
{
  static const char* value()
  {
    return "75ccec429fa95e6b178bb9f3d06583e1";
  }

  static const char* value(const ::brics_actuator::JointTorques_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x75ccec429fa95e6bULL;
  static const uint64_t static_value2 = 0x178bb9f3d06583e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::brics_actuator::JointTorques_<ContainerAllocator> >
{
  static const char* value()
  {
    return "brics_actuator/JointTorques";
  }

  static const char* value(const ::brics_actuator::JointTorques_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::brics_actuator::JointTorques_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Poison poisonStamp\n\
JointValue[] torques\n\
\n\
================================================================================\n\
MSG: brics_actuator/Poison\n\
string originator 		# node id\n\
string description 		# encoding still an issue\n\
float32 qos			# reliability of the channel\n\
				# 0..1 where 1 means healthy\n\
\n\
================================================================================\n\
MSG: brics_actuator/JointValue\n\
time timeStamp 		#time of the data \n\
string joint_uri\n\
string unit 		#if empy expects si units, you can use boost::unit\n\
float64 value\n\
";
  }

  static const char* value(const ::brics_actuator::JointTorques_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::brics_actuator::JointTorques_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.poisonStamp);
      stream.next(m.torques);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointTorques_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::brics_actuator::JointTorques_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::brics_actuator::JointTorques_<ContainerAllocator>& v)
  {
    s << indent << "poisonStamp: ";
    s << std::endl;
    Printer< ::brics_actuator::Poison_<ContainerAllocator> >::stream(s, indent + "  ", v.poisonStamp);
    s << indent << "torques[]" << std::endl;
    for (size_t i = 0; i < v.torques.size(); ++i)
    {
      s << indent << "  torques[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::brics_actuator::JointValue_<ContainerAllocator> >::stream(s, indent + "    ", v.torques[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BRICS_ACTUATOR_MESSAGE_JOINTTORQUES_H

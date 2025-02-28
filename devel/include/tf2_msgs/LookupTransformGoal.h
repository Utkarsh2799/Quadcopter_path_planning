// Generated by gencpp from file tf2_msgs/LookupTransformGoal.msg
// DO NOT EDIT!


#ifndef TF2_MSGS_MESSAGE_LOOKUPTRANSFORMGOAL_H
#define TF2_MSGS_MESSAGE_LOOKUPTRANSFORMGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tf2_msgs
{
template <class ContainerAllocator>
struct LookupTransformGoal_
{
  typedef LookupTransformGoal_<ContainerAllocator> Type;

  LookupTransformGoal_()
    : target_frame()
    , source_frame()
    , source_time()
    , timeout()
    , target_time()
    , fixed_frame()
    , advanced(false)  {
    }
  LookupTransformGoal_(const ContainerAllocator& _alloc)
    : target_frame(_alloc)
    , source_frame(_alloc)
    , source_time()
    , timeout()
    , target_time()
    , fixed_frame(_alloc)
    , advanced(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _target_frame_type;
  _target_frame_type target_frame;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _source_frame_type;
  _source_frame_type source_frame;

   typedef ros::Time _source_time_type;
  _source_time_type source_time;

   typedef ros::Duration _timeout_type;
  _timeout_type timeout;

   typedef ros::Time _target_time_type;
  _target_time_type target_time;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _fixed_frame_type;
  _fixed_frame_type fixed_frame;

   typedef uint8_t _advanced_type;
  _advanced_type advanced;





  typedef boost::shared_ptr< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> const> ConstPtr;

}; // struct LookupTransformGoal_

typedef ::tf2_msgs::LookupTransformGoal_<std::allocator<void> > LookupTransformGoal;

typedef boost::shared_ptr< ::tf2_msgs::LookupTransformGoal > LookupTransformGoalPtr;
typedef boost::shared_ptr< ::tf2_msgs::LookupTransformGoal const> LookupTransformGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'tf2_msgs': ['/home/reaper/catkin_ws/src/geometry2/tf2_msgs/msg', '/home/reaper/catkin_ws/devel/share/tf2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "35e3720468131d675a18bb6f3e5f22f8";
  }

  static const char* value(const ::tf2_msgs::LookupTransformGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x35e3720468131d67ULL;
  static const uint64_t static_value2 = 0x5a18bb6f3e5f22f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf2_msgs/LookupTransformGoal";
  }

  static const char* value(const ::tf2_msgs::LookupTransformGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#Simple API\n\
string target_frame\n\
string source_frame\n\
time source_time\n\
duration timeout\n\
\n\
#Advanced API\n\
time target_time\n\
string fixed_frame\n\
\n\
#Whether or not to use the advanced API\n\
bool advanced\n\
\n\
";
  }

  static const char* value(const ::tf2_msgs::LookupTransformGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target_frame);
      stream.next(m.source_frame);
      stream.next(m.source_time);
      stream.next(m.timeout);
      stream.next(m.target_time);
      stream.next(m.fixed_frame);
      stream.next(m.advanced);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LookupTransformGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf2_msgs::LookupTransformGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf2_msgs::LookupTransformGoal_<ContainerAllocator>& v)
  {
    s << indent << "target_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.target_frame);
    s << indent << "source_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.source_frame);
    s << indent << "source_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.source_time);
    s << indent << "timeout: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timeout);
    s << indent << "target_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.target_time);
    s << indent << "fixed_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.fixed_frame);
    s << indent << "advanced: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.advanced);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF2_MSGS_MESSAGE_LOOKUPTRANSFORMGOAL_H

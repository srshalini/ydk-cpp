
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::Destination::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::ForwardingStatus::ForwardingStatus()
    :
    reason{YType::empty, "reason"}
{

    yang_name = "forwarding-status"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Routing::ForwardingStatus::~ForwardingStatus()
{
}

bool Native::Flow::Record::Default::Match::Routing::ForwardingStatus::has_data() const
{
    if (is_presence_container) return true;
    return reason.is_set;
}

bool Native::Flow::Record::Default::Match::Routing::ForwardingStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Native::Flow::Record::Default::Match::Routing::ForwardingStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::ForwardingStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::ForwardingStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::ForwardingStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Routing::ForwardingStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::ForwardingStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::ForwardingStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::NextHop::NextHop()
    :
    address(std::make_shared<Native::Flow::Record::Default::Match::Routing::NextHop::Address>())
{
    address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Routing::NextHop::~NextHop()
{
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Default::Match::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Default::Match::Routing::NextHop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Routing::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Routing::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::NextHop::Address::Address()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Routing::NextHop::Address::~Address()
{
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Default::Match::Routing::NextHop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::NextHop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::NextHop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::NextHop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Routing::NextHop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Routing::NextHop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::Ipv4()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return bgp.is_set;
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::Ipv6()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return bgp.is_set;
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::NextHop::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::Pw::Pw()
    :
    destination(std::make_shared<Native::Flow::Record::Default::Match::Routing::Pw::Destination>())
{
    destination->parent = this;

    yang_name = "pw"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Routing::Pw::~Pw()
{
}

bool Native::Flow::Record::Default::Match::Routing::Pw::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data());
}

bool Native::Flow::Record::Default::Match::Routing::Pw::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Flow::Record::Default::Match::Routing::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Match::Routing::Pw::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Routing::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Routing::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Routing::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::Pw::Destination::Destination()
    :
    address{YType::empty, "address"}
{

    yang_name = "destination"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Routing::Pw::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Match::Routing::Pw::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Default::Match::Routing::Pw::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Match::Routing::Pw::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::Pw::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::Pw::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::Pw::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Routing::Pw::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::Pw::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::Pw::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::Source::Source()
    :
    traffic_index{YType::empty, "traffic-index"}
        ,
    as(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Routing::Source::~Source()
{
}

bool Native::Flow::Record::Default::Match::Routing::Source::has_data() const
{
    if (is_presence_container) return true;
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Default::Match::Routing::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Default::Match::Routing::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Default::Match::Routing::Source::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(as != nullptr)
    {
        _children["as"] = as;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Routing::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::Source::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
        ,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Routing::Source::As::~As()
{
}

bool Native::Flow::Record::Default::Match::Routing::Source::As::has_data() const
{
    if (is_presence_container) return true;
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Default::Match::Routing::Source::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Default::Match::Routing::Source::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::Source::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::Source::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Default::Match::Routing::Source::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::Source::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Routing::Source::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::Source::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::Source::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::Source::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Routing::Source::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Default::Match::Routing::Source::As::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Default::Match::Routing::Source::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Default::Match::Routing::Source::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::Source::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::Source::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::Source::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Routing::Source::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::Source::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::Source::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Routing::Vrf::Vrf()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vrf"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Routing::Vrf::~Vrf()
{
}

bool Native::Flow::Record::Default::Match::Routing::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Default::Match::Routing::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Default::Match::Routing::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Routing::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Routing::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Routing::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Routing::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Routing::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Routing::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Services::Services()
    :
    waas(std::make_shared<Native::Flow::Record::Default::Match::Services::Waas>())
{
    waas->parent = this;

    yang_name = "services"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Services::~Services()
{
}

bool Native::Flow::Record::Default::Match::Services::has_data() const
{
    if (is_presence_container) return true;
    return (waas !=  nullptr && waas->has_data());
}

bool Native::Flow::Record::Default::Match::Services::has_operation() const
{
    return is_set(yfilter)
	|| (waas !=  nullptr && waas->has_operation());
}

std::string Native::Flow::Record::Default::Match::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        if(waas == nullptr)
        {
            waas = std::make_shared<Native::Flow::Record::Default::Match::Services::Waas>();
        }
        return waas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(waas != nullptr)
    {
        _children["waas"] = waas;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Services::Waas::Waas()
    :
    passthrough_reason{YType::empty, "passthrough-reason"}
        ,
    segment(nullptr) // presence node
{

    yang_name = "waas"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Services::Waas::~Waas()
{
}

bool Native::Flow::Record::Default::Match::Services::Waas::has_data() const
{
    if (is_presence_container) return true;
    return passthrough_reason.is_set
	|| (segment !=  nullptr && segment->has_data());
}

bool Native::Flow::Record::Default::Match::Services::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passthrough_reason.yfilter)
	|| (segment !=  nullptr && segment->has_operation());
}

std::string Native::Flow::Record::Default::Match::Services::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Services::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passthrough_reason.is_set || is_set(passthrough_reason.yfilter)) leaf_name_data.push_back(passthrough_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Services::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<Native::Flow::Record::Default::Match::Services::Waas::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Services::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment != nullptr)
    {
        _children["segment"] = segment;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Services::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason = value;
        passthrough_reason.value_namespace = name_space;
        passthrough_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Services::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Services::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "passthrough-reason")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Services::Waas::Segment::Segment()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "segment"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Services::Waas::Segment::~Segment()
{
}

bool Native::Flow::Record::Default::Match::Services::Waas::Segment::has_data() const
{
    if (is_presence_container) return true;
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Default::Match::Services::Waas::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Default::Match::Services::Waas::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Services::Waas::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Services::Waas::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Services::Waas::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Services::Waas::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Services::Waas::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Services::Waas::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Timestamp::Timestamp()
    :
    absolute(std::make_shared<Native::Flow::Record::Default::Match::Timestamp::Absolute>())
{
    absolute->parent = this;

    yang_name = "timestamp"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Timestamp::~Timestamp()
{
}

bool Native::Flow::Record::Default::Match::Timestamp::has_data() const
{
    if (is_presence_container) return true;
    return (absolute !=  nullptr && absolute->has_data());
}

bool Native::Flow::Record::Default::Match::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::Flow::Record::Default::Match::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::Flow::Record::Default::Match::Timestamp::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(absolute != nullptr)
    {
        _children["absolute"] = absolute;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Timestamp::Absolute::Absolute()
    :
    monitoring_interval(std::make_shared<Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval>())
{
    monitoring_interval->parent = this;

    yang_name = "absolute"; yang_parent_name = "timestamp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Timestamp::Absolute::~Absolute()
{
}

bool Native::Flow::Record::Default::Match::Timestamp::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring_interval !=  nullptr && monitoring_interval->has_data());
}

bool Native::Flow::Record::Default::Match::Timestamp::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring_interval !=  nullptr && monitoring_interval->has_operation());
}

std::string Native::Flow::Record::Default::Match::Timestamp::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Timestamp::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Timestamp::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring-interval")
    {
        if(monitoring_interval == nullptr)
        {
            monitoring_interval = std::make_shared<Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval>();
        }
        return monitoring_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Timestamp::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitoring_interval != nullptr)
    {
        _children["monitoring-interval"] = monitoring_interval;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Timestamp::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Timestamp::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Timestamp::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring-interval")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::MonitoringInterval()
    :
    start{YType::empty, "start"}
{

    yang_name = "monitoring-interval"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::~MonitoringInterval()
{
}

bool Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set;
}

bool Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter);
}

std::string Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Timestamp::Absolute::MonitoringInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Transport()
    :
    destination_port{YType::empty, "destination-port"},
    source_port{YType::empty, "source-port"}
        ,
    bytes(std::make_shared<Native::Flow::Record::Default::Match::Transport::Bytes>())
    , rtp(std::make_shared<Native::Flow::Record::Default::Match::Transport::Rtp>())
    , icmp(std::make_shared<Native::Flow::Record::Default::Match::Transport::Icmp>())
    , igmp(std::make_shared<Native::Flow::Record::Default::Match::Transport::Igmp>())
    , tcp(std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp>())
    , udp(std::make_shared<Native::Flow::Record::Default::Match::Transport::Udp>())
{
    bytes->parent = this;
    rtp->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Match::Transport::has_data() const
{
    if (is_presence_container) return true;
    return destination_port.is_set
	|| source_port.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Flow::Record::Default::Match::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Flow::Record::Default::Match::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Match::Transport::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Flow::Record::Default::Match::Transport::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Flow::Record::Default::Match::Transport::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Flow::Record::Default::Match::Transport::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Flow::Record::Default::Match::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(rtp != nullptr)
    {
        _children["rtp"] = rtp;
    }

    if(icmp != nullptr)
    {
        _children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        _children["igmp"] = igmp;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "rtp" || name == "icmp" || name == "igmp" || name == "tcp" || name == "udp" || name == "destination-port" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Bytes::Bytes()
    :
    expected{YType::empty, "expected"}
        ,
    lost(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Match::Transport::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return expected.is_set
	|| (lost !=  nullptr && lost->has_data());
}

bool Native::Flow::Record::Default::Match::Transport::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expected.yfilter)
	|| (lost !=  nullptr && lost->has_operation());
}

std::string Native::Flow::Record::Default::Match::Transport::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expected.is_set || is_set(expected.yfilter)) leaf_name_data.push_back(expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lost")
    {
        if(lost == nullptr)
        {
            lost = std::make_shared<Native::Flow::Record::Default::Match::Transport::Bytes::Lost>();
        }
        return lost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lost != nullptr)
    {
        _children["lost"] = lost;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expected")
    {
        expected = value;
        expected.value_namespace = name_space;
        expected.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expected")
    {
        expected.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lost" || name == "expected")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Bytes::Lost::Lost()
    :
    rate{YType::empty, "rate"}
{

    yang_name = "lost"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Transport::Bytes::Lost::~Lost()
{
}

bool Native::Flow::Record::Default::Match::Transport::Bytes::Lost::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Bytes::Lost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Bytes::Lost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Bytes::Lost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Bytes::Lost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Bytes::Lost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Bytes::Lost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Bytes::Lost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Bytes::Lost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Rtp::Rtp()
    :
    ssrc{YType::empty, "ssrc"}
{

    yang_name = "rtp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Rtp::~Rtp()
{
}

bool Native::Flow::Record::Default::Match::Transport::Rtp::has_data() const
{
    if (is_presence_container) return true;
    return ssrc.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssrc")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Icmp::Icmp()
    :
    ipv4(std::make_shared<Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "icmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Icmp::~Icmp()
{
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Default::Match::Transport::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Transport::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::Ipv4()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv4"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::Ipv6()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv6"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Icmp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Igmp::Igmp()
    :
    type{YType::empty, "type"}
{

    yang_name = "igmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Igmp::~Igmp()
{
}

bool Native::Flow::Record::Default::Match::Transport::Igmp::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Tcp::Tcp()
    :
    acknowledgement_number{YType::empty, "acknowledgement-number"},
    destination_port{YType::empty, "destination-port"},
    header_length{YType::empty, "header-length"},
    maximum_segment_size{YType::empty, "maximum-segment-size"},
    sequence_number{YType::empty, "sequence-number"},
    source_port{YType::empty, "source-port"},
    urgent_pointer{YType::empty, "urgent-pointer"}
        ,
    flags(nullptr) // presence node
    , flow(std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::Flow_>())
    , option(std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::Option>())
    , window_size(nullptr) // presence node
{
    flow->parent = this;
    option->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Tcp::~Tcp()
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return acknowledgement_number.is_set
	|| destination_port.is_set
	|| header_length.is_set
	|| maximum_segment_size.is_set
	|| sequence_number.is_set
	|| source_port.is_set
	|| urgent_pointer.is_set
	|| (flags !=  nullptr && flags->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (window_size !=  nullptr && window_size->has_data());
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement_number.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(header_length.yfilter)
	|| ydk::is_set(maximum_segment_size.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(urgent_pointer.yfilter)
	|| (flags !=  nullptr && flags->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (window_size !=  nullptr && window_size->has_operation());
}

std::string Native::Flow::Record::Default::Match::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_number.is_set || is_set(acknowledgement_number.yfilter)) leaf_name_data.push_back(acknowledgement_number.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.yfilter)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (maximum_segment_size.is_set || is_set(maximum_segment_size.yfilter)) leaf_name_data.push_back(maximum_segment_size.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (urgent_pointer.is_set || is_set(urgent_pointer.yfilter)) leaf_name_data.push_back(urgent_pointer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::Option>();
        }
        return option;
    }

    if(child_yang_name == "window-size")
    {
        if(window_size == nullptr)
        {
            window_size = std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize>();
        }
        return window_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(window_size != nullptr)
    {
        _children["window-size"] = window_size;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number = value;
        acknowledgement_number.value_namespace = name_space;
        acknowledgement_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-length")
    {
        header_length = value;
        header_length.value_namespace = name_space;
        header_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size = value;
        maximum_segment_size.value_namespace = name_space;
        maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer = value;
        urgent_pointer.value_namespace = name_space;
        urgent_pointer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "header-length")
    {
        header_length.yfilter = yfilter;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "flow" || name == "option" || name == "window-size" || name == "acknowledgement-number" || name == "destination-port" || name == "header-length" || name == "maximum-segment-size" || name == "sequence-number" || name == "source-port" || name == "urgent-pointer")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Tcp::Flags::Flags()
    :
    ack{YType::empty, "ack"},
    cwr{YType::empty, "cwr"},
    ece{YType::empty, "ece"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"}
{

    yang_name = "flags"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Transport::Tcp::Flags::~Flags()
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Flags::has_data() const
{
    if (is_presence_container) return true;
    return ack.is_set
	|| cwr.is_set
	|| ece.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(cwr.yfilter)
	|| ydk::is_set(ece.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Tcp::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Tcp::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (cwr.is_set || is_set(cwr.yfilter)) leaf_name_data.push_back(cwr.get_name_leafdata());
    if (ece.is_set || is_set(ece.yfilter)) leaf_name_data.push_back(ece.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Tcp::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Tcp::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cwr")
    {
        cwr = value;
        cwr.value_namespace = name_space;
        cwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ece")
    {
        ece = value;
        ece.value_namespace = name_space;
        ece.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "cwr")
    {
        cwr.yfilter = yfilter;
    }
    if(value_path == "ece")
    {
        ece.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "cwr" || name == "ece" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::Flow_()
    :
    count{YType::empty, "count"}
{

    yang_name = "flow"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Tcp::Option::Option()
    :
    map(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Tcp::Option::~Option()
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Option::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data());
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Option::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Flow::Record::Default::Match::Transport::Tcp::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Tcp::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Tcp::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Tcp::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::Map()
    :
    long_{YType::empty, "long"}
{

    yang_name = "map"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::~Map()
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::Option::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::WindowSize()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"},
    sum{YType::empty, "sum"}
        ,
    average(nullptr) // presence node
{

    yang_name = "window-size"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::~WindowSize()
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set
	|| sum.is_set
	|| (average !=  nullptr && average->has_data());
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| (average !=  nullptr && average->has_operation());
}

std::string Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average")
    {
        if(average == nullptr)
        {
            average = std::make_shared<Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average>();
        }
        return average;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(average != nullptr)
    {
        _children["average"] = average;
    }

    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "minimum" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::Average()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "average"; yang_parent_name = "window-size"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::~Average()
{
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::has_data() const
{
    if (is_presence_container) return true;
    return sum.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Tcp::WindowSize::Average::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Match::Transport::Udp::Udp()
    :
    destination_port{YType::empty, "destination-port"},
    message_length{YType::empty, "message-length"},
    source_port{YType::empty, "source-port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Match::Transport::Udp::~Udp()
{
}

bool Native::Flow::Record::Default::Match::Transport::Udp::has_data() const
{
    if (is_presence_container) return true;
    return destination_port.is_set
	|| message_length.is_set
	|| source_port.is_set;
}

bool Native::Flow::Record::Default::Match::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(message_length.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Flow::Record::Default::Match::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Match::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (message_length.is_set || is_set(message_length.yfilter)) leaf_name_data.push_back(message_length.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Match::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Match::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Match::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-length")
    {
        message_length = value;
        message_length.value_namespace = name_space;
        message_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Match::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "message-length")
    {
        message_length.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Match::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port" || name == "message-length" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Record::Match::Match()
    :
    application(std::make_shared<Native::Flow::Record::Match::Application>())
    , connection(std::make_shared<Native::Flow::Record::Match::Connection>())
    , datalink(std::make_shared<Native::Flow::Record::Match::Datalink>())
    , flow(std::make_shared<Native::Flow::Record::Match::Flow_>())
    , interface(std::make_shared<Native::Flow::Record::Match::Interface>())
    , ipv4(std::make_shared<Native::Flow::Record::Match::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Match::Ipv6>())
    , metadata(std::make_shared<Native::Flow::Record::Match::Metadata>())
    , mpls(std::make_shared<Native::Flow::Record::Match::Mpls>())
    , network(std::make_shared<Native::Flow::Record::Match::Network>())
    , pfr(std::make_shared<Native::Flow::Record::Match::Pfr>())
    , policy(std::make_shared<Native::Flow::Record::Match::Policy>())
    , routing(std::make_shared<Native::Flow::Record::Match::Routing>())
    , services(std::make_shared<Native::Flow::Record::Match::Services>())
    , timestamp(std::make_shared<Native::Flow::Record::Match::Timestamp>())
    , transport(std::make_shared<Native::Flow::Record::Match::Transport>())
{
    application->parent = this;
    connection->parent = this;
    datalink->parent = this;
    flow->parent = this;
    interface->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    metadata->parent = this;
    mpls->parent = this;
    network->parent = this;
    pfr->parent = this;
    policy->parent = this;
    routing->parent = this;
    services->parent = this;
    timestamp->parent = this;
    transport->parent = this;

    yang_name = "match"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::~Match()
{
}

bool Native::Flow::Record::Match::has_data() const
{
    if (is_presence_container) return true;
    return (application !=  nullptr && application->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (timestamp !=  nullptr && timestamp->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Match::has_operation() const
{
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (timestamp !=  nullptr && timestamp->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Match::Application>();
        }
        return application;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Flow::Record::Match::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Flow::Record::Match::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Match::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Flow::Record::Match::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Flow::Record::Match::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Flow::Record::Match::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Match::Network>();
        }
        return network;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::Flow::Record::Match::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Flow::Record::Match::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Flow::Record::Match::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Flow::Record::Match::Services>();
        }
        return services;
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Native::Flow::Record::Match::Timestamp>();
        }
        return timestamp;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Match::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(connection != nullptr)
    {
        _children["connection"] = connection;
    }

    if(datalink != nullptr)
    {
        _children["datalink"] = datalink;
    }

    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(metadata != nullptr)
    {
        _children["metadata"] = metadata;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(pfr != nullptr)
    {
        _children["pfr"] = pfr;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(routing != nullptr)
    {
        _children["routing"] = routing;
    }

    if(services != nullptr)
    {
        _children["services"] = services;
    }

    if(timestamp != nullptr)
    {
        _children["timestamp"] = timestamp;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "connection" || name == "datalink" || name == "flow" || name == "interface" || name == "ipv4" || name == "ipv6" || name == "metadata" || name == "mpls" || name == "network" || name == "pfr" || name == "policy" || name == "routing" || name == "services" || name == "timestamp" || name == "transport")
        return true;
    return false;
}

Native::Flow::Record::Match::Application::Application()
    :
    vendor{YType::empty, "vendor"},
    version{YType::empty, "version"}
        ,
    name(nullptr) // presence node
{

    yang_name = "application"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Application::~Application()
{
}

bool Native::Flow::Record::Match::Application::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| version.is_set
	|| (name !=  nullptr && name->has_data());
}

bool Native::Flow::Record::Match::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Flow::Record::Match::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Flow::Record::Match::Application::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name != nullptr)
    {
        _children["name"] = name;
    }

    return _children;
}

void Native::Flow::Record::Match::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vendor" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Match::Application::Name::Name()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "name"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Application::Name::~Name()
{
}

bool Native::Flow::Record::Match::Application::Name::has_data() const
{
    if (is_presence_container) return true;
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Match::Application::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Match::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Application::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Application::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Application::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Application::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Connection()
    :
    id{YType::empty, "id"},
    initiator{YType::empty, "initiator"},
    transaction_id{YType::empty, "transaction-id"}
        ,
    client(std::make_shared<Native::Flow::Record::Match::Connection::Client>())
    , server(std::make_shared<Native::Flow::Record::Match::Connection::Server>())
{
    client->parent = this;
    server->parent = this;

    yang_name = "connection"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::~Connection()
{
}

bool Native::Flow::Record::Match::Connection::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| initiator.is_set
	|| transaction_id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Flow::Record::Match::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(initiator.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Flow::Record::Match::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (initiator.is_set || is_set(initiator.yfilter)) leaf_name_data.push_back(initiator.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Flow::Record::Match::Connection::Client>();
        }
        return client;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Flow::Record::Match::Connection::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Flow::Record::Match::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiator")
    {
        initiator = value;
        initiator.value_namespace = name_space;
        initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "initiator")
    {
        initiator.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server" || name == "id" || name == "initiator" || name == "transaction-id")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Client::Client()
    :
    ipv4(std::make_shared<Native::Flow::Record::Match::Connection::Client::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Match::Connection::Client::Ipv6>())
    , transport(std::make_shared<Native::Flow::Record::Match::Connection::Client::Transport>())
{
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "client"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Client::~Client()
{
}

bool Native::Flow::Record::Match::Connection::Client::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Match::Connection::Client::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Match::Connection::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Connection::Client::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Connection::Client::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Match::Connection::Client::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Match::Connection::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Connection::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Connection::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "transport")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Client::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Client::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Connection::Client::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Match::Connection::Client::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Match::Connection::Client::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Client::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Client::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Client::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Connection::Client::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Connection::Client::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Connection::Client::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Client::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Client::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Connection::Client::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Match::Connection::Client::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Match::Connection::Client::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Client::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Client::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Client::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Connection::Client::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Connection::Client::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Connection::Client::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Client::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Client::Transport::~Transport()
{
}

bool Native::Flow::Record::Match::Connection::Client::Transport::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Native::Flow::Record::Match::Connection::Client::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Match::Connection::Client::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Client::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Client::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Client::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Connection::Client::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Connection::Client::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Connection::Client::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Server::Server()
    :
    ipv4(std::make_shared<Native::Flow::Record::Match::Connection::Server::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Match::Connection::Server::Ipv6>())
    , transport(std::make_shared<Native::Flow::Record::Match::Connection::Server::Transport>())
{
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "server"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Server::~Server()
{
}

bool Native::Flow::Record::Match::Connection::Server::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Match::Connection::Server::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Match::Connection::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Connection::Server::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Connection::Server::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Match::Connection::Server::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Match::Connection::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Connection::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Connection::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "transport")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Server::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Server::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Connection::Server::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Match::Connection::Server::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Match::Connection::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Server::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Connection::Server::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Connection::Server::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Connection::Server::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Server::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Server::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Connection::Server::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Match::Connection::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Match::Connection::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Connection::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Connection::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Connection::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Connection::Server::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Connection::Server::Transport::~Transport()
{
}

bool Native::Flow::Record::Match::Connection::Server::Transport::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Native::Flow::Record::Match::Connection::Server::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Match::Connection::Server::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Connection::Server::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Connection::Server::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Connection::Server::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Connection::Server::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Connection::Server::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Connection::Server::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Datalink()
    :
    destination_vlan_id{YType::empty, "destination-vlan-id"},
    ethertype{YType::empty, "ethertype"},
    vlan{YType::enumeration, "vlan"},
    source_vlan_id{YType::empty, "source-vlan-id"}
        ,
    dot1q(std::make_shared<Native::Flow::Record::Match::Datalink::Dot1q>())
    , mac(std::make_shared<Native::Flow::Record::Match::Datalink::Mac>())
{
    dot1q->parent = this;
    mac->parent = this;

    yang_name = "datalink"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::~Datalink()
{
}

bool Native::Flow::Record::Match::Datalink::has_data() const
{
    if (is_presence_container) return true;
    return destination_vlan_id.is_set
	|| ethertype.is_set
	|| vlan.is_set
	|| source_vlan_id.is_set
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Flow::Record::Match::Datalink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_vlan_id.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(source_vlan_id.yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Flow::Record::Match::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datalink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_vlan_id.is_set || is_set(destination_vlan_id.yfilter)) leaf_name_data.push_back(destination_vlan_id.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (source_vlan_id.is_set || is_set(source_vlan_id.yfilter)) leaf_name_data.push_back(source_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Flow::Record::Match::Datalink::Dot1q>();
        }
        return dot1q;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Flow::Record::Match::Datalink::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Flow::Record::Match::Datalink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-vlan-id")
    {
        destination_vlan_id = value;
        destination_vlan_id.value_namespace = name_space;
        destination_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vlan-id")
    {
        source_vlan_id = value;
        source_vlan_id.value_namespace = name_space;
        source_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Datalink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-vlan-id")
    {
        destination_vlan_id.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "source-vlan-id")
    {
        source_vlan_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Datalink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mac" || name == "destination-vlan-id" || name == "ethertype" || name == "vlan" || name == "source-vlan-id")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Dot1q::Dot1q()
    :
    priority{YType::empty, "priority"}
        ,
    vlan(std::make_shared<Native::Flow::Record::Match::Datalink::Dot1q::Vlan>())
{
    vlan->parent = this;

    yang_name = "dot1q"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::Dot1q::~Dot1q()
{
}

bool Native::Flow::Record::Match::Datalink::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Flow::Record::Match::Datalink::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Flow::Record::Match::Datalink::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Flow::Record::Match::Datalink::Dot1q::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Flow::Record::Match::Datalink::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Datalink::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Datalink::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "priority")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Dot1q::Vlan::Vlan()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vlan"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::Dot1q::Vlan::~Vlan()
{
}

bool Native::Flow::Record::Match::Datalink::Dot1q::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Match::Datalink::Dot1q::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Match::Datalink::Dot1q::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::Dot1q::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::Dot1q::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::Dot1q::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Datalink::Dot1q::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Datalink::Dot1q::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Datalink::Dot1q::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Mac::Mac()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Destination>())
    , source(std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "mac"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::Mac::~Mac()
{
}

bool Native::Flow::Record::Match::Datalink::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Match::Datalink::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Match::Datalink::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Match::Datalink::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Datalink::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Datalink::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Mac::Destination::Destination()
    :
    address(std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Destination::Address>())
{
    address->parent = this;

    yang_name = "destination"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::Mac::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Datalink::Mac::Destination::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Match::Datalink::Mac::Destination::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Match::Datalink::Mac::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::Mac::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::Mac::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Destination::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::Mac::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Flow::Record::Match::Datalink::Mac::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Datalink::Mac::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Datalink::Mac::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Mac::Destination::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "address"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::Mac::Destination::Address::~Address()
{
}

bool Native::Flow::Record::Match::Datalink::Mac::Destination::Address::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Match::Datalink::Mac::Destination::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Match::Datalink::Mac::Destination::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::Mac::Destination::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::Mac::Destination::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::Mac::Destination::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Datalink::Mac::Destination::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Datalink::Mac::Destination::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Datalink::Mac::Destination::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Mac::Source::Source()
    :
    address(std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Source::Address>())
{
    address->parent = this;

    yang_name = "source"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::Mac::Source::~Source()
{
}

bool Native::Flow::Record::Match::Datalink::Mac::Source::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Match::Datalink::Mac::Source::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Match::Datalink::Mac::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::Mac::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::Mac::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Match::Datalink::Mac::Source::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::Mac::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Flow::Record::Match::Datalink::Mac::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Datalink::Mac::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Datalink::Mac::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Datalink::Mac::Source::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "address"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Datalink::Mac::Source::Address::~Address()
{
}

bool Native::Flow::Record::Match::Datalink::Mac::Source::Address::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Match::Datalink::Mac::Source::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Match::Datalink::Mac::Source::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Datalink::Mac::Source::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Datalink::Mac::Source::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Datalink::Mac::Source::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Datalink::Mac::Source::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Datalink::Mac::Source::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Datalink::Mac::Source::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Match::Flow_::Flow_()
    :
    direction{YType::empty, "direction"},
    sampler{YType::empty, "sampler"}
        ,
    cts(std::make_shared<Native::Flow::Record::Match::Flow_::Cts>())
    , observation(std::make_shared<Native::Flow::Record::Match::Flow_::Observation>())
{
    cts->parent = this;
    observation->parent = this;

    yang_name = "flow"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Match::Flow_::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| sampler.is_set
	|| (cts !=  nullptr && cts->has_data())
	|| (observation !=  nullptr && observation->has_data());
}

bool Native::Flow::Record::Match::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(sampler.yfilter)
	|| (cts !=  nullptr && cts->has_operation())
	|| (observation !=  nullptr && observation->has_operation());
}

std::string Native::Flow::Record::Match::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (sampler.is_set || is_set(sampler.yfilter)) leaf_name_data.push_back(sampler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Flow::Record::Match::Flow_::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "observation")
    {
        if(observation == nullptr)
        {
            observation = std::make_shared<Native::Flow::Record::Match::Flow_::Observation>();
        }
        return observation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cts != nullptr)
    {
        _children["cts"] = cts;
    }

    if(observation != nullptr)
    {
        _children["observation"] = observation;
    }

    return _children;
}

void Native::Flow::Record::Match::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler")
    {
        sampler = value;
        sampler.value_namespace = name_space;
        sampler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "sampler")
    {
        sampler.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts" || name == "observation" || name == "direction" || name == "sampler")
        return true;
    return false;
}

Native::Flow::Record::Match::Flow_::Cts::Cts()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Flow_::Cts::Destination>())
    , source(std::make_shared<Native::Flow::Record::Match::Flow_::Cts::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "cts"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Flow_::Cts::~Cts()
{
}

bool Native::Flow::Record::Match::Flow_::Cts::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Match::Flow_::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Match::Flow_::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Flow_::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Flow_::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Flow_::Cts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Flow_::Cts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Flow_::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Match::Flow_::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Flow_::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Flow_::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Match::Flow_::Cts::Destination::Destination()
    :
    group_tag{YType::empty, "group-tag"}
{

    yang_name = "destination"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Flow_::Cts::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Flow_::Cts::Destination::has_data() const
{
    if (is_presence_container) return true;
    return group_tag.is_set;
}

bool Native::Flow::Record::Match::Flow_::Cts::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_tag.yfilter);
}

std::string Native::Flow::Record::Match::Flow_::Cts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Flow_::Cts::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_tag.is_set || is_set(group_tag.yfilter)) leaf_name_data.push_back(group_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Flow_::Cts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Flow_::Cts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Flow_::Cts::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
        group_tag.value_namespace = name_space;
        group_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Flow_::Cts::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-tag")
    {
        group_tag.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Flow_::Cts::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-tag")
        return true;
    return false;
}

Native::Flow::Record::Match::Flow_::Cts::Source::Source()
    :
    group_tag{YType::empty, "group-tag"}
{

    yang_name = "source"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Flow_::Cts::Source::~Source()
{
}

bool Native::Flow::Record::Match::Flow_::Cts::Source::has_data() const
{
    if (is_presence_container) return true;
    return group_tag.is_set;
}

bool Native::Flow::Record::Match::Flow_::Cts::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_tag.yfilter);
}

std::string Native::Flow::Record::Match::Flow_::Cts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Flow_::Cts::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_tag.is_set || is_set(group_tag.yfilter)) leaf_name_data.push_back(group_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Flow_::Cts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Flow_::Cts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Flow_::Cts::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
        group_tag.value_namespace = name_space;
        group_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Flow_::Cts::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-tag")
    {
        group_tag.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Flow_::Cts::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-tag")
        return true;
    return false;
}

Native::Flow::Record::Match::Flow_::Observation::Observation()
    :
    point{YType::empty, "point"}
{

    yang_name = "observation"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Flow_::Observation::~Observation()
{
}

bool Native::Flow::Record::Match::Flow_::Observation::has_data() const
{
    if (is_presence_container) return true;
    return point.is_set;
}

bool Native::Flow::Record::Match::Flow_::Observation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(point.yfilter);
}

std::string Native::Flow::Record::Match::Flow_::Observation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "observation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Flow_::Observation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (point.is_set || is_set(point.yfilter)) leaf_name_data.push_back(point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Flow_::Observation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Flow_::Observation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Flow_::Observation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "point")
    {
        point = value;
        point.value_namespace = name_space;
        point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Flow_::Observation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "point")
    {
        point.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Flow_::Observation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point")
        return true;
    return false;
}

Native::Flow::Record::Match::Interface::Interface()
    :
    input(nullptr) // presence node
    , output(nullptr) // presence node
{

    yang_name = "interface"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Interface::~Interface()
{
}

bool Native::Flow::Record::Match::Interface::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Flow::Record::Match::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Flow::Record::Match::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Flow::Record::Match::Interface::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Flow::Record::Match::Interface::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Flow::Record::Match::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Match::Interface::Input::Input()
    :
    snmp{YType::empty, "snmp"}
{

    yang_name = "input"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Interface::Input::~Input()
{
}

bool Native::Flow::Record::Match::Interface::Input::has_data() const
{
    if (is_presence_container) return true;
    return snmp.is_set;
}

bool Native::Flow::Record::Match::Interface::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter);
}

std::string Native::Flow::Record::Match::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Interface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Interface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Interface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Interface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Interface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Flow::Record::Match::Interface::Output::Output()
    :
    snmp{YType::empty, "snmp"}
{

    yang_name = "output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Interface::Output::~Output()
{
}

bool Native::Flow::Record::Match::Interface::Output::has_data() const
{
    if (is_presence_container) return true;
    return snmp.is_set;
}

bool Native::Flow::Record::Match::Interface::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter);
}

std::string Native::Flow::Record::Match::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Interface::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Interface::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Interface::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Interface::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Ipv4()
    :
    dscp{YType::empty, "dscp"},
    header_length{YType::empty, "header-length"},
    id{YType::empty, "id"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    tos{YType::empty, "tos"},
    version{YType::empty, "version"}
        ,
    destination(std::make_shared<Native::Flow::Record::Match::Ipv4::Destination>())
    , fragmentation(std::make_shared<Native::Flow::Record::Match::Ipv4::Fragmentation>())
    , length(std::make_shared<Native::Flow::Record::Match::Ipv4::Length>())
    , option(std::make_shared<Native::Flow::Record::Match::Ipv4::Option>())
    , section(std::make_shared<Native::Flow::Record::Match::Ipv4::Section>())
    , source(std::make_shared<Native::Flow::Record::Match::Ipv4::Source>())
    , total_length(nullptr) // presence node
    , ttl(nullptr) // presence node
{
    destination->parent = this;
    fragmentation->parent = this;
    length->parent = this;
    option->parent = this;
    section->parent = this;
    source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| header_length.is_set
	|| id.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| tos.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (total_length !=  nullptr && total_length->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Flow::Record::Match::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(header_length.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (total_length !=  nullptr && total_length->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.yfilter)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Ipv4::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Match::Ipv4::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Match::Ipv4::Length>();
        }
        return length;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Match::Ipv4::Option>();
        }
        return option;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Match::Ipv4::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Ipv4::Source>();
        }
        return source;
    }

    if(child_yang_name == "total-length")
    {
        if(total_length == nullptr)
        {
            total_length = std::make_shared<Native::Flow::Record::Match::Ipv4::TotalLength>();
        }
        return total_length;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Flow::Record::Match::Ipv4::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(fragmentation != nullptr)
    {
        _children["fragmentation"] = fragmentation;
    }

    if(length != nullptr)
    {
        _children["length"] = length;
    }

    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(section != nullptr)
    {
        _children["section"] = section;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(total_length != nullptr)
    {
        _children["total-length"] = total_length;
    }

    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-length")
    {
        header_length = value;
        header_length.value_namespace = name_space;
        header_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "header-length")
    {
        header_length.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "fragmentation" || name == "length" || name == "option" || name == "section" || name == "source" || name == "total-length" || name == "ttl" || name == "dscp" || name == "header-length" || name == "id" || name == "precedence" || name == "protocol" || name == "tos" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Destination::Destination()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Ipv4::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv4::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv4::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv4::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv4::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv4::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv4::Destination::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Destination::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Destination::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Destination::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Destination::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Destination::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv4::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv4::Destination::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    offset{YType::empty, "offset"}
{

    yang_name = "fragmentation"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Match::Ipv4::Fragmentation::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "offset")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
        ,
    total(nullptr) // presence node
{

    yang_name = "length"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Length::~Length()
{
}

bool Native::Flow::Record::Match::Ipv4::Length::has_data() const
{
    if (is_presence_container) return true;
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Match::Ipv4::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.yfilter)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Match::Ipv4::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv4::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header")
    {
        header = value;
        header.value_namespace = name_space;
        header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header")
    {
        header.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv4::Length::Total::~Total()
{
}

bool Native::Flow::Record::Match::Ipv4::Length::Total::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Length::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Length::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Length::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Length::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Length::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Option::Option()
    :
    map{YType::empty, "map"}
{

    yang_name = "option"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Option::~Option()
{
}

bool Native::Flow::Record::Match::Ipv4::Option::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Header>())
    , payload(std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Payload>())
{
    header->parent = this;
    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Section::~Section()
{
}

bool Native::Flow::Record::Match::Ipv4::Section::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Match::Ipv4::Section::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Match::Ipv4::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(payload != nullptr)
    {
        _children["payload"] = payload;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv4::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Ipv4::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Ipv4::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{

    yang_name = "header"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Section::Header::~Header()
{
}

bool Native::Flow::Record::Match::Ipv4::Section::Header::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Section::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Section::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Section::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Section::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Section::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Match::Ipv4::Section::Payload::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Source::Source()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv4::Source::~Source()
{
}

bool Native::Flow::Record::Match::Ipv4::Source::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv4::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv4::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv4::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv4::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv4::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv4::Source::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv4::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv4::Source::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::TotalLength::TotalLength()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total-length"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv4::TotalLength::~TotalLength()
{
}

bool Native::Flow::Record::Match::Ipv4::TotalLength::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv4::TotalLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::TotalLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::TotalLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::TotalLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::TotalLength::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::TotalLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::TotalLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::TotalLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv4::Ttl::Ttl()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "ttl"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv4::Ttl::~Ttl()
{
}

bool Native::Flow::Record::Match::Ipv4::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv4::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv4::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv4::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv4::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv4::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv4::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv4::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv4::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Ipv6()
    :
    dscp{YType::empty, "dscp"},
    flow_label{YType::empty, "flow-label"},
    next_header{YType::empty, "next-header"},
    payload_length{YType::empty, "payload-length"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    traffic_class{YType::empty, "traffic-class"},
    version{YType::empty, "version"}
        ,
    destination(std::make_shared<Native::Flow::Record::Match::Ipv6::Destination>())
    , extension(std::make_shared<Native::Flow::Record::Match::Ipv6::Extension>())
    , fragmentation(std::make_shared<Native::Flow::Record::Match::Ipv6::Fragmentation>())
    , hop_limit(nullptr) // presence node
    , length(std::make_shared<Native::Flow::Record::Match::Ipv6::Length>())
    , section(std::make_shared<Native::Flow::Record::Match::Ipv6::Section>())
    , source(std::make_shared<Native::Flow::Record::Match::Ipv6::Source>())
{
    destination->parent = this;
    extension->parent = this;
    fragmentation->parent = this;
    length->parent = this;
    section->parent = this;
    source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| flow_label.is_set
	|| next_header.is_set
	|| payload_length.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| traffic_class.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (extension !=  nullptr && extension->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (hop_limit !=  nullptr && hop_limit->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Match::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(next_header.yfilter)
	|| ydk::is_set(payload_length.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (extension !=  nullptr && extension->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (hop_limit !=  nullptr && hop_limit->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (next_header.is_set || is_set(next_header.yfilter)) leaf_name_data.push_back(next_header.get_name_leafdata());
    if (payload_length.is_set || is_set(payload_length.yfilter)) leaf_name_data.push_back(payload_length.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Ipv6::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "extension")
    {
        if(extension == nullptr)
        {
            extension = std::make_shared<Native::Flow::Record::Match::Ipv6::Extension>();
        }
        return extension;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Match::Ipv6::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "hop-limit")
    {
        if(hop_limit == nullptr)
        {
            hop_limit = std::make_shared<Native::Flow::Record::Match::Ipv6::HopLimit>();
        }
        return hop_limit;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Match::Ipv6::Length>();
        }
        return length;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Match::Ipv6::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Ipv6::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(extension != nullptr)
    {
        _children["extension"] = extension;
    }

    if(fragmentation != nullptr)
    {
        _children["fragmentation"] = fragmentation;
    }

    if(hop_limit != nullptr)
    {
        _children["hop-limit"] = hop_limit;
    }

    if(length != nullptr)
    {
        _children["length"] = length;
    }

    if(section != nullptr)
    {
        _children["section"] = section;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-header")
    {
        next_header = value;
        next_header.value_namespace = name_space;
        next_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-length")
    {
        payload_length = value;
        payload_length.value_namespace = name_space;
        payload_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "next-header")
    {
        next_header.yfilter = yfilter;
    }
    if(value_path == "payload-length")
    {
        payload_length.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "extension" || name == "fragmentation" || name == "hop-limit" || name == "length" || name == "section" || name == "source" || name == "dscp" || name == "flow-label" || name == "next-header" || name == "payload-length" || name == "precedence" || name == "protocol" || name == "traffic-class" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Destination::Destination()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv6::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv6::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv6::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv6::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Destination::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Destination::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Destination::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Destination::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv6::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Extension::Extension()
    :
    map{YType::empty, "map"}
{

    yang_name = "extension"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Extension::~Extension()
{
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Extension::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Extension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Extension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Extension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    id{YType::empty, "id"},
    offset{YType::empty, "offset"}
{

    yang_name = "fragmentation"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| id.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "id" || name == "offset")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::HopLimit::HopLimit()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "hop-limit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv6::HopLimit::~HopLimit()
{
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::HopLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::HopLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::HopLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::HopLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
        ,
    total(nullptr) // presence node
{

    yang_name = "length"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Length::~Length()
{
}

bool Native::Flow::Record::Match::Ipv6::Length::has_data() const
{
    if (is_presence_container) return true;
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.yfilter)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Match::Ipv6::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv6::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header")
    {
        header = value;
        header.value_namespace = name_space;
        header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header")
    {
        header.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv6::Length::Total::~Total()
{
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Length::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Length::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Length::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Length::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Header>())
    , payload(std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Payload>())
{
    header->parent = this;
    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Section::~Section()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Section::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Match::Ipv6::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(payload != nullptr)
    {
        _children["payload"] = payload;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv6::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Ipv6::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Ipv6::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{

    yang_name = "header"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Section::Header::~Header()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Section::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Section::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Section::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Section::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Source::Source()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Ipv6::Source::~Source()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Ipv6::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Ipv6::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Ipv6::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Ipv6::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Match::Ipv6::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv6::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Ipv6::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Ipv6::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Match::Ipv6::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Ipv6::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Ipv6::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Ipv6::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Ipv6::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Ipv6::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Ipv6::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Match::Metadata::Metadata()
    :
    global_session_id{YType::empty, "global-session-id"},
    multi_party_session_id{YType::empty, "multi-party-session-id"}
{

    yang_name = "metadata"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Metadata::~Metadata()
{
}

bool Native::Flow::Record::Match::Metadata::has_data() const
{
    if (is_presence_container) return true;
    return global_session_id.is_set
	|| multi_party_session_id.is_set;
}

bool Native::Flow::Record::Match::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_session_id.yfilter)
	|| ydk::is_set(multi_party_session_id.yfilter);
}

std::string Native::Flow::Record::Match::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Metadata::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_session_id.is_set || is_set(global_session_id.yfilter)) leaf_name_data.push_back(global_session_id.get_name_leafdata());
    if (multi_party_session_id.is_set || is_set(multi_party_session_id.yfilter)) leaf_name_data.push_back(multi_party_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-session-id")
    {
        global_session_id = value;
        global_session_id.value_namespace = name_space;
        global_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id = value;
        multi_party_session_id.value_namespace = name_space;
        multi_party_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-session-id")
    {
        global_session_id.yfilter = yfilter;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-session-id" || name == "multi-party-session-id")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Mpls()
    :
    label(std::make_shared<Native::Flow::Record::Match::Mpls::Label>())
{
    label->parent = this;

    yang_name = "mpls"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::~Mpls()
{
}

bool Native::Flow::Record::Match::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (label !=  nullptr && label->has_data());
}

bool Native::Flow::Record::Match::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation());
}

std::string Native::Flow::Record::Match::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Match::Mpls::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label != nullptr)
    {
        _children["label"] = label;
    }

    return _children;
}

void Native::Flow::Record::Match::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Label()
    :
    one(std::make_shared<Native::Flow::Record::Match::Mpls::Label::One>())
    , two(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Two>())
    , three(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Three>())
    , four(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Four>())
    , five(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Five>())
    , six(std::make_shared<Native::Flow::Record::Match::Mpls::Label::Six>())
{
    one->parent = this;
    two->parent = this;
    three->parent = this;
    four->parent = this;
    five->parent = this;
    six->parent = this;

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::Label::~Label()
{
}

bool Native::Flow::Record::Match::Mpls::Label::has_data() const
{
    if (is_presence_container) return true;
    return (one !=  nullptr && one->has_data())
	|| (two !=  nullptr && two->has_data())
	|| (three !=  nullptr && three->has_data())
	|| (four !=  nullptr && four->has_data())
	|| (five !=  nullptr && five->has_data())
	|| (six !=  nullptr && six->has_data());
}

bool Native::Flow::Record::Match::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (two !=  nullptr && two->has_operation())
	|| (three !=  nullptr && three->has_operation())
	|| (four !=  nullptr && four->has_operation())
	|| (five !=  nullptr && five->has_operation())
	|| (six !=  nullptr && six->has_operation());
}

std::string Native::Flow::Record::Match::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Native::Flow::Record::Match::Mpls::Label::One>();
        }
        return one;
    }

    if(child_yang_name == "two")
    {
        if(two == nullptr)
        {
            two = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Two>();
        }
        return two;
    }

    if(child_yang_name == "three")
    {
        if(three == nullptr)
        {
            three = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Three>();
        }
        return three;
    }

    if(child_yang_name == "four")
    {
        if(four == nullptr)
        {
            four = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Four>();
        }
        return four;
    }

    if(child_yang_name == "five")
    {
        if(five == nullptr)
        {
            five = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Five>();
        }
        return five;
    }

    if(child_yang_name == "six")
    {
        if(six == nullptr)
        {
            six = std::make_shared<Native::Flow::Record::Match::Mpls::Label::Six>();
        }
        return six;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(one != nullptr)
    {
        _children["one"] = one;
    }

    if(two != nullptr)
    {
        _children["two"] = two;
    }

    if(three != nullptr)
    {
        _children["three"] = three;
    }

    if(four != nullptr)
    {
        _children["four"] = four;
    }

    if(five != nullptr)
    {
        _children["five"] = five;
    }

    if(six != nullptr)
    {
        _children["six"] = six;
    }

    return _children;
}

void Native::Flow::Record::Match::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "two" || name == "three" || name == "four" || name == "five" || name == "six")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::One::One()
    :
    details{YType::empty, "details"},
    exp{YType::empty, "exp"},
    ttl{YType::empty, "ttl"},
    type{YType::empty, "type"}
{

    yang_name = "one"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::Label::One::~One()
{
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set
	|| exp.is_set
	|| ttl.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());
    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::Label::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::Label::One::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Mpls::Label::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::One::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "exp" || name == "ttl" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Two::Two()
    :
    details{YType::empty, "details"}
{

    yang_name = "two"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::Label::Two::~Two()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Two::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Two::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::Label::Two::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::Label::Two::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Mpls::Label::Two::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Two::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Two::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Three::Three()
    :
    details{YType::empty, "details"}
{

    yang_name = "three"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::Label::Three::~Three()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Three::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Three::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::Label::Three::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::Label::Three::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Mpls::Label::Three::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Three::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Three::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Four::Four()
    :
    details{YType::empty, "details"}
{

    yang_name = "four"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::Label::Four::~Four()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Four::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Four::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::Label::Four::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::Label::Four::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Mpls::Label::Four::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Four::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Four::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Five::Five()
    :
    details{YType::empty, "details"}
{

    yang_name = "five"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::Label::Five::~Five()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Five::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "five";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Five::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::Label::Five::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::Label::Five::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Mpls::Label::Five::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Five::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Five::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Mpls::Label::Six::Six()
    :
    details{YType::empty, "details"}
{

    yang_name = "six"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Mpls::Label::Six::~Six()
{
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Match::Mpls::Label::Six::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "six";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Mpls::Label::Six::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Mpls::Label::Six::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Mpls::Label::Six::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Mpls::Label::Six::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Mpls::Label::Six::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Mpls::Label::Six::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Match::Network::Network()
    :
    delay(std::make_shared<Native::Flow::Record::Match::Network::Delay>())
{
    delay->parent = this;

    yang_name = "network"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Network::~Network()
{
}

bool Native::Flow::Record::Match::Network::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Flow::Record::Match::Network::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Flow::Record::Match::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Match::Network::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Flow::Record::Match::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Flow::Record::Match::Network::Delay::Delay()
    :
    sample{YType::empty, "sample"},
    sum{YType::empty, "sum"}
{

    yang_name = "delay"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Network::Delay::~Delay()
{
}

bool Native::Flow::Record::Match::Network::Delay::has_data() const
{
    if (is_presence_container) return true;
    return sample.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Match::Network::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Match::Network::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Network::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample.is_set || is_set(sample.yfilter)) leaf_name_data.push_back(sample.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Network::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Network::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Network::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample")
    {
        sample = value;
        sample.value_namespace = name_space;
        sample.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Network::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample")
    {
        sample.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Network::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Pfr()
    :
    label(std::make_shared<Native::Flow::Record::Match::Pfr::Label>())
    , one_way_delay(std::make_shared<Native::Flow::Record::Match::Pfr::OneWayDelay>())
    , service(std::make_shared<Native::Flow::Record::Match::Pfr::Service>())
    , site(std::make_shared<Native::Flow::Record::Match::Pfr::Site>())
{
    label->parent = this;
    one_way_delay->parent = this;
    service->parent = this;
    site->parent = this;

    yang_name = "pfr"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::~Pfr()
{
}

bool Native::Flow::Record::Match::Pfr::has_data() const
{
    if (is_presence_container) return true;
    return (label !=  nullptr && label->has_data())
	|| (one_way_delay !=  nullptr && one_way_delay->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (site !=  nullptr && site->has_data());
}

bool Native::Flow::Record::Match::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation())
	|| (one_way_delay !=  nullptr && one_way_delay->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Match::Pfr::Label>();
        }
        return label;
    }

    if(child_yang_name == "one-way-delay")
    {
        if(one_way_delay == nullptr)
        {
            one_way_delay = std::make_shared<Native::Flow::Record::Match::Pfr::OneWayDelay>();
        }
        return one_way_delay;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Flow::Record::Match::Pfr::Service>();
        }
        return service;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Flow::Record::Match::Pfr::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label != nullptr)
    {
        _children["label"] = label;
    }

    if(one_way_delay != nullptr)
    {
        _children["one-way-delay"] = one_way_delay;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(site != nullptr)
    {
        _children["site"] = site;
    }

    return _children;
}

void Native::Flow::Record::Match::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "one-way-delay" || name == "service" || name == "site")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Label::Label()
    :
    identifier{YType::empty, "identifier"}
{

    yang_name = "label"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Label::~Label()
{
}

bool Native::Flow::Record::Match::Pfr::Label::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set;
}

bool Native::Flow::Record::Match::Pfr::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Pfr::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::OneWayDelay::OneWayDelay()
    :
    samples{YType::empty, "samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "one-way-delay"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::OneWayDelay::~OneWayDelay()
{
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_data() const
{
    if (is_presence_container) return true;
    return samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::OneWayDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-way-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::OneWayDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (samples.is_set || is_set(samples.yfilter)) leaf_name_data.push_back(samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::OneWayDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::OneWayDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Pfr::OneWayDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "samples")
    {
        samples = value;
        samples.value_namespace = name_space;
        samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::OneWayDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "samples")
    {
        samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::OneWayDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Service::Service()
    :
    provider{YType::empty, "provider"},
    tag{YType::empty, "tag"},
    identifier{YType::empty, "identifier"}
{

    yang_name = "service"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Service::~Service()
{
}

bool Native::Flow::Record::Match::Pfr::Service::has_data() const
{
    if (is_presence_container) return true;
    return provider.is_set
	|| tag.is_set
	|| identifier.is_set;
}

bool Native::Flow::Record::Match::Pfr::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(provider.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(identifier.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (provider.is_set || is_set(provider.yfilter)) leaf_name_data.push_back(provider.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Pfr::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "provider")
    {
        provider = value;
        provider.value_namespace = name_space;
        provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "provider")
    {
        provider.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provider" || name == "tag" || name == "identifier")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Site()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination>())
    , source(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "site"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::~Site()
{
}

bool Native::Flow::Record::Match::Pfr::Site::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Destination()
    :
    id(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Id>())
    , prefix(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "destination"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::Site::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Destination::Id::~Id()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
        ,
    mask(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Source()
    :
    id(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Id>())
    , prefix(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "source"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Source::~Source()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Pfr::Site::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Source::Id::~Id()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Source::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Source::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
        ,
    mask(std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Policy()
    :
    performance_monitor(std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor>())
    , qos(std::make_shared<Native::Flow::Record::Match::Policy::Qos>())
{
    performance_monitor->parent = this;
    qos->parent = this;

    yang_name = "policy"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Policy::~Policy()
{
}

bool Native::Flow::Record::Match::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Flow::Record::Match::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Flow::Record::Match::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Flow::Record::Match::Policy::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(performance_monitor != nullptr)
    {
        _children["performance-monitor"] = performance_monitor;
    }

    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
}

void Native::Flow::Record::Match::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "performance-monitor" || name == "qos")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::PerformanceMonitor()
    :
    classification(std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification>())
{
    classification->parent = this;

    yang_name = "performance-monitor"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return (classification !=  nullptr && classification->has_data());
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation());
}

std::string Native::Flow::Record::Match::Policy::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Policy::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification>();
        }
        return classification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Policy::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classification != nullptr)
    {
        _children["classification"] = classification;
    }

    return _children;
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "performance-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::~Classification()
{
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_data() const
{
    if (is_presence_container) return true;
    return hierarchy.is_set;
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Qos::Qos()
    :
    classification(std::make_shared<Native::Flow::Record::Match::Policy::Qos::Classification>())
    , queue(std::make_shared<Native::Flow::Record::Match::Policy::Qos::Queue>())
{
    classification->parent = this;
    queue->parent = this;

    yang_name = "qos"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Policy::Qos::~Qos()
{
}

bool Native::Flow::Record::Match::Policy::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (classification !=  nullptr && classification->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Flow::Record::Match::Policy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation())
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Flow::Record::Match::Policy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Policy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Match::Policy::Qos::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Flow::Record::Match::Policy::Qos::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Policy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classification != nullptr)
    {
        _children["classification"] = classification;
    }

    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    return _children;
}

void Native::Flow::Record::Match::Policy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Policy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Policy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification" || name == "queue")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Qos::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Policy::Qos::Classification::~Classification()
{
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_data() const
{
    if (is_presence_container) return true;
    return hierarchy.is_set;
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Match::Policy::Qos::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::Qos::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Policy::Qos::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Policy::Qos::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Policy::Qos::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Policy::Qos::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Policy::Qos::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Match::Policy::Qos::Queue::Queue()
    :
    drops{YType::empty, "drops"},
    index_{YType::empty, "index"}
{

    yang_name = "queue"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Policy::Qos::Queue::~Queue()
{
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_data() const
{
    if (is_presence_container) return true;
    return drops.is_set
	|| index_.is_set;
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Native::Flow::Record::Match::Policy::Qos::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Policy::Qos::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Policy::Qos::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Policy::Qos::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Policy::Qos::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Policy::Qos::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Policy::Qos::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "index")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Routing()
    :
    is_multicast{YType::empty, "is-multicast"}
        ,
    destination(std::make_shared<Native::Flow::Record::Match::Routing::Destination>())
    , forwarding_status(nullptr) // presence node
    , next_hop(std::make_shared<Native::Flow::Record::Match::Routing::NextHop>())
    , pw(std::make_shared<Native::Flow::Record::Match::Routing::Pw>())
    , source(std::make_shared<Native::Flow::Record::Match::Routing::Source>())
    , vrf(std::make_shared<Native::Flow::Record::Match::Routing::Vrf>())
{
    destination->parent = this;
    next_hop->parent = this;
    pw->parent = this;
    source->parent = this;
    vrf->parent = this;

    yang_name = "routing"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::~Routing()
{
}

bool Native::Flow::Record::Match::Routing::has_data() const
{
    if (is_presence_container) return true;
    return is_multicast.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (forwarding_status !=  nullptr && forwarding_status->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Flow::Record::Match::Routing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_multicast.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (forwarding_status !=  nullptr && forwarding_status->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Flow::Record::Match::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast.is_set || is_set(is_multicast.yfilter)) leaf_name_data.push_back(is_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Routing::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "forwarding-status")
    {
        if(forwarding_status == nullptr)
        {
            forwarding_status = std::make_shared<Native::Flow::Record::Match::Routing::ForwardingStatus>();
        }
        return forwarding_status;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Flow::Record::Match::Routing::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::Flow::Record::Match::Routing::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Match::Routing::Source>();
        }
        return source;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Flow::Record::Match::Routing::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(forwarding_status != nullptr)
    {
        _children["forwarding-status"] = forwarding_status;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-multicast")
    {
        is_multicast = value;
        is_multicast.value_namespace = name_space;
        is_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-multicast")
    {
        is_multicast.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "forwarding-status" || name == "next-hop" || name == "pw" || name == "source" || name == "vrf" || name == "is-multicast")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Destination::Destination()
    :
    traffic_index{YType::empty, "traffic-index"}
        ,
    as(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Routing::Destination::has_data() const
{
    if (is_presence_container) return true;
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Match::Routing::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Match::Routing::Destination::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(as != nullptr)
    {
        _children["as"] = as;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Destination::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
        ,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Routing::Destination::As::~As()
{
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_data() const
{
    if (is_presence_container) return true;
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Destination::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Destination::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Destination::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Match::Routing::Destination::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Destination::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::Destination::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Destination::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Destination::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Destination::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Routing::Destination::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Destination::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Destination::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Destination::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Destination::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Routing::Destination::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Destination::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Destination::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::ForwardingStatus::ForwardingStatus()
    :
    reason{YType::empty, "reason"}
{

    yang_name = "forwarding-status"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Routing::ForwardingStatus::~ForwardingStatus()
{
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_data() const
{
    if (is_presence_container) return true;
    return reason.is_set;
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Native::Flow::Record::Match::Routing::ForwardingStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::ForwardingStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::ForwardingStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::ForwardingStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Routing::ForwardingStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::ForwardingStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::ForwardingStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::NextHop()
    :
    address(std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address>())
{
    address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::NextHop::~NextHop()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Match::Routing::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Match::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Routing::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Routing::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Address()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::NextHop::Address::~Address()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::NextHop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Routing::NextHop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::Ipv4()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return bgp.is_set;
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::Ipv6()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return bgp.is_set;
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Pw::Pw()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>())
{
    destination->parent = this;

    yang_name = "pw"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::Pw::~Pw()
{
}

bool Native::Flow::Record::Match::Routing::Pw::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data());
}

bool Native::Flow::Record::Match::Routing::Pw::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Routing::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Routing::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Pw::Destination::Destination()
    :
    address{YType::empty, "address"}
{

    yang_name = "destination"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::Pw::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Pw::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Pw::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Pw::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Pw::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Routing::Pw::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Pw::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::Source()
    :
    traffic_index{YType::empty, "traffic-index"}
        ,
    as(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::Source::~Source()
{
}

bool Native::Flow::Record::Match::Routing::Source::has_data() const
{
    if (is_presence_container) return true;
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Match::Routing::Source::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(as != nullptr)
    {
        _children["as"] = as;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
        ,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Routing::Source::As::~As()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::has_data() const
{
    if (is_presence_container) return true;
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Source::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Match::Routing::Source::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Source::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Flow::Record::Match::Routing::Source::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Routing::Source::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Source::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Source::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Source::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Routing::Source::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Vrf::Vrf()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vrf"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Routing::Vrf::~Vrf()
{
}

bool Native::Flow::Record::Match::Routing::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Match::Routing::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Routing::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Routing::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Routing::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Services()
    :
    waas(std::make_shared<Native::Flow::Record::Match::Services::Waas>())
{
    waas->parent = this;

    yang_name = "services"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Services::~Services()
{
}

bool Native::Flow::Record::Match::Services::has_data() const
{
    if (is_presence_container) return true;
    return (waas !=  nullptr && waas->has_data());
}

bool Native::Flow::Record::Match::Services::has_operation() const
{
    return is_set(yfilter)
	|| (waas !=  nullptr && waas->has_operation());
}

std::string Native::Flow::Record::Match::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        if(waas == nullptr)
        {
            waas = std::make_shared<Native::Flow::Record::Match::Services::Waas>();
        }
        return waas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(waas != nullptr)
    {
        _children["waas"] = waas;
    }

    return _children;
}

void Native::Flow::Record::Match::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Waas::Waas()
    :
    passthrough_reason{YType::empty, "passthrough-reason"}
        ,
    segment(nullptr) // presence node
{

    yang_name = "waas"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Services::Waas::~Waas()
{
}

bool Native::Flow::Record::Match::Services::Waas::has_data() const
{
    if (is_presence_container) return true;
    return passthrough_reason.is_set
	|| (segment !=  nullptr && segment->has_data());
}

bool Native::Flow::Record::Match::Services::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passthrough_reason.yfilter)
	|| (segment !=  nullptr && segment->has_operation());
}

std::string Native::Flow::Record::Match::Services::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passthrough_reason.is_set || is_set(passthrough_reason.yfilter)) leaf_name_data.push_back(passthrough_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Services::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<Native::Flow::Record::Match::Services::Waas::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Services::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment != nullptr)
    {
        _children["segment"] = segment;
    }

    return _children;
}

void Native::Flow::Record::Match::Services::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason = value;
        passthrough_reason.value_namespace = name_space;
        passthrough_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Services::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Services::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "passthrough-reason")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Waas::Segment::Segment()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "segment"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Services::Waas::Segment::~Segment()
{
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_data() const
{
    if (is_presence_container) return true;
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Match::Services::Waas::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::Waas::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Services::Waas::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Services::Waas::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Services::Waas::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Services::Waas::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Timestamp()
    :
    absolute(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>())
{
    absolute->parent = this;

    yang_name = "timestamp"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Timestamp::~Timestamp()
{
}

bool Native::Flow::Record::Match::Timestamp::has_data() const
{
    if (is_presence_container) return true;
    return (absolute !=  nullptr && absolute->has_data());
}

bool Native::Flow::Record::Match::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(absolute != nullptr)
    {
        _children["absolute"] = absolute;
    }

    return _children;
}

void Native::Flow::Record::Match::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Absolute::Absolute()
    :
    monitoring_interval(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>())
{
    monitoring_interval->parent = this;

    yang_name = "absolute"; yang_parent_name = "timestamp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Timestamp::Absolute::~Absolute()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring_interval !=  nullptr && monitoring_interval->has_data());
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring_interval !=  nullptr && monitoring_interval->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Timestamp::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring-interval")
    {
        if(monitoring_interval == nullptr)
        {
            monitoring_interval = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>();
        }
        return monitoring_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Timestamp::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitoring_interval != nullptr)
    {
        _children["monitoring-interval"] = monitoring_interval;
    }

    return _children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Timestamp::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring-interval")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::MonitoringInterval()
    :
    start{YType::empty, "start"}
{

    yang_name = "monitoring-interval"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::~MonitoringInterval()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set;
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter);
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Transport()
    :
    destination_port{YType::empty, "destination-port"},
    source_port{YType::empty, "source-port"}
        ,
    bytes(std::make_shared<Native::Flow::Record::Match::Transport::Bytes>())
    , rtp(std::make_shared<Native::Flow::Record::Match::Transport::Rtp>())
    , icmp(std::make_shared<Native::Flow::Record::Match::Transport::Icmp>())
    , igmp(std::make_shared<Native::Flow::Record::Match::Transport::Igmp>())
    , tcp(std::make_shared<Native::Flow::Record::Match::Transport::Tcp>())
    , udp(std::make_shared<Native::Flow::Record::Match::Transport::Udp>())
{
    bytes->parent = this;
    rtp->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Transport::~Transport()
{
}

bool Native::Flow::Record::Match::Transport::has_data() const
{
    if (is_presence_container) return true;
    return destination_port.is_set
	|| source_port.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Flow::Record::Match::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Flow::Record::Match::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Match::Transport::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Flow::Record::Match::Transport::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Flow::Record::Match::Transport::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Flow::Record::Match::Transport::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Flow::Record::Match::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Flow::Record::Match::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(rtp != nullptr)
    {
        _children["rtp"] = rtp;
    }

    if(icmp != nullptr)
    {
        _children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        _children["igmp"] = igmp;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Flow::Record::Match::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "rtp" || name == "icmp" || name == "igmp" || name == "tcp" || name == "udp" || name == "destination-port" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Bytes::Bytes()
    :
    expected{YType::empty, "expected"}
        ,
    lost(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Transport::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return expected.is_set
	|| (lost !=  nullptr && lost->has_data());
}

bool Native::Flow::Record::Match::Transport::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expected.yfilter)
	|| (lost !=  nullptr && lost->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expected.is_set || is_set(expected.yfilter)) leaf_name_data.push_back(expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Transport::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lost")
    {
        if(lost == nullptr)
        {
            lost = std::make_shared<Native::Flow::Record::Match::Transport::Bytes::Lost>();
        }
        return lost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Transport::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lost != nullptr)
    {
        _children["lost"] = lost;
    }

    return _children;
}

void Native::Flow::Record::Match::Transport::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expected")
    {
        expected = value;
        expected.value_namespace = name_space;
        expected.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expected")
    {
        expected.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lost" || name == "expected")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Bytes::Lost::Lost()
    :
    rate{YType::empty, "rate"}
{

    yang_name = "lost"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Match::Transport::Bytes::Lost::~Lost()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Bytes::Lost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Bytes::Lost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Transport::Bytes::Lost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Transport::Bytes::Lost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Transport::Bytes::Lost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Bytes::Lost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Rtp::Rtp()
    :
    ssrc{YType::empty, "ssrc"}
{

    yang_name = "rtp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Transport::Rtp::~Rtp()
{
}

bool Native::Flow::Record::Match::Transport::Rtp::has_data() const
{
    if (is_presence_container) return true;
    return ssrc.is_set;
}

bool Native::Flow::Record::Match::Transport::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Transport::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Transport::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Transport::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssrc")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Icmp()
    :
    ipv4(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "icmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Transport::Icmp::~Icmp()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Match::Transport::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Transport::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Transport::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Flow::Record::Match::Transport::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Transport::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Transport::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::Ipv4()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv4"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

const Enum::YLeaf Native::Flow::Record::Match::Datalink::Vlan::input {0, "input"};
const Enum::YLeaf Native::Flow::Record::Match::Datalink::Vlan::output {1, "output"};


}
}


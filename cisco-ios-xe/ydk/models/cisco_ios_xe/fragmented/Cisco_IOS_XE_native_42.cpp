
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_42.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::GigabitEthernet::PriorityQueue::CosMap::CosMap()
    :
    id{YType::uint8, "id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::GigabitEthernet::PriorityQueue::CosMap::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::GigabitEthernet::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::GigabitEthernet::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::GigabitEthernet::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::RcvQueue::RcvQueue()
    :
    cos_map(this, {"queue_id", "threshold_id"})
{

    yang_name = "rcv-queue"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::GigabitEthernet::RcvQueue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cos_map.len(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.len(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::RcvQueue::CosMap>();
        ent_->parent = this;
        cos_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cos_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::GigabitEthernet::RcvQueue::CosMap::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::GigabitEthernet::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(threshold_id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::GigabitEthernet::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    ADD_KEY_TOKEN(queue_id, "queue-id");
    ADD_KEY_TOKEN(threshold_id, "threshold-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
        threshold_id.value_namespace = name_space;
        threshold_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::GigabitEthernet::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "threshold-id")
    {
        threshold_id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::GigabitEthernet::Peer::Default>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Peer::~Peer()
{
}

bool Native::Interface::GigabitEthernet::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::GigabitEthernet::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::GigabitEthernet::Peer::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Peer::Default::Default()
    :
    ip(std::make_shared<Native::Interface::GigabitEthernet::Peer::Default::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Peer::Default::~Default()
{
}

bool Native::Interface::GigabitEthernet::Peer::Default::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::GigabitEthernet::Peer::Default::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::GigabitEthernet::Peer::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Peer::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Peer::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::GigabitEthernet::Peer::Default::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Peer::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Peer::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Peer::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Peer::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::GigabitEthernet::Peer::Default::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::~Ip()
{
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::GigabitEthernet::Peer::Default::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Peer::Default::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Peer::Default::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::GigabitEthernet::Peer::Default::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Peer::Default::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
        ,
    dhcp_pool(nullptr) // presence node
    , pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::~Address()
{
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp_pool != nullptr)
    {
        _children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::has_data() const
{
    if (is_presence_container) return true;
    return pools.is_set;
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::has_data() const
{
    if (is_presence_container) return true;
    return pools.is_set;
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Peer::Default::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::PmPath::PmPath()
    :
    name{YType::str, "name"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "pm-path"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::PmPath::~PmPath()
{
}

bool Native::Interface::GigabitEthernet::PmPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| interface_id.is_set;
}

bool Native::Interface::GigabitEthernet::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::GigabitEthernet::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportWrapper::SwitchportWrapper()
    :
    switchport(std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport>())
{
    switchport->parent = this;

    yang_name = "switchport-wrapper"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportWrapper::~SwitchportWrapper()
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::has_data() const
{
    if (is_presence_container) return true;
    return (switchport !=  nullptr && switchport->has_data());
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::has_operation() const
{
    return is_set(yfilter)
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::Interface::GigabitEthernet::SwitchportWrapper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-wrapper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportWrapper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportWrapper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportWrapper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Switchport()
    :
    mode{YType::enumeration, "mode"}
        ,
    access(std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access>())
    , trunk(std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk>())
{
    access->parent = this;
    trunk->parent = this;

    yang_name = "switchport"; yang_parent_name = "switchport-wrapper"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::~Switchport()
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| (access !=  nullptr && access->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(trunk != nullptr)
    {
        _children["trunk"] = trunk;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk" || name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::~Access()
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Trunk()
    :
    allowed(std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed>())
    , native(std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_>())
{
    allowed->parent = this;
    native->parent = this;

    yang_name = "trunk"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::~Trunk()
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return (allowed !=  nullptr && allowed->has_data())
	|| (native !=  nullptr && native->has_data());
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::has_operation() const
{
    return is_set(yfilter)
	|| (allowed !=  nullptr && allowed->has_operation())
	|| (native !=  nullptr && native->has_operation());
}

std::string Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowed")
    {
        if(allowed == nullptr)
        {
            allowed = std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed>();
        }
        return allowed;
    }

    if(child_yang_name == "native")
    {
        if(native == nullptr)
        {
            native = std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_>();
        }
        return native;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowed != nullptr)
    {
        _children["allowed"] = allowed;
    }

    if(native != nullptr)
    {
        _children["native"] = native;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed" || name == "native")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Allowed()
    :
    vlan(std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan>())
{
    vlan->parent = this;

    yang_name = "allowed"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::~Allowed()
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::Vlan()
    :
    vlans{YType::str, "vlans"},
    add{YType::str, "add"},
    all{YType::empty, "all"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"}
{

    yang_name = "vlan"; yang_parent_name = "allowed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::~Vlan()
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vlans.is_set
	|| add.is_set
	|| all.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlans.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(except.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlans.is_set || is_set(vlans.yfilter)) leaf_name_data.push_back(vlans.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlans")
    {
        vlans = value;
        vlans.value_namespace = name_space;
        vlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlans")
    {
        vlans.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "except")
    {
        except.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Allowed::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlans" || name == "add" || name == "all" || name == "except" || name == "none" || name == "remove")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::Native_()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "native"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::~Native_()
{
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Trunk::Native_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Power()
    :
    inline_(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline>())
{
    inline_->parent = this;

    yang_name = "power"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::~Power()
{
}

bool Native::Interface::GigabitEthernet::Power::has_data() const
{
    if (is_presence_container) return true;
    return (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Interface::GigabitEthernet::Power::has_operation() const
{
    return is_set(yfilter)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inline_ != nullptr)
    {
        _children["inline"] = inline_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Inline()
    :
    consumption{YType::uint16, "consumption"},
    never{YType::empty, "never"}
        ,
    auto_(nullptr) // presence node
    , four_pair(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::FourPair>())
    , police(nullptr) // presence node
    , port(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Port>())
    , static_(nullptr) // presence node
{
    four_pair->parent = this;
    port->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::~Inline()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::has_data() const
{
    if (is_presence_container) return true;
    return consumption.is_set
	|| never.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_pair !=  nullptr && four_pair->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::GigabitEthernet::Power::Inline::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(consumption.yfilter)
	|| ydk::is_set(never.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_pair !=  nullptr && four_pair->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Power::Inline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (consumption.is_set || is_set(consumption.yfilter)) leaf_name_data.push_back(consumption.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "four-pair")
    {
        if(four_pair == nullptr)
        {
            four_pair = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::FourPair>();
        }
        return four_pair;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Police>();
        }
        return police;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Port>();
        }
        return port;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(four_pair != nullptr)
    {
        _children["four-pair"] = four_pair;
    }

    if(police != nullptr)
    {
        _children["police"] = police;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "consumption")
    {
        consumption = value;
        consumption.value_namespace = name_space;
        consumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "consumption")
    {
        consumption.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-pair" || name == "police" || name == "port" || name == "static" || name == "consumption" || name == "never")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Auto::Auto()
    :
    max{YType::int32, "max"}
{

    yang_name = "auto"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Power::Inline::Auto::~Auto()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Auto::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::FourPair::FourPair()
    :
    forced{YType::empty, "forced"}
{

    yang_name = "four-pair"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::FourPair::~FourPair()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::FourPair::has_data() const
{
    if (is_presence_container) return true;
    return forced.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::FourPair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::FourPair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::FourPair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::FourPair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forced")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Police::Police()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Police::Action>())
{
    action->parent = this;

    yang_name = "police"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Power::Inline::Police::~Police()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Police::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Police::Action::Action()
    :
    errdisable{YType::empty, "errdisable"},
    log{YType::empty, "log"}
{

    yang_name = "action"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::Police::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::Action::has_data() const
{
    if (is_presence_container) return true;
    return errdisable.is_set
	|| log.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errdisable.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errdisable.is_set || is_set(errdisable.yfilter)) leaf_name_data.push_back(errdisable.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errdisable")
    {
        errdisable = value;
        errdisable.value_namespace = name_space;
        errdisable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errdisable")
    {
        errdisable.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errdisable" || name == "log")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Port::Port()
    :
    poe_ha{YType::empty, "poe-ha"},
    perpetual_poe_ha{YType::empty, "perpetual-poe-ha"},
    two_event{YType::empty, "two-event"}
{

    yang_name = "port"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::Port::~Port()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Port::has_data() const
{
    if (is_presence_container) return true;
    return poe_ha.is_set
	|| perpetual_poe_ha.is_set
	|| two_event.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(poe_ha.yfilter)
	|| ydk::is_set(perpetual_poe_ha.yfilter)
	|| ydk::is_set(two_event.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (poe_ha.is_set || is_set(poe_ha.yfilter)) leaf_name_data.push_back(poe_ha.get_name_leafdata());
    if (perpetual_poe_ha.is_set || is_set(perpetual_poe_ha.yfilter)) leaf_name_data.push_back(perpetual_poe_ha.get_name_leafdata());
    if (two_event.is_set || is_set(two_event.yfilter)) leaf_name_data.push_back(two_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poe-ha")
    {
        poe_ha = value;
        poe_ha.value_namespace = name_space;
        poe_ha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perpetual-poe-ha")
    {
        perpetual_poe_ha = value;
        perpetual_poe_ha.value_namespace = name_space;
        perpetual_poe_ha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-event")
    {
        two_event = value;
        two_event.value_namespace = name_space;
        two_event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poe-ha")
    {
        poe_ha.yfilter = yfilter;
    }
    if(value_path == "perpetual-poe-ha")
    {
        perpetual_poe_ha.yfilter = yfilter;
    }
    if(value_path == "two-event")
    {
        two_event.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poe-ha" || name == "perpetual-poe-ha" || name == "two-event")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Static::Static()
    :
    max{YType::int32, "max"}
{

    yang_name = "static"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Power::Inline::Static::~Static()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Static::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CarrierDelay::CarrierDelay()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
        ,
    down(std::make_shared<Native::Interface::GigabitEthernet::CarrierDelay::Down>())
    , up(std::make_shared<Native::Interface::GigabitEthernet::CarrierDelay::Up>())
{
    down->parent = this;
    up->parent = this;

    yang_name = "carrier-delay"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CarrierDelay::~CarrierDelay()
{
}

bool Native::Interface::GigabitEthernet::CarrierDelay::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| msec.is_set
	|| (down !=  nullptr && down->has_data())
	|| (up !=  nullptr && up->has_data());
}

bool Native::Interface::GigabitEthernet::CarrierDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| (down !=  nullptr && down->has_operation())
	|| (up !=  nullptr && up->has_operation());
}

std::string Native::Interface::GigabitEthernet::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:carrier-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CarrierDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Native::Interface::GigabitEthernet::CarrierDelay::Down>();
        }
        return down;
    }

    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Native::Interface::GigabitEthernet::CarrierDelay::Up>();
        }
        return up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(down != nullptr)
    {
        _children["down"] = down;
    }

    if(up != nullptr)
    {
        _children["up"] = up;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up" || name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CarrierDelay::Down::Down()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "down"; yang_parent_name = "carrier-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CarrierDelay::Down::~Down()
{
}

bool Native::Interface::GigabitEthernet::CarrierDelay::Down::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::GigabitEthernet::CarrierDelay::Down::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::GigabitEthernet::CarrierDelay::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CarrierDelay::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CarrierDelay::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CarrierDelay::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::CarrierDelay::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CarrierDelay::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CarrierDelay::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CarrierDelay::Up::Up()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "up"; yang_parent_name = "carrier-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CarrierDelay::Up::~Up()
{
}

bool Native::Interface::GigabitEthernet::CarrierDelay::Up::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::GigabitEthernet::CarrierDelay::Up::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::GigabitEthernet::CarrierDelay::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CarrierDelay::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CarrierDelay::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CarrierDelay::Up::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::CarrierDelay::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CarrierDelay::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CarrierDelay::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::ChannelGroup::ChannelGroup()
    :
    number{YType::uint16, "number"},
    mode{YType::enumeration, "mode"},
    non_silent{YType::empty, "non-silent"},
    link{YType::uint8, "link"},
    auto_{YType::empty, "auto"}
{

    yang_name = "channel-group"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::ChannelGroup::~ChannelGroup()
{
}

bool Native::Interface::GigabitEthernet::ChannelGroup::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mode.is_set
	|| non_silent.is_set
	|| link.is_set
	|| auto_.is_set;
}

bool Native::Interface::GigabitEthernet::ChannelGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(non_silent.yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::GigabitEthernet::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:channel-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::ChannelGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (non_silent.is_set || is_set(non_silent.yfilter)) leaf_name_data.push_back(non_silent.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::ChannelGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-silent")
    {
        non_silent = value;
        non_silent.value_namespace = name_space;
        non_silent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::ChannelGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "non-silent")
    {
        non_silent.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::ChannelGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mode" || name == "non-silent" || name == "link" || name == "auto")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Ethernet()
    :
    oam(nullptr) // presence node
    , dot1ad(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Dot1ad>())
{
    dot1ad->parent = this;

    yang_name = "ethernet"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::~Ethernet()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (oam !=  nullptr && oam->has_data())
	|| (dot1ad !=  nullptr && dot1ad->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (oam !=  nullptr && oam->has_operation())
	|| (dot1ad !=  nullptr && dot1ad->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam>();
        }
        return oam;
    }

    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Dot1ad>();
        }
        return dot1ad;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oam != nullptr)
    {
        _children["oam"] = oam;
    }

    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam" || name == "dot1ad")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::Oam()
    :
    max_rate{YType::uint8, "max-rate"},
    min_rate{YType::uint8, "min-rate"},
    mode{YType::enumeration, "mode"},
    timeout{YType::uint8, "timeout"}
        ,
    link_monitor(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor>())
    , remote_failure(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure>())
    , remote_loopback(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback>())
{
    link_monitor->parent = this;
    remote_failure->parent = this;
    remote_loopback->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::~Oam()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::has_data() const
{
    if (is_presence_container) return true;
    return max_rate.is_set
	|| min_rate.is_set
	|| mode.is_set
	|| timeout.is_set
	|| (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data())
	|| (remote_loopback !=  nullptr && remote_loopback->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_rate.yfilter)
	|| ydk::is_set(min_rate.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation())
	|| (remote_loopback !=  nullptr && remote_loopback->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_rate.is_set || is_set(max_rate.yfilter)) leaf_name_data.push_back(max_rate.get_name_leafdata());
    if (min_rate.is_set || is_set(min_rate.yfilter)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    if(child_yang_name == "remote-loopback")
    {
        if(remote_loopback == nullptr)
        {
            remote_loopback = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback>();
        }
        return remote_loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_monitor != nullptr)
    {
        _children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        _children["remote-failure"] = remote_failure;
    }

    if(remote_loopback != nullptr)
    {
        _children["remote-loopback"] = remote_loopback;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-rate")
    {
        max_rate = value;
        max_rate.value_namespace = name_space;
        max_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rate")
    {
        min_rate = value;
        min_rate.value_namespace = name_space;
        min_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-rate")
    {
        max_rate.yfilter = yfilter;
    }
    if(value_path == "min-rate")
    {
        min_rate.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitor" || name == "remote-failure" || name == "remote-loopback" || name == "max-rate" || name == "min-rate" || name == "mode" || name == "timeout")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    on{YType::empty, "on"},
    supported{YType::empty, "supported"}
        ,
    frame(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame>())
    , frame_period(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod>())
    , frame_seconds(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds>())
    , high_threshold(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold>())
    , receive_crc(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
    , symbol_period(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
{
    frame->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    high_threshold->parent = this;
    receive_crc->parent = this;
    symbol_period->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set
	|| supported.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(supported.yfilter)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frame != nullptr)
    {
        _children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        _children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        _children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        _children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        _children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        _children["symbol-period"] = symbol_period;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "high-threshold" || name == "receive-crc" || name == "symbol-period" || name == "on" || name == "supported")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    thresh{YType::uint16, "thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return thresh.is_set
	|| none.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    f_thresh{YType::uint16, "f-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return f_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(f_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (f_thresh.is_set || is_set(f_thresh.yfilter)) leaf_name_data.push_back(f_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "f-thresh")
    {
        f_thresh = value;
        f_thresh.value_namespace = name_space;
        f_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "f-thresh")
    {
        f_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "f-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    e_thresh{YType::uint16, "e-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return e_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_thresh.is_set || is_set(e_thresh.yfilter)) leaf_name_data.push_back(e_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-thresh")
    {
        e_thresh = value;
        e_thresh.value_namespace = name_space;
        e_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-thresh")
    {
        e_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "high-threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    crc_thresh{YType::uint16, "crc-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return crc_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_thresh.is_set || is_set(crc_thresh.yfilter)) leaf_name_data.push_back(crc_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh = value;
        crc_thresh.value_namespace = name_space;
        crc_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(err_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_thresh.is_set || is_set(err_thresh.yfilter)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "err-thresh")
    {
        err_thresh = value;
        err_thresh.value_namespace = name_space;
        err_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "err-thresh")
    {
        err_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "err-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent>())
    , dying_gasp(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp>())
    , link_fault(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;
    dying_gasp->parent = this;
    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::has_data() const
{
    if (is_presence_container) return true;
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(critical_event != nullptr)
    {
        _children["critical-event"] = critical_event;
    }

    if(dying_gasp != nullptr)
    {
        _children["dying-gasp"] = dying_gasp;
    }

    if(link_fault != nullptr)
    {
        _children["link-fault"] = link_fault;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "critical-event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{

    yang_name = "dying-gasp"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "dying-gasp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{

    yang_name = "link-fault"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "link-fault"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "remote-loopback"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::has_data() const
{
    if (is_presence_container) return true;
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Oam::RemoteLoopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported" || name == "timeout")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Dot1ad()
    :
    nni{YType::empty, "nni"}
        ,
    uni(std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni>())
{
    uni->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return nni.is_set
	|| (uni !=  nullptr && uni->has_data());
}

bool Native::Interface::GigabitEthernet::Ethernet::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nni.yfilter)
	|| (uni !=  nullptr && uni->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ethernet::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nni.is_set || is_set(nni.yfilter)) leaf_name_data.push_back(nni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uni")
    {
        if(uni == nullptr)
        {
            uni = std::make_shared<Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni>();
        }
        return uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(uni != nullptr)
    {
        _children["uni"] = uni;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nni")
    {
        nni = value;
        nni.value_namespace = name_space;
        nni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nni")
    {
        nni.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni" || name == "nni")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::Uni()
    :
    c_port{YType::empty, "c-port"},
    s_port{YType::empty, "s-port"}
{

    yang_name = "uni"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::~Uni()
{
}

bool Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::has_data() const
{
    if (is_presence_container) return true;
    return c_port.is_set
	|| s_port.is_set;
}

bool Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(c_port.yfilter)
	|| ydk::is_set(s_port.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (c_port.is_set || is_set(c_port.yfilter)) leaf_name_data.push_back(c_port.get_name_leafdata());
    if (s_port.is_set || is_set(s_port.yfilter)) leaf_name_data.push_back(s_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "c-port")
    {
        c_port = value;
        c_port.value_namespace = name_space;
        c_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s-port")
    {
        s_port = value;
        s_port.value_namespace = name_space;
        s_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "c-port")
    {
        c_port.yfilter = yfilter;
    }
    if(value_path == "s-port")
    {
        s_port.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ethernet::Dot1ad::Uni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "c-port" || name == "s-port")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Eapol::Eapol()
    :
    destination_address(std::make_shared<Native::Interface::GigabitEthernet::Eapol::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "eapol"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Eapol::~Eapol()
{
}

bool Native::Interface::GigabitEthernet::Eapol::has_data() const
{
    if (is_presence_container) return true;
    return (destination_address !=  nullptr && destination_address->has_data());
}

bool Native::Interface::GigabitEthernet::Eapol::has_operation() const
{
    return is_set(yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string Native::Interface::GigabitEthernet::Eapol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:eapol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Eapol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Eapol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Interface::GigabitEthernet::Eapol::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Eapol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Eapol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Eapol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Eapol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Eapol::DestinationAddress::DestinationAddress()
    :
    broadcast_address{YType::empty, "broadcast-address"}
{

    yang_name = "destination-address"; yang_parent_name = "eapol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Eapol::DestinationAddress::~DestinationAddress()
{
}

bool Native::Interface::GigabitEthernet::Eapol::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return broadcast_address.is_set;
}

bool Native::Interface::GigabitEthernet::Eapol::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_address.yfilter);
}

std::string Native::Interface::GigabitEthernet::Eapol::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Eapol::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_address.is_set || is_set(broadcast_address.yfilter)) leaf_name_data.push_back(broadcast_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Eapol::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Eapol::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Eapol::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-address")
    {
        broadcast_address = value;
        broadcast_address.value_namespace = name_space;
        broadcast_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Eapol::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-address")
    {
        broadcast_address.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Eapol::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-address")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "synchronous"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Synchronous::~Synchronous()
{
}

bool Native::Interface::GigabitEthernet::Synchronous::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set;
}

bool Native::Interface::GigabitEthernet::Synchronous::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::GigabitEthernet::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"},
    nonegotiate{YType::empty, "nonegotiate"}
{

    yang_name = "speed"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Speed::~Speed()
{
}

bool Native::Interface::GigabitEthernet::Speed::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set
	|| nonegotiate.is_set;
}

bool Native::Interface::GigabitEthernet::Speed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(value_10.yfilter)
	|| ydk::is_set(value_100.yfilter)
	|| ydk::is_set(value_1000.yfilter)
	|| ydk::is_set(value_10000.yfilter)
	|| ydk::is_set(nonegotiate.yfilter);
}

std::string Native::Interface::GigabitEthernet::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:speed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Speed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (value_10.is_set || is_set(value_10.yfilter)) leaf_name_data.push_back(value_10.get_name_leafdata());
    if (value_100.is_set || is_set(value_100.yfilter)) leaf_name_data.push_back(value_100.get_name_leafdata());
    if (value_1000.is_set || is_set(value_1000.yfilter)) leaf_name_data.push_back(value_1000.get_name_leafdata());
    if (value_10000.is_set || is_set(value_10000.yfilter)) leaf_name_data.push_back(value_10000.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Speed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10")
    {
        value_10 = value;
        value_10.value_namespace = name_space;
        value_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-100")
    {
        value_100 = value;
        value_100.value_namespace = name_space;
        value_100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-1000")
    {
        value_1000 = value;
        value_1000.value_namespace = name_space;
        value_1000.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10000")
    {
        value_10000 = value;
        value_10000.value_namespace = name_space;
        value_10000.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Speed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "value-10")
    {
        value_10.yfilter = yfilter;
    }
    if(value_path == "value-100")
    {
        value_100.yfilter = yfilter;
    }
    if(value_path == "value-1000")
    {
        value_1000.yfilter = yfilter;
    }
    if(value_path == "value-10000")
    {
        value_10000.yfilter = yfilter;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Speed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "value-10" || name == "value-100" || name == "value-1000" || name == "value-10000" || name == "nonegotiate")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "negotiation"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Negotiation::~Negotiation()
{
}

bool Native::Interface::GigabitEthernet::Negotiation::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set;
}

bool Native::Interface::GigabitEthernet::Negotiation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Negotiation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Negotiation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Negotiation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Negotiation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::GigabitEthernet::Plim::Ethernet>())
    , qos(std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos>())
{
    ethernet->parent = this;
    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::~Plim()
{
}

bool Native::Interface::GigabitEthernet::Plim::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:plim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::GigabitEthernet::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "qos")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Plim::Ethernet::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Qos::~Qos()
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::has_data() const
{
    if (is_presence_container) return true;
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::has_operation() const
{
    return is_set(yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Queue()
    :
    zero(std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero>())
    , strict_priority(std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority>())
{
    zero->parent = this;
    strict_priority->parent = this;

    yang_name = "queue"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::has_data() const
{
    if (is_presence_container) return true;
    return (zero !=  nullptr && zero->has_data())
	|| (strict_priority !=  nullptr && strict_priority->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(yfilter)
	|| (zero !=  nullptr && zero->has_operation())
	|| (strict_priority !=  nullptr && strict_priority->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(zero != nullptr)
    {
        _children["zero"] = zero;
    }

    if(strict_priority != nullptr)
    {
        _children["strict-priority"] = strict_priority;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zero" || name == "strict-priority")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::has_data() const
{
    if (is_presence_container) return true;
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pause != nullptr)
    {
        _children["pause"] = pause;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    if (is_presence_container) return true;
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pause != nullptr)
    {
        _children["pause"] = pause;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "strict-priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
        ,
    enable(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Pppoe::~Pppoe()
{
}

bool Native::Interface::GigabitEthernet::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::GigabitEthernet::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::GigabitEthernet::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::GigabitEthernet::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-sessions")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{

    yang_name = "enable"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::GigabitEthernet::Pppoe::Enable::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::GigabitEthernet::Pppoe::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::GigabitEthernet::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Pppoe::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Pppoe::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Pppoe::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Pppoe::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Service()
    :
    instance(this, {"id"})
{

    yang_name = "service"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::~Service()
{
}

bool Native::Interface::GigabitEthernet::Service::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Instance()
    :
    id{YType::uint32, "id"},
    trunk{YType::empty, "trunk"},
    gigabitethernet{YType::empty, "GigabitEthernet"},
    ethernet{YType::empty, "ethernet"},
    ethernet_evc_name{YType::str, "ethernet-evc-name"},
    description{YType::str, "description"},
    evc_name{YType::str, "evc-name"},
    group{YType::uint32, "group"},
    shutdown{YType::empty, "shutdown"}
        ,
    encapsulation(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation>())
    , ip(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip>())
    , ipv6(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ipv6>())
    , rewrite(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite>())
    , errdisable(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Errdisable>())
    , ethernet_container(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer>())
    , snmp(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Snmp>())
    , bridge_domain(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain>())
    , mac(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Mac>())
    , service_policy(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy>())
    , cfm(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm>())
    , l2protocol(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::L2protocol>())
    , xconnect(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass>())
{
    encapsulation->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    rewrite->parent = this;
    errdisable->parent = this;
    ethernet_container->parent = this;
    snmp->parent = this;
    bridge_domain->parent = this;
    mac->parent = this;
    service_policy->parent = this;
    cfm->parent = this;
    l2protocol->parent = this;
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "instance"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::~Instance()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| trunk.is_set
	|| gigabitethernet.is_set
	|| ethernet.is_set
	|| ethernet_evc_name.is_set
	|| description.is_set
	|| evc_name.is_set
	|| group.is_set
	|| shutdown.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet_container !=  nullptr && ethernet_container->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (l2protocol !=  nullptr && l2protocol->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ethernet_evc_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(evc_name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet_container !=  nullptr && ethernet_container->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (l2protocol !=  nullptr && l2protocol->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ethernet_evc_name.is_set || is_set(ethernet_evc_name.yfilter)) leaf_name_data.push_back(ethernet_evc_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (evc_name.is_set || is_set(evc_name.yfilter)) leaf_name_data.push_back(evc_name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::L2protocol>();
        }
        return l2protocol;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(rewrite != nullptr)
    {
        _children["rewrite"] = rewrite;
    }

    if(errdisable != nullptr)
    {
        _children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        _children["ethernet-container"] = ethernet_container;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(bridge_domain != nullptr)
    {
        _children["bridge-domain"] = bridge_domain;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(cfm != nullptr)
    {
        _children["cfm"] = cfm;
    }

    if(l2protocol != nullptr)
    {
        _children["l2protocol"] = l2protocol;
    }

    if(xconnect != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name = value;
        ethernet_evc_name.value_namespace = name_space;
        ethernet_evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc-name")
    {
        evc_name = value;
        evc_name.value_namespace = name_space;
        evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "evc-name")
    {
        evc_name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "ipv6" || name == "rewrite" || name == "errdisable" || name == "ethernet-container" || name == "snmp" || name == "bridge-domain" || name == "mac" || name == "service-policy" || name == "cfm" || name == "l2protocol" || name == "xconnect" || name == "xconnect-pw-class" || name == "id" || name == "trunk" || name == "GigabitEthernet" || name == "ethernet" || name == "ethernet-evc-name" || name == "description" || name == "evc-name" || name == "group" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
        ,
    dot1ad(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q>())
    , priority_tagged(nullptr) // presence node
    , untagged(nullptr) // presence node
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    if(priority_tagged != nullptr)
    {
        _children["priority-tagged"] = priority_tagged;
    }

    if(untagged != nullptr)
    {
        _children["untagged"] = untagged;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q" || name == "priority-tagged" || name == "untagged" || name == "default")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Dot1ad()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"}
        ,
    cos2(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto dot1q_name_datas = dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dot1q_name_datas.begin(), dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dot1q")
    {
        dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "dot1q" || name == "etype" || name == "exact")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::~Cos2()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Dot1q()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::str, "second-dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    vlan_type{YType::enumeration, "vlan-type"}
        ,
    cos2(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| vlan_type.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto second_dot1q_name_datas = second_dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), second_dot1q_name_datas.begin(), second_dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "second-dot1q" || name == "etype" || name == "exact" || name == "vlan-type")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::~Cos2()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
        ,
    cos_container(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(etype.yfilter)
	|| (cos_container !=  nullptr && cos_container->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos_container != nullptr)
    {
        _children["cos-container"] = cos_container;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-container" || name == "etype")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos-container"; yang_parent_name = "priority-tagged"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::Untagged()
{

    yang_name = "untagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Untagged::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl>())
    , dhcp(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp>())
    , verify(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify>())
{
    acl->parent = this;
    dhcp->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "dhcp" || name == "verify")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::has_data() const
{
    if (is_presence_container) return true;
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_id.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::Verify()
    :
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"},
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"}
{

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| vlan.is_set
	|| dhcp_snooping.is_set
	|| port_security.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping = value;
        dhcp_snooping.value_namespace = name_space;
        dhcp_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping.yfilter = yfilter;
    }
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "vlan" || name == "dhcp-snooping" || name == "port-security")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Ipv6::Ipv6()
    :
    traffic_filter{YType::str, "traffic-filter"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ipv6"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return traffic_filter.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_filter.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter = value;
        traffic_filter.value_namespace = name_space;
        traffic_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-filter" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::has_data() const
{
    if (is_presence_container) return true;
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop>())
    , push(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push>())
    , translate(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;
    push->parent = this;
    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pop != nullptr)
    {
        _children["pop"] = pop;
    }

    if(push != nullptr)
    {
        _children["push"] = push;
    }

    if(translate != nullptr)
    {
        _children["translate"] = translate;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    way{YType::enumeration, "way"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "pop"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    if (is_presence_container) return true;
    return way.is_set
	|| mode.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(way.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "way" || name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "push"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
    , t1_to_2(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
    , t2_to_1(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
    , t2_to_2(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;
    t1_to_2->parent = this;
    t2_to_1->parent = this;
    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    if (is_presence_container) return true;
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(t1_to_1 != nullptr)
    {
        _children["t1-to-1"] = t1_to_1;
    }

    if(t1_to_2 != nullptr)
    {
        _children["t1-to-2"] = t1_to_2;
    }

    if(t2_to_1 != nullptr)
    {
        _children["t2-to-1"] = t2_to_1;
    }

    if(t2_to_2 != nullptr)
    {
        _children["t2-to-2"] = t2_to_2;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::has_data() const
{
    if (is_presence_container) return true;
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cause != nullptr)
    {
        _children["cause"] = cause;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    if (is_presence_container) return true;
    return mac_security.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi>())
    , loopback(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;
    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lmi != nullptr)
    {
        _children["lmi"] = lmi;
    }

    if(loopback != nullptr)
    {
        _children["loopback"] = loopback;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    if (is_presence_container) return true;
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ce_vlan != nullptr)
    {
        _children["ce-vlan"] = ce_vlan;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"},
    vlan_range{YType::str, "vlan-range"}
{

    yang_name = "map"; yang_parent_name = "ce-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| vlan_range.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| ydk::is_set(vlan_range.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());
    if (vlan_range.is_set || is_set(vlan_range.yfilter)) leaf_name_data.push_back(vlan_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untagged")
    {
        untagged = value;
        untagged.value_namespace = name_space;
        untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range")
    {
        vlan_range = value;
        vlan_range.value_namespace = name_space;
        vlan_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "untagged")
    {
        untagged.yfilter = yfilter;
    }
    if(value_path == "vlan-range")
    {
        vlan_range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "default" || name == "untagged" || name == "vlan-range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{

    yang_name = "permit"; yang_parent_name = "loopback"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap>())
    , ifindex(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex>())
{
    trap->parent = this;
    ifindex->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (trap !=  nullptr && trap->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap !=  nullptr && trap->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "ifindex")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
        ,
    split_horizon(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(split_horizon != nullptr)
    {
        _children["split-horizon"] = split_horizon;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation = value;
        from_encapsulation.value_namespace = name_space;
        from_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
    , access_group(this, {"acl_name"})
{

    yang_name = "mac"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Mac::Security>();
        }
        return security;
    }

    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "access-group")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
        ,
    maximum(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return addresses.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::ServicePolicy()
    :
    input(this, {"name"})
    , output(this, {"name"})
{

    yang_name = "service-policy"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input>();
        ent_->parent = this;
        input.append(ent_);
        return ent_;
    }

    if(child_yang_name == "output")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output>();
        ent_->parent = this;
        output.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : input.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : output.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation>())
    , mep(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep>())
    , mip(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;
    mep->parent = this;
    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(mep != nullptr)
    {
        _children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        _children["mip"] = mip;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q>())
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::Dot1ad()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"}
{

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| dot1q.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::Dot1q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpid")
    {
        mpid = value;
        mpid.value_namespace = name_space;
        mpid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "mpid")
    {
        mpid.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::L2protocol()
    :
    discard(nullptr) // presence node
    , peer(nullptr) // presence node
    , forward(nullptr) // presence node
    , tunnel(nullptr) // presence node
{

    yang_name = "l2protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::~L2protocol()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::L2protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::L2protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discard != nullptr)
    {
        _children["discard"] = discard;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(forward != nullptr)
    {
        _children["forward"] = forward;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "peer" || name == "forward" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Discard()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "discard"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::~Discard()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "peer"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::~Peer()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "forward"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::~Forward()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "tunnel"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::~Xconnect()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lacp::Lacp()
    :
    port_priority{YType::uint32, "port-priority"},
    rate{YType::enumeration, "rate"}
{

    yang_name = "lacp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Lacp::~Lacp()
{
}

bool Native::Interface::GigabitEthernet::Lacp::has_data() const
{
    if (is_presence_container) return true;
    return port_priority.is_set
	|| rate.is_set;
}

bool Native::Interface::GigabitEthernet::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-priority" || name == "rate")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::CiscoIOSXEEthernetMacsecOption()
    :
    macsec(std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec>())
{
    macsec->parent = this;

    yang_name = "macsec-option"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::~CiscoIOSXEEthernetMacsecOption()
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_data() const
{
    if (is_presence_container) return true;
    return (macsec !=  nullptr && macsec->has_data());
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_operation() const
{
    return is_set(yfilter)
	|| (macsec !=  nullptr && macsec->has_operation());
}

std::string Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:macsec-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec>();
        }
        return macsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec != nullptr)
    {
        _children["macsec"] = macsec;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::Macsec()
    :
    dot1q_in_clear{YType::enumeration, "dot1q-in-clear"}
        ,
    replay_protection(std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection>())
{
    replay_protection->parent = this;

    yang_name = "macsec"; yang_parent_name = "macsec-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::~Macsec()
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return dot1q_in_clear.is_set
	|| (replay_protection !=  nullptr && replay_protection->has_data());
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q_in_clear.yfilter)
	|| (replay_protection !=  nullptr && replay_protection->has_operation());
}

std::string Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q_in_clear.is_set || is_set(dot1q_in_clear.yfilter)) leaf_name_data.push_back(dot1q_in_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-protection")
    {
        if(replay_protection == nullptr)
        {
            replay_protection = std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection>();
        }
        return replay_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replay_protection != nullptr)
    {
        _children["replay-protection"] = replay_protection;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q-in-clear")
    {
        dot1q_in_clear = value;
        dot1q_in_clear.value_namespace = name_space;
        dot1q_in_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q-in-clear")
    {
        dot1q_in_clear.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-protection" || name == "dot1q-in-clear")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::ReplayProtection()
    :
    window_size{YType::uint32, "window-size"}
{

    yang_name = "replay-protection"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::~ReplayProtection()
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Mode::access {0, "access"};
const Enum::YLeaf Native::Interface::GigabitEthernet::SwitchportWrapper::Switchport::Mode::trunk {1, "trunk"};

const Enum::YLeaf Native::Interface::GigabitEthernet::ChannelGroup::Mode::active {0, "active"};
const Enum::YLeaf Native::Interface::GigabitEthernet::ChannelGroup::Mode::auto_ {1, "auto"};
const Enum::YLeaf Native::Interface::GigabitEthernet::ChannelGroup::Mode::desirable {2, "desirable"};
const Enum::YLeaf Native::Interface::GigabitEthernet::ChannelGroup::Mode::on {3, "on"};
const Enum::YLeaf Native::Interface::GigabitEthernet::ChannelGroup::Mode::passive {4, "passive"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ethernet::Oam::Mode::active {0, "active"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ethernet::Oam::Mode::passive {1, "passive"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Pppoe::Enable::Group::global {0, "global"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Dot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::SecondDot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Service::Instance::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Lacp::Rate::fast {0, "fast"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Lacp::Rate::normal {1, "normal"};

const Enum::YLeaf Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::Dot1qInClear::Y_1 {0, "1"};


}
}


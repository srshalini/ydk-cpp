
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_67.hpp"
#include "Cisco_IOS_XE_native_68.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
        ,
    check_reply(nullptr) // presence node
    , option(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option>())
    , option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_action.yfilter)
	|| ydk::is_set(trusted.yfilter)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.yfilter)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(check_reply != nullptr)
    {
        _children["check-reply"] = check_reply;
    }

    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(option_insert != nullptr)
    {
        _children["option-insert"] = option_insert;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-action")
    {
        policy_action = value;
        policy_action.value_namespace = name_space;
        policy_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-action")
    {
        policy_action.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check-reply" || name == "option" || name == "option-insert" || name == "policy-action" || name == "trusted")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{

    yang_name = "check-reply"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::CheckReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_id.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{

    yang_name = "option-insert"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::OptionInsert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit>())
    , vlan(this, {"id"})
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "vlan" || name == "trust")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Vlan()
    :
    id{YType::uint16, "id"}
        ,
    information(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information>())
{
    information->parent = this;

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::~Vlan()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "id")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Information()
    :
    option(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::~Information()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::Option()
    :
    format_type(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>())
{
    format_type->parent = this;

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::~Option()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return (format_type !=  nullptr && format_type->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| (format_type !=  nullptr && format_type->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-type")
    {
        if(format_type == nullptr)
        {
            format_type = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>();
        }
        return format_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format_type != nullptr)
    {
        _children["format-type"] = format_type;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-type")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::FormatType()
    :
    circuit_id(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>())
{
    circuit_id->parent = this;

    yang_name = "format-type"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::~FormatType()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_data() const
{
    if (is_presence_container) return true;
    return (circuit_id !=  nullptr && circuit_id->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_operation() const
{
    return is_set(yfilter)
	|| (circuit_id !=  nullptr && circuit_id->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>();
        }
        return circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(circuit_id != nullptr)
    {
        _children["circuit-id"] = circuit_id;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::CircuitId()
    :
    string{YType::str, "string"}
{

    yang_name = "circuit-id"; yang_parent_name = "format-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::~CircuitId()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::SummaryAddress()
    :
    eigrp(this, {"id"})
{

    yang_name = "summary-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{

    yang_name = "eigrp"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::SummaryAddress::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ip" || name == "mask" || name == "metric")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Verify()
    :
    source(nullptr) // presence node
    , unicast(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::~Verify()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(unicast != nullptr)
    {
        _children["unicast"] = unicast;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "unicast")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::~Source()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::Vlan()
    :
    dhcp_snooping(nullptr) // presence node
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::~Vlan()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp_snooping != nullptr)
    {
        _children["dhcp-snooping"] = dhcp_snooping;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{

    yang_name = "dhcp-snooping"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_data() const
{
    if (is_presence_container) return true;
    return port_security.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-security")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
    , source(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reverse_path != nullptr)
    {
        _children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-path" || name == "source")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::ReversePath()
{

    yang_name = "reverse-path"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::ReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::Source()
    :
    reachable_via{YType::enumeration, "reachable-via"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    allow_default{YType::empty, "allow-default"}
{

    yang_name = "source"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::has_data() const
{
    if (is_presence_container) return true;
    return reachable_via.is_set
	|| allow_self_ping.is_set
	|| allow_default.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_via.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(allow_default.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_via.is_set || is_set(reachable_via.yfilter)) leaf_name_data.push_back(reachable_via.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (allow_default.is_set || is_set(allow_default.yfilter)) leaf_name_data.push_back(allow_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-via")
    {
        reachable_via = value;
        reachable_via.value_namespace = name_space;
        reachable_via.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-default")
    {
        allow_default = value;
        allow_default.value_namespace = name_space;
        allow_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-via")
    {
        reachable_via.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "allow-default")
    {
        allow_default.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-via" || name == "allow-self-ping" || name == "allow-default")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Flow::Flow()
    :
    ingress{YType::empty, "ingress"},
    egress{YType::empty, "egress"}
        ,
    monitor(this, {"name"})
{

    yang_name = "flow"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Flow::~Flow()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return ingress.is_set
	|| egress.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor>();
        ent_->parent = this;
        monitor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "ingress" || name == "egress")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    output{YType::empty, "output"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
        ,
    sampler(this, {"direction"})
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| output.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler>();
        ent_->parent = this;
        sampler.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sampler.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampler" || name == "name" || name == "input" || name == "output" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "sampler"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::Igmp()
    :
    version{YType::uint8, "version"}
        ,
    static_group(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup>())
    , join_group(this, {"ip_group_address"})
{
    static_group->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::~Igmp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<join_group.len(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    return version.is_set
	|| (static_group !=  nullptr && static_group->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<join_group.len(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (static_group !=  nullptr && static_group->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-group")
    {
        if(static_group == nullptr)
        {
            static_group = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup>();
        }
        return static_group;
    }

    if(child_yang_name == "join-group")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup>();
        ent_->parent = this;
        join_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_group != nullptr)
    {
        _children["static-group"] = static_group;
    }

    count_ = 0;
    for (auto ent_ : join_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-group" || name == "join-group" || name == "version")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::StaticGroup()
    :
    groups(this, {"name"})
    , class_map(this, {"id"})
{

    yang_name = "static-group"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::~StaticGroup()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<groups.len(); index++)
    {
        if(groups[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_map.len(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::has_operation() const
{
    for (std::size_t index=0; index<groups.len(); index++)
    {
        if(groups[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_map.len(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups>();
        ent_->parent = this;
        groups.append(ent_);
        return ent_;
    }

    if(child_yang_name == "class-map")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap>();
        ent_->parent = this;
        class_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : groups.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : class_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "class-map")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::Groups()
    :
    name{YType::str, "name"},
    source{YType::str, "source"}
{

    yang_name = "groups"; yang_parent_name = "static-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::~Groups()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source.append(value);
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::ClassMap()
    :
    id{YType::str, "id"}
{

    yang_name = "class-map"; yang_parent_name = "static-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::~ClassMap()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::JoinGroup()
    :
    ip_group_address{YType::str, "ip-group-address"},
    source{YType::str, "source"}
{

    yang_name = "join-group"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::~JoinGroup()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::has_data() const
{
    if (is_presence_container) return true;
    return ip_group_address.is_set
	|| source.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_group_address.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group";
    ADD_KEY_TOKEN(ip_group_address, "ip-group-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_group_address.is_set || is_set(ip_group_address.yfilter)) leaf_name_data.push_back(ip_group_address.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address = value;
        ip_group_address.value_namespace = name_space;
        ip_group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Igmp::JoinGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-group-address" || name == "source")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Ospf()
    :
    network{YType::enumeration, "network"},
    cost{YType::uint16, "cost"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    priority{YType::uint8, "priority"},
    resync_timeout{YType::uint32, "resync-timeout"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    process_id(this, {"id"})
    , authentication(nullptr) // presence node
    , authentication_key(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey>())
    , bfd(nullptr) // presence node
    , database_filter(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter>())
    , dead_interval(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval>())
    , demand_circuit(nullptr) // presence node
    , fast_reroute(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute>())
    , lls(nullptr) // presence node
    , message_digest_key(this, {"id"})
    , multi_area(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea>())
    , prefix_suppression(nullptr) // presence node
    , ttl_security(nullptr) // presence node
{
    authentication_key->parent = this;
    database_filter->parent = this;
    dead_interval->parent = this;
    fast_reroute->parent = this;
    multi_area->parent = this;

    yang_name = "ospf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::~Ospf()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<message_digest_key.len(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return network.is_set
	|| cost.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| priority.is_set
	|| resync_timeout.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (lls !=  nullptr && lls->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::has_operation() const
{
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<message_digest_key.len(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(resync_timeout.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (lls !=  nullptr && lls->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (resync_timeout.is_set || is_set(resync_timeout.yfilter)) leaf_name_data.push_back(resync_timeout.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-id")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId>();
        ent_->parent = this;
        process_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "lls")
    {
        if(lls == nullptr)
        {
            lls = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls>();
        }
        return lls;
    }

    if(child_yang_name == "message-digest-key")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey>();
        ent_->parent = this;
        message_digest_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(authentication_key != nullptr)
    {
        _children["authentication-key"] = authentication_key;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(dead_interval != nullptr)
    {
        _children["dead-interval"] = dead_interval;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(lls != nullptr)
    {
        _children["lls"] = lls;
    }

    count_ = 0;
    for (auto ent_ : message_digest_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(multi_area != nullptr)
    {
        _children["multi-area"] = multi_area;
    }

    if(prefix_suppression != nullptr)
    {
        _children["prefix-suppression"] = prefix_suppression;
    }

    if(ttl_security != nullptr)
    {
        _children["ttl-security"] = ttl_security;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout = value;
        resync_timeout.value_namespace = name_space;
        resync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id" || name == "authentication" || name == "authentication-key" || name == "bfd" || name == "database-filter" || name == "dead-interval" || name == "demand-circuit" || name == "fast-reroute" || name == "lls" || name == "message-digest-key" || name == "multi-area" || name == "prefix-suppression" || name == "ttl-security" || name == "network" || name == "cost" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "priority" || name == "resync-timeout" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::ProcessId()
    :
    id{YType::str, "id"},
    area{YType::str, "area"},
    secondaries{YType::empty, "secondaries"},
    none{YType::empty, "none"}
{

    yang_name = "process-id"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::~ProcessId()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| area.is_set
	|| secondaries.is_set
	|| none.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(secondaries.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (secondaries.is_set || is_set(secondaries.yfilter)) leaf_name_data.push_back(secondaries.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaries")
    {
        secondaries = value;
        secondaries.value_namespace = name_space;
        secondaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "secondaries")
    {
        secondaries.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "area" || name == "secondaries" || name == "none")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"},
    null{YType::empty, "null"}
        ,
    key_chain(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return message_digest.is_set
	|| null.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_digest.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.yfilter)) leaf_name_data.push_back(message_digest.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
        message_digest.value_namespace = name_space;
        message_digest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-digest")
    {
        message_digest.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "message-digest" || name == "null")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::AuthenticationKey()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "authentication-key"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::~Bfd()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::DatabaseFilter()
    :
    all{YType::empty, "all"},
    out{YType::empty, "out"}
{

    yang_name = "database-filter"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| out.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "out")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::DeadInterval()
    :
    value_{YType::uint32, "value"}
        ,
    minimal(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal>())
{
    minimal->parent = this;

    yang_name = "dead-interval"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::~DeadInterval()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (minimal !=  nullptr && minimal->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (minimal !=  nullptr && minimal->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal>();
        }
        return minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minimal != nullptr)
    {
        _children["minimal"] = minimal;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimal" || name == "value")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::Minimal()
    :
    hello_multiplier{YType::uint8, "hello-multiplier"}
{

    yang_name = "minimal"; yang_parent_name = "dead-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::~Minimal()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::has_data() const
{
    if (is_presence_container) return true;
    return hello_multiplier.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_multiplier.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DeadInterval::Minimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::FastReroute()
    :
    per_prefix(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix>())
{
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::~FastReroute()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per_prefix != nullptr)
    {
        _children["per-prefix"] = per_prefix;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-prefix")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::PerPrefix()
    :
    candidate(nullptr) // presence node
    , protection(nullptr) // presence node
{

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (candidate !=  nullptr && candidate->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (candidate !=  nullptr && candidate->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate")
    {
        if(candidate == nullptr)
        {
            candidate = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate>();
        }
        return candidate;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(candidate != nullptr)
    {
        _children["candidate"] = candidate;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "protection")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::Candidate()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "candidate"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::~Candidate()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::Protection()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "protection"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::~Protection()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::Lls()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "lls"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::~Lls()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::Lls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
        ,
    md5(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::Md5()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::has_data() const
{
    if (is_presence_container) return true;
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"}
{

    yang_name = "multi-area"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::~MultiArea()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::TtlSecurity()
    :
    diable{YType::empty, "diable"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::~TtlSecurity()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return diable.is_set
	|| hops.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diable.is_set || is_set(diable.yfilter)) leaf_name_data.push_back(diable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diable")
    {
        diable = value;
        diable.value_namespace = name_space;
        diable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diable")
    {
        diable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Ospf::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diable" || name == "hops")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Lisp::Lisp()
    :
    source_locator{YType::str, "source-locator"}
{

    yang_name = "lisp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Lisp::~Lisp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return source_locator.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_locator.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_locator.is_set || is_set(source_locator.yfilter)) leaf_name_data.push_back(source_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-locator")
    {
        source_locator = value;
        source_locator.value_namespace = name_space;
        source_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-locator")
    {
        source_locator.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-locator")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Nat::Nat()
    :
    allow_static_host{YType::empty, "allow-static-host"},
    enable{YType::empty, "enable"},
    inside{YType::empty, "inside"},
    outside{YType::empty, "outside"}
{

    yang_name = "nat"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Nat::~Nat()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nat::has_data() const
{
    if (is_presence_container) return true;
    return allow_static_host.is_set
	|| enable.is_set
	|| inside.is_set
	|| outside.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_static_host.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(inside.yfilter)
	|| ydk::is_set(outside.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_static_host.is_set || is_set(allow_static_host.yfilter)) leaf_name_data.push_back(allow_static_host.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (inside.is_set || is_set(inside.yfilter)) leaf_name_data.push_back(inside.get_name_leafdata());
    if (outside.is_set || is_set(outside.yfilter)) leaf_name_data.push_back(outside.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-static-host")
    {
        allow_static_host = value;
        allow_static_host.value_namespace = name_space;
        allow_static_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside")
    {
        inside = value;
        inside.value_namespace = name_space;
        inside.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside")
    {
        outside = value;
        outside.value_namespace = name_space;
        outside.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-static-host")
    {
        allow_static_host.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "inside")
    {
        inside.yfilter = yfilter;
    }
    if(value_path == "outside")
    {
        outside.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-static-host" || name == "enable" || name == "inside" || name == "outside")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Nbar::Nbar()
    :
    protocol_discovery(nullptr) // presence node
{

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Nbar::~Nbar()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nbar::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_discovery !=  nullptr && protocol_discovery->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nbar::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_discovery !=  nullptr && protocol_discovery->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-discovery")
    {
        if(protocol_discovery == nullptr)
        {
            protocol_discovery = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery>();
        }
        return protocol_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_discovery != nullptr)
    {
        _children["protocol-discovery"] = protocol_discovery;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-discovery")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::ProtocolDiscovery()
    :
    ipv4_ipv6{YType::enumeration, "ipv4-ipv6"}
{

    yang_name = "protocol-discovery"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::~ProtocolDiscovery()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_ipv6.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_ipv6.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_ipv6.is_set || is_set(ipv4_ipv6.yfilter)) leaf_name_data.push_back(ipv4_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6 = value;
        ipv4_ipv6.value_namespace = name_space;
        ipv4_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-ipv6")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
    , bandwidth(nullptr) // presence node
    , neighbor(nullptr) // presence node
    , precedence(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence>())
    , signalling(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling>())
    , tos(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos>())
{
    precedence->parent = this;
    signalling->parent = this;
    tos->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::~Rsvp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (signalling !=  nullptr && signalling->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    if(precedence != nullptr)
    {
        _children["precedence"] = precedence;
    }

    if(signalling != nullptr)
    {
        _children["signalling"] = signalling;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bandwidth" || name == "neighbor" || name == "precedence" || name == "signalling" || name == "tos")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Authentication()
    :
    key{YType::str, "key"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "key" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Bandwidth()
    :
    percent{YType::uint16, "percent"}
        ,
    value_(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value>())
    , mam(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam>())
{
    value_->parent = this;
    mam->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| (value_ !=  nullptr && value_->has_data())
	|| (mam !=  nullptr && mam->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| (value_ !=  nullptr && value_->has_operation())
	|| (mam !=  nullptr && mam->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value>();
        }
        return value_;
    }

    if(child_yang_name == "mam")
    {
        if(mam == nullptr)
        {
            mam = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam>();
        }
        return mam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(value_ != nullptr)
    {
        _children["value"] = value_;
    }

    if(mam != nullptr)
    {
        _children["mam"] = mam;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "mam" || name == "percent")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::Value()
    :
    value_{YType::uint32, "value"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "value"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::~Value()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::Mam()
    :
    max_reservable_bw(nullptr) // presence node
{

    yang_name = "mam"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::~Mam()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::has_data() const
{
    if (is_presence_container) return true;
    return (max_reservable_bw !=  nullptr && max_reservable_bw->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::has_operation() const
{
    return is_set(yfilter)
	|| (max_reservable_bw !=  nullptr && max_reservable_bw->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-reservable-bw")
    {
        if(max_reservable_bw == nullptr)
        {
            max_reservable_bw = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw>();
        }
        return max_reservable_bw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(max_reservable_bw != nullptr)
    {
        _children["max-reservable-bw"] = max_reservable_bw;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reservable-bw")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::MaxReservableBw()
    :
    value_{YType::uint32, "value"},
    bc0{YType::uint32, "bc0"},
    bc1{YType::uint32, "bc1"}
{

    yang_name = "max-reservable-bw"; yang_parent_name = "mam"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::~MaxReservableBw()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| bc0.is_set
	|| bc1.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(bc0.yfilter)
	|| ydk::is_set(bc1.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-reservable-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (bc0.is_set || is_set(bc0.yfilter)) leaf_name_data.push_back(bc0.get_name_leafdata());
    if (bc1.is_set || is_set(bc1.yfilter)) leaf_name_data.push_back(bc1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc0")
    {
        bc0 = value;
        bc0.value_namespace = name_space;
        bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1")
    {
        bc1 = value;
        bc1.value_namespace = name_space;
        bc1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "bc0")
    {
        bc0.yfilter = yfilter;
    }
    if(value_path == "bc1")
    {
        bc1.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "bc0" || name == "bc1")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::Neighbor()
    :
    acl_number{YType::uint8, "acl-number"}
{

    yang_name = "neighbor"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::~Neighbor()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return acl_number.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-number")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::Precedence()
    :
    conform{YType::uint8, "conform"},
    exceed{YType::uint8, "exceed"}
{

    yang_name = "precedence"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::~Precedence()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::has_data() const
{
    if (is_presence_container) return true;
    return conform.is_set
	|| exceed.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform" || name == "exceed")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Signalling()
    :
    dscp{YType::uint8, "dscp"}
        ,
    fast_local_repair(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair>())
    , hello(nullptr) // presence node
{
    fast_local_repair->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fast_local_repair != nullptr)
    {
        _children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        _children["hello"] = hello;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "dscp")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    wait_time{YType::uint16, "wait-time"}
{

    yang_name = "fast-local-repair"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    if (is_presence_container) return true;
    return wait_time.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-time")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    dscp{YType::uint8, "dscp"},
    graceful_restart{YType::empty, "graceful-restart"}
        ,
    refresh(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh>())
    , reroute(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute>())
{
    refresh->parent = this;
    reroute->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| dscp.is_set
	|| graceful_restart.is_set
	|| (refresh !=  nullptr && refresh->has_data())
	|| (reroute !=  nullptr && reroute->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(graceful_restart.yfilter)
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (reroute !=  nullptr && reroute->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (graceful_restart.is_set || is_set(graceful_restart.yfilter)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "reroute")
    {
        if(reroute == nullptr)
        {
            reroute = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute>();
        }
        return reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    if(reroute != nullptr)
    {
        _children["reroute"] = reroute;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
        graceful_restart.value_namespace = name_space;
        graceful_restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh" || name == "reroute" || name == "bfd" || name == "dscp" || name == "graceful-restart")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::~Refresh()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Reroute()
    :
    dscp{YType::uint8, "dscp"}
        ,
    refresh(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh>())
{
    refresh->parent = this;

    yang_name = "reroute"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::~Reroute()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh" || name == "dscp")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::~Refresh()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::Tos()
    :
    conform{YType::uint8, "conform"},
    exceed{YType::uint8, "exceed"}
{

    yang_name = "tos"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::~Tos()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::has_data() const
{
    if (is_presence_container) return true;
    return conform.is_set
	|| exceed.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform" || name == "exceed")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Wccp()
    :
    wccp_list(this, {"id"})
    , web_cache(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache>())
    , redirect(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect>())
    , vrf(this, {"name"})
{
    web_cache->parent = this;
    redirect->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::~Wccp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (web_cache !=  nullptr && web_cache->has_data())
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList>();
        ent_->parent = this;
        wccp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wccp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(web_cache != nullptr)
    {
        _children["web-cache"] = web_cache;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "redirect" || name == "vrf")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "id" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WccpList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::has_data() const
{
    if (is_presence_container) return true;
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Redirect()
    :
    exclude(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude>())
{
    exclude->parent = this;

    yang_name = "redirect"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::~Redirect()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return (exclude !=  nullptr && exclude->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exclude != nullptr)
    {
        _children["exclude"] = exclude;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::Exclude()
    :
    in{YType::empty, "in"}
{

    yang_name = "exclude"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::~Exclude()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Redirect::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    wccp_list(this, {"id"})
    , web_cache(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::~Vrf()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList>();
        ent_->parent = this;
        wccp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wccp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(web_cache != nullptr)
    {
        _children["web-cache"] = web_cache;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "name")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::~WccpList()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "id" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WccpList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::has_data() const
{
    if (is_presence_container) return true;
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ipv6()
    :
    unnumbered{YType::str, "unnumbered"},
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
        ,
    destination_guard(nullptr) // presence node
    , source_guard(nullptr) // presence node
    , dhcp(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp>())
    , address(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Address>())
    , nd(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd>())
    , tcp(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Tcp>())
    , traffic_filter(this, {"direction"})
    , flow(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Flow>())
    , no_pim(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::NoPim>())
    , pim(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Pim>())
    , ospf(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf>())
    , rip(this, {"id"})
    , crypto(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Crypto>())
{
    dhcp->parent = this;
    address->parent = this;
    nd->parent = this;
    tcp->parent = this;
    flow->parent = this;
    no_pim->parent = this;
    pim->parent = this;
    ospf->parent = this;
    crypto->parent = this;

    yang_name = "ipv6"; yang_parent_name = "FortyGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::~Ipv6()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_filter.len(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return unnumbered.is_set
	|| enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| unreachables.is_set
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (source_guard !=  nullptr && source_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (no_pim !=  nullptr && no_pim->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (crypto !=  nullptr && crypto->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<traffic_filter.len(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (source_guard !=  nullptr && source_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (no_pim !=  nullptr && no_pim->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "source-guard")
    {
        if(source_guard == nullptr)
        {
            source_guard = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard>();
        }
        return source_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-filter")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter>();
        ent_->parent = this;
        traffic_filter.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:no-pim")
    {
        if(no_pim == nullptr)
        {
            no_pim = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::NoPim>();
        }
        return no_pim;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospf:ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "Cisco-IOS-XE-rip:rip")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Rip>();
        ent_->parent = this;
        rip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Crypto>();
        }
        return crypto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_guard != nullptr)
    {
        _children["destination-guard"] = destination_guard;
    }

    if(source_guard != nullptr)
    {
        _children["source-guard"] = source_guard;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(nd != nullptr)
    {
        _children["nd"] = nd;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    count_ = 0;
    for (auto ent_ : traffic_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(flow != nullptr)
    {
        _children["Cisco-IOS-XE-flow:flow"] = flow;
    }

    if(no_pim != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:no-pim"] = no_pim;
    }

    if(pim != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:pim"] = pim;
    }

    if(ospf != nullptr)
    {
        _children["Cisco-IOS-XE-ospf:ospf"] = ospf;
    }

    count_ = 0;
    for (auto ent_ : rip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(crypto != nullptr)
    {
        _children["Cisco-IOS-XE-crypto:crypto"] = crypto;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-icmp:unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-guard" || name == "source-guard" || name == "dhcp" || name == "address" || name == "nd" || name == "tcp" || name == "traffic-filter" || name == "flow" || name == "no-pim" || name == "pim" || name == "ospf" || name == "rip" || name == "crypto" || name == "unnumbered" || name == "enable" || name == "mtu" || name == "redirects" || name == "unreachables")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "destination-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::DestinationGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::SourceGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "source-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::~SourceGuard()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::SourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client>())
    , server(this, {"word"})
    , guard(nullptr) // presence node
{
    client->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (client !=  nullptr && client->has_data())
	|| (guard !=  nullptr && guard->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:server")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:client"] = client;
    }

    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(guard != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:guard"] = guard;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server" || name == "guard")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Client()
    :
    request(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request>())
{
    request->parent = this;

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::~Client()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::has_data() const
{
    if (is_presence_container) return true;
    return (request !=  nullptr && request->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| (request !=  nullptr && request->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(request != nullptr)
    {
        _children["request"] = request;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::Request()
    :
    vendor{YType::empty, "vendor"}
{

    yang_name = "request"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::~Request()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Client::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::Server()
    :
    word{YType::str, "word"},
    preference{YType::uint8, "preference"}
{

    yang_name = "server"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| preference.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(preference.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "preference")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::Address()
    :
    dhcp(nullptr) // presence node
    , autoconfig(nullptr) // presence node
    , prefix_list(this, {"prefix"})
    , link_local_address(this, {"address"})
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::~Address()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_local_address.len(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (autoconfig !=  nullptr && autoconfig->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_local_address.len(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (autoconfig !=  nullptr && autoconfig->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "link-local-address")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress>();
        ent_->parent = this;
        link_local_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(autoconfig != nullptr)
    {
        _children["autoconfig"] = autoconfig;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : link_local_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "autoconfig" || name == "prefix-list" || name == "link-local-address")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return rapid_commit.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rapid_commit.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rapid-commit")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{

    yang_name = "autoconfig"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{

    yang_name = "prefix-list"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(anycast.yfilter)
	|| ydk::is_set(eui_64.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.yfilter)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.yfilter)) leaf_name_data.push_back(eui_64.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast")
    {
        anycast = value;
        anycast.value_namespace = name_space;
        anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
        eui_64.value_namespace = name_space;
        eui_64.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "anycast")
    {
        anycast.yfilter = yfilter;
    }
    if(value_path == "eui-64")
    {
        eui_64.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "anycast" || name == "eui-64")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{

    yang_name = "link-local-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(link_local.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.yfilter)) leaf_name_data.push_back(link_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local")
    {
        link_local = value;
        link_local.value_namespace = name_space;
        link_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "link-local")
    {
        link_local.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Address::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "link-local")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Nd()
    :
    managed_config_flag{YType::empty, "Cisco-IOS-XE-nd:managed-config-flag"}
        ,
    raguard(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard>())
    , autoconfig(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig>())
    , ra(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra>())
{
    raguard->parent = this;
    autoconfig->parent = this;
    ra->parent = this;

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::~Nd()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::has_data() const
{
    if (is_presence_container) return true;
    return managed_config_flag.is_set
	|| (raguard !=  nullptr && raguard->has_data())
	|| (autoconfig !=  nullptr && autoconfig->has_data())
	|| (ra !=  nullptr && ra->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managed_config_flag.yfilter)
	|| (raguard !=  nullptr && raguard->has_operation())
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (ra !=  nullptr && ra->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managed_config_flag.is_set || is_set(managed_config_flag.yfilter)) leaf_name_data.push_back(managed_config_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-nd:raguard")
    {
        if(raguard == nullptr)
        {
            raguard = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard>();
        }
        return raguard;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:ra")
    {
        if(ra == nullptr)
        {
            ra = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra>();
        }
        return ra;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(raguard != nullptr)
    {
        _children["Cisco-IOS-XE-nd:raguard"] = raguard;
    }

    if(autoconfig != nullptr)
    {
        _children["Cisco-IOS-XE-nd:autoconfig"] = autoconfig;
    }

    if(ra != nullptr)
    {
        _children["Cisco-IOS-XE-nd:ra"] = ra;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-nd:managed-config-flag")
    {
        managed_config_flag = value;
        managed_config_flag.value_namespace = name_space;
        managed_config_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managed-config-flag")
    {
        managed_config_flag.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raguard" || name == "autoconfig" || name == "ra" || name == "managed-config-flag")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::Raguard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "raguard"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::~Raguard()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:raguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Raguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::Autoconfig()
    :
    default_route{YType::empty, "default-route"},
    prefix{YType::empty, "prefix"}
{

    yang_name = "autoconfig"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::has_data() const
{
    if (is_presence_container) return true;
    return default_route.is_set
	|| prefix.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-route" || name == "prefix")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Ra()
    :
    suppress(nullptr) // presence node
{

    yang_name = "ra"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::~Ra()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::has_data() const
{
    if (is_presence_container) return true;
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:ra";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::Suppress()
    :
    all{YType::empty, "all"}
{

    yang_name = "suppress"; yang_parent_name = "ra"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::~Suppress()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Nd::Ra::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::~Tcp()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return adjust_mss.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::TrafficFilter()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"}
{

    yang_name = "traffic-filter"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::~TrafficFilter()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| access_list.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-filter";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Flow()
    :
    ingress{YType::empty, "ingress"},
    egress{YType::empty, "egress"}
        ,
    monitor(this, {"name"})
{

    yang_name = "flow"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Flow::~Flow()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return ingress.is_set
	|| egress.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor>();
        ent_->parent = this;
        monitor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "ingress" || name == "egress")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    output{YType::empty, "output"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
        ,
    sampler(this, {"direction"})
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| output.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler>();
        ent_->parent = this;
        sampler.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sampler.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampler" || name == "name" || name == "input" || name == "output" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "sampler"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::NoPim()
    :
    pim{YType::boolean, "pim"}
{

    yang_name = "no-pim"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::~NoPim()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::has_data() const
{
    if (is_presence_container) return true;
    return pim.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:no-pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::NoPim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Pim()
    :
    bfd{YType::empty, "bfd"},
    dr_priority{YType::uint32, "dr-priority"}
        ,
    bsr(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr>())
{
    bsr->parent = this;

    yang_name = "pim"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Pim::~Pim()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Pim::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| dr_priority.is_set
	|| (bsr !=  nullptr && bsr->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| (bsr !=  nullptr && bsr->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr>();
        }
        return bsr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bsr != nullptr)
    {
        _children["bsr"] = bsr;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr" || name == "bfd" || name == "dr-priority")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::Bsr()
    :
    border{YType::empty, "border"}
{

    yang_name = "bsr"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::~Bsr()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::has_data() const
{
    if (is_presence_container) return true;
    return border.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Pim::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Ospf()
    :
    cost{YType::uint16, "cost"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    process(this, {"id"})
    , authentication(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication>())
    , bfd(nullptr) // presence node
    , database_filter(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter>())
    , demand_circuit(nullptr) // presence node
    , encryption(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption>())
    , flood_reduction(nullptr) // presence node
    , mtu_ignore(nullptr) // presence node
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network>())
    , shutdown(nullptr) // presence node
{
    authentication->parent = this;
    database_filter->parent = this;
    encryption->parent = this;
    network->parent = this;

    yang_name = "ospf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::~Ospf()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return cost.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network>();
        }
        return network;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    if(flood_reduction != nullptr)
    {
        _children["flood-reduction"] = flood_reduction;
    }

    if(mtu_ignore != nullptr)
    {
        _children["mtu-ignore"] = mtu_ignore;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "authentication" || name == "bfd" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "flood-reduction" || name == "mtu-ignore" || name == "neighbor" || name == "network" || name == "shutdown" || name == "cost" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::Process()
    :
    id{YType::uint16, "id"},
    area{YType::str, "area"},
    instance{YType::str, "instance"}
{

    yang_name = "process"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::~Process()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| area.is_set
	|| instance.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "area" || name == "instance")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Authentication()
    :
    null{YType::empty, "null"}
        ,
    ipsec(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
        ,
    md5(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5>())
    , sha1(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;
    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        _children["sha1"] = sha1;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "spi")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "sha1"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::~Bfd()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Encryption()
    :
    null{YType::empty, "null"}
        ,
    ipsec(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "encryption"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::~Encryption()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"},
    esp{YType::empty, "esp"}
        ,
    ipsec_3des(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des>())
    , aes_cbc(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc>())
{
    ipsec_3des->parent = this;
    aes_cbc->parent = this;

    yang_name = "ipsec"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::~Ipsec()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| esp.is_set
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_data())
	|| (aes_cbc !=  nullptr && aes_cbc->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_operation())
	|| (aes_cbc !=  nullptr && aes_cbc->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec_3des")
    {
        if(ipsec_3des == nullptr)
        {
            ipsec_3des = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des>();
        }
        return ipsec_3des;
    }

    if(child_yang_name == "aes-cbc")
    {
        if(aes_cbc == nullptr)
        {
            aes_cbc = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc>();
        }
        return aes_cbc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec_3des != nullptr)
    {
        _children["ipsec_3des"] = ipsec_3des;
    }

    if(aes_cbc != nullptr)
    {
        _children["aes-cbc"] = aes_cbc;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec_3des" || name == "aes-cbc" || name == "spi" || name == "esp")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::Ipsec3des()
    :
    key_string(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString>())
{
    key_string->parent = this;

    yang_name = "ipsec_3des"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::~Ipsec3des()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec_3des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "ipsec_3des"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::~KeyString()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc()
    :
    aes_cbc_128(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128>())
    , aes_192(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192>())
    , aes_256(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256>())
{
    aes_cbc_128->parent = this;
    aes_192->parent = this;
    aes_256->parent = this;

    yang_name = "aes-cbc"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::~AesCbc()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::has_data() const
{
    if (is_presence_container) return true;
    return (aes_cbc_128 !=  nullptr && aes_cbc_128->has_data())
	|| (aes_192 !=  nullptr && aes_192->has_data())
	|| (aes_256 !=  nullptr && aes_256->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::has_operation() const
{
    return is_set(yfilter)
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_operation())
	|| (aes_192 !=  nullptr && aes_192->has_operation())
	|| (aes_256 !=  nullptr && aes_256->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-cbc-128")
    {
        if(aes_cbc_128 == nullptr)
        {
            aes_cbc_128 = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128>();
        }
        return aes_cbc_128;
    }

    if(child_yang_name == "aes-192")
    {
        if(aes_192 == nullptr)
        {
            aes_192 = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192>();
        }
        return aes_192;
    }

    if(child_yang_name == "aes-256")
    {
        if(aes_256 == nullptr)
        {
            aes_256 = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256>();
        }
        return aes_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aes_cbc_128 != nullptr)
    {
        _children["aes-cbc-128"] = aes_cbc_128;
    }

    if(aes_192 != nullptr)
    {
        _children["aes-192"] = aes_192;
    }

    if(aes_256 != nullptr)
    {
        _children["aes-256"] = aes_256;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc-128" || name == "aes-192" || name == "aes-256")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-cbc-128"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-192"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-256"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
        ,
    database_filter(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::~Neighbor()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
        ,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::~Network()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_multipoint != nullptr)
    {
        _children["point-to-multipoint"] = point_to_multipoint;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::has_data() const
{
    if (is_presence_container) return true;
    return non_broadcast.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::~Shutdown()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Rip::Rip()
    :
    id{YType::str, "id"},
    enable{YType::empty, "enable"}
        ,
    default_information(std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation>())
{
    default_information->parent = this;

    yang_name = "rip"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Rip::~Rip()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| enable.is_set
	|| (default_information !=  nullptr && default_information->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_information !=  nullptr && default_information->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation>();
        }
        return default_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-information" || name == "id" || name == "enable")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::DefaultInformation()
    :
    route{YType::enumeration, "route"},
    metric{YType::uint8, "metric"}
{

    yang_name = "default-information"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::~DefaultInformation()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| metric.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "metric")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::Crypto()
    :
    map{YType::str, "map"}
{

    yang_name = "crypto"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::~Crypto()
{
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Ipv6::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Logging::Logging()
    :
    event(std::make_shared<Native::Interface::FortyGigabitEthernet::Logging::Event>())
{
    event->parent = this;

    yang_name = "logging"; yang_parent_name = "FortyGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Logging::~Logging()
{
}

bool Native::Interface::FortyGigabitEthernet::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::FortyGigabitEthernet::Logging::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event != nullptr)
    {
        _children["event"] = event;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Logging::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    trunk_status{YType::empty, "trunk-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"}
        ,
    spanning_tree(nullptr) // presence node
    , subif_link_status(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Logging::Event::~Event()
{
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| link_status.is_set
	|| trunk_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(trunk_status.yfilter)
	|| ydk::is_set(nfas_status.yfilter)
	|| ydk::is_set(power_inline_status.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Logging::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.yfilter)) leaf_name_data.push_back(trunk_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.yfilter)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.yfilter)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spanning_tree != nullptr)
    {
        _children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        _children["subif-link-status"] = subif_link_status;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Logging::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
        trunk_status.value_namespace = name_space;
        trunk_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
        nfas_status.value_namespace = name_space;
        nfas_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
        power_inline_status.value_namespace = name_space;
        power_inline_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Logging::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "trunk-status")
    {
        trunk_status.yfilter = yfilter;
    }
    if(value_path == "nfas-status")
    {
        nfas_status.yfilter = yfilter;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "subif-link-status" || name == "bundle-status" || name == "link-status" || name == "trunk-status" || name == "nfas-status" || name == "power-inline-status" || name == "status")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{

    yang_name = "spanning-tree"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{

    yang_name = "subif-link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::has_data() const
{
    if (is_presence_container) return true;
    return ignore_bulk.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bulk.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.yfilter)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
        ignore_bulk.value_namespace = name_space;
        ignore_bulk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Logging::Event::SubifLinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bulk")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Mdix::Mdix()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "mdix"; yang_parent_name = "FortyGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Mdix::~Mdix()
{
}

bool Native::Interface::FortyGigabitEthernet::Mdix::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Mdix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Mdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Mdix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Mdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Mdix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Mdix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Mdix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Mdix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Mop::Mop()
    :
    enabled{YType::boolean, "enabled"},
    sysid{YType::boolean, "sysid"}
{

    yang_name = "mop"; yang_parent_name = "FortyGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Mop::~Mop()
{
}

bool Native::Interface::FortyGigabitEthernet::Mop::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| sysid.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Mop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(sysid.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Mop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Mop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Mop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Mop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Mop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysid")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Mop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "sysid")
    {
        sysid.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Mop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "sysid")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::InterfaceQos::InterfaceQos()
    :
    trust(std::make_shared<Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust>())
{
    trust->parent = this;

    yang_name = "interface_qos"; yang_parent_name = "FortyGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::InterfaceQos::~InterfaceQos()
{
}

bool Native::Interface::FortyGigabitEthernet::InterfaceQos::has_data() const
{
    if (is_presence_container) return true;
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::FortyGigabitEthernet::InterfaceQos::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::InterfaceQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::InterfaceQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::InterfaceQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::InterfaceQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::InterfaceQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::InterfaceQos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::InterfaceQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "interface_qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::~Trust()
{
}

bool Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Source::Source()
    :
    template_(std::make_shared<Native::Interface::FortyGigabitEthernet::Source::Template>())
{
    template_->parent = this;

    yang_name = "source"; yang_parent_name = "FortyGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Source::~Source()
{
}

bool Native::Interface::FortyGigabitEthernet::Source::has_data() const
{
    if (is_presence_container) return true;
    return (template_ !=  nullptr && template_->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Source::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Source::Template>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Source::Template::Template()
    :
    template_name(this, {"template_name"})
{

    yang_name = "template"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Source::Template::~Template()
{
}

bool Native::Interface::FortyGigabitEthernet::Source::Template::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<template_name.len(); index++)
    {
        if(template_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::FortyGigabitEthernet::Source::Template::has_operation() const
{
    for (std::size_t index=0; index<template_name.len(); index++)
    {
        if(template_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Source::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Source::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Source::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template-name")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName>();
        ent_->parent = this;
        template_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Source::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : template_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Source::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FortyGigabitEthernet::Source::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FortyGigabitEthernet::Source::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::TemplateName()
    :
    template_name{YType::str, "template-name"},
    merge{YType::empty, "merge"}
{

    yang_name = "template-name"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::~TemplateName()
{
}

bool Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| merge.is_set;
}

bool Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(merge.yfilter);
}

std::string Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template-name";
    ADD_KEY_TOKEN(template_name, "template-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (merge.is_set || is_set(merge.yfilter)) leaf_name_data.push_back(merge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge")
    {
        merge = value;
        merge.value_namespace = name_space;
        merge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "merge")
    {
        merge.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Source::Template::TemplateName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "merge")
        return true;
    return false;
}

Native::Interface::FortyGigabitEthernet::Standby::Standby()
    :
    version{YType::enumeration, "version"},
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"}
        ,
    delay(std::make_shared<Native::Interface::FortyGigabitEthernet::Standby::Delay>())
    , use_bia(nullptr) // presence node
    , standby_list(this, {"group_number"})
{
    delay->parent = this;

    yang_name = "standby"; yang_parent_name = "FortyGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::FortyGigabitEthernet::Standby::~Standby()
{
}

bool Native::Interface::FortyGigabitEthernet::Standby::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<standby_list.len(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return version.is_set
	|| bfd.is_set
	|| mac_refresh.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::FortyGigabitEthernet::Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.len(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::FortyGigabitEthernet::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FortyGigabitEthernet::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::FortyGigabitEthernet::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::FortyGigabitEthernet::Standby::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::FortyGigabitEthernet::Standby::UseBia>();
        }
        return use_bia;
    }

    if(child_yang_name == "standby-list")
    {
        auto ent_ = std::make_shared<Native::Interface::FortyGigabitEthernet::Standby::StandbyList>();
        ent_->parent = this;
        standby_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::FortyGigabitEthernet::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(use_bia != nullptr)
    {
        _children["use-bia"] = use_bia;
    }

    count_ = 0;
    for (auto ent_ : standby_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::FortyGigabitEthernet::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
        mac_refresh.value_namespace = name_space;
        mac_refresh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FortyGigabitEthernet::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
}

bool Native::Interface::FortyGigabitEthernet::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "use-bia" || name == "standby-list" || name == "version" || name == "bfd" || name == "mac-refresh")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::PolicyAction::drop {0, "drop"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::PolicyAction::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::PolicyAction::keep {2, "keep"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Dhcp::Relay::Information::PolicyAction::replace {3, "replace"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::ReachableVia::any {0, "any"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Verify::Unicast::Source::ReachableVia::rx {1, "rx"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Flow::Monitor::Sampler::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::Name::Y__STAR__ {0, "*"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Igmp::StaticGroup::Groups::Source::ssm_map {0, "ssm-map"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Ospf::Network::broadcast {0, "broadcast"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Ospf::Network::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Ospf::Network::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Ospf::Network::point_to_point {3, "point-to-point"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::TrafficFilter::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Flow::Monitor::Sampler::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3des::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::Route::only {0, "only"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Ipv6::Rip::DefaultInformation::Route::originate {1, "originate"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::InterfaceQos::Trust::Device::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Standby::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::FortyGigabitEthernet::Standby::Version::Y_2 {1, "2"};


}
}


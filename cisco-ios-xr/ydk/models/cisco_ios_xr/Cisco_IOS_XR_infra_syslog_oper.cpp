
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_syslog_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_syslog_oper {

GetSyslog::GetSyslog()
    :
    input(std::make_shared<GetSyslog::Input>())
    , output(std::make_shared<GetSyslog::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "get-syslog"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

GetSyslog::~GetSyslog()
{
}

bool GetSyslog::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetSyslog::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetSyslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetSyslog::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetSyslog::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::get_children() const
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

void GetSyslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetSyslog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> GetSyslog::clone_ptr() const
{
    return std::make_shared<GetSyslog>();
}

std::string GetSyslog::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GetSyslog::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GetSyslog::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GetSyslog::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GetSyslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

GetSyslog::Input::Input()
    :
    filters(std::make_shared<GetSyslog::Input::Filters>())
{
    filters->parent = this;

    yang_name = "input"; yang_parent_name = "get-syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSyslog::Input::~Input()
{
}

bool GetSyslog::Input::has_data() const
{
    if (is_presence_container) return true;
    return (filters !=  nullptr && filters->has_data());
}

bool GetSyslog::Input::has_operation() const
{
    return is_set(yfilter)
	|| (filters !=  nullptr && filters->has_operation());
}

std::string GetSyslog::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSyslog::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filters")
    {
        if(filters == nullptr)
        {
            filters = std::make_shared<GetSyslog::Input::Filters>();
        }
        return filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filters != nullptr)
    {
        _children["filters"] = filters;
    }

    return _children;
}

void GetSyslog::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetSyslog::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetSyslog::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filters")
        return true;
    return false;
}

GetSyslog::Input::Filters::Filters()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"}
{

    yang_name = "filters"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSyslog::Input::Filters::~Filters()
{
}

bool GetSyslog::Input::Filters::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set;
}

bool GetSyslog::Input::Filters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter);
}

std::string GetSyslog::Input::Filters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog/input/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSyslog::Input::Filters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::Input::Filters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::Input::Filters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::Input::Filters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetSyslog::Input::Filters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
}

void GetSyslog::Input::Filters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
}

bool GetSyslog::Input::Filters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time")
        return true;
    return false;
}

GetSyslog::Output::Output()
    :
    data(std::make_shared<GetSyslog::Output::Data>())
{
    data->parent = this;

    yang_name = "output"; yang_parent_name = "get-syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSyslog::Output::~Output()
{
}

bool GetSyslog::Output::has_data() const
{
    if (is_presence_container) return true;
    return (data !=  nullptr && data->has_data());
}

bool GetSyslog::Output::has_operation() const
{
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GetSyslog::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSyslog::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GetSyslog::Output::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void GetSyslog::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetSyslog::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetSyslog::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

GetSyslog::Output::Data::Data()
    :
    syslog(std::make_shared<GetSyslog::Output::Data::Syslog>())
{
    syslog->parent = this;

    yang_name = "data"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSyslog::Output::Data::~Data()
{
}

bool GetSyslog::Output::Data::has_data() const
{
    if (is_presence_container) return true;
    return (syslog !=  nullptr && syslog->has_data());
}

bool GetSyslog::Output::Data::has_operation() const
{
    return is_set(yfilter)
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string GetSyslog::Output::Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog/output/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSyslog::Output::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::Output::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::Output::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<GetSyslog::Output::Data::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::Output::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    return _children;
}

void GetSyslog::Output::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetSyslog::Output::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetSyslog::Output::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslog")
        return true;
    return false;
}

GetSyslog::Output::Data::Syslog::Syslog()
    :
    messages(std::make_shared<GetSyslog::Output::Data::Syslog::Messages>())
{
    messages->parent = this;

    yang_name = "syslog"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSyslog::Output::Data::Syslog::~Syslog()
{
}

bool GetSyslog::Output::Data::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return (messages !=  nullptr && messages->has_data());
}

bool GetSyslog::Output::Data::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| (messages !=  nullptr && messages->has_operation());
}

std::string GetSyslog::Output::Data::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog/output/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSyslog::Output::Data::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::Output::Data::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::Output::Data::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "messages")
    {
        if(messages == nullptr)
        {
            messages = std::make_shared<GetSyslog::Output::Data::Syslog::Messages>();
        }
        return messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::Output::Data::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(messages != nullptr)
    {
        _children["messages"] = messages;
    }

    return _children;
}

void GetSyslog::Output::Data::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetSyslog::Output::Data::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetSyslog::Output::Data::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "messages")
        return true;
    return false;
}

GetSyslog::Output::Data::Syslog::Messages::Messages()
    :
    message(this, {"message_id"})
{

    yang_name = "messages"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSyslog::Output::Data::Syslog::Messages::~Messages()
{
}

bool GetSyslog::Output::Data::Syslog::Messages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return false;
}

bool GetSyslog::Output::Data::Syslog::Messages::has_operation() const
{
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GetSyslog::Output::Data::Syslog::Messages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog/output/data/syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSyslog::Output::Data::Syslog::Messages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::Output::Data::Syslog::Messages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::Output::Data::Syslog::Messages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        auto ent_ = std::make_shared<GetSyslog::Output::Data::Syslog::Messages::Message>();
        ent_->parent = this;
        message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::Output::Data::Syslog::Messages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetSyslog::Output::Data::Syslog::Messages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetSyslog::Output::Data::Syslog::Messages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetSyslog::Output::Data::Syslog::Messages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

GetSyslog::Output::Data::Syslog::Messages::Message::Message()
    :
    message_id{YType::uint32, "message-id"},
    card_type{YType::str, "card-type"},
    node_name{YType::str, "node-name"},
    time_stamp{YType::uint64, "time-stamp"},
    time_of_day{YType::str, "time-of-day"},
    time_zone{YType::str, "time-zone"},
    process_name{YType::str, "process-name"},
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_name{YType::str, "message-name"},
    severity{YType::enumeration, "severity"},
    text{YType::str, "text"}
{

    yang_name = "message"; yang_parent_name = "messages"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSyslog::Output::Data::Syslog::Messages::Message::~Message()
{
}

bool GetSyslog::Output::Data::Syslog::Messages::Message::has_data() const
{
    if (is_presence_container) return true;
    return message_id.is_set
	|| card_type.is_set
	|| node_name.is_set
	|| time_stamp.is_set
	|| time_of_day.is_set
	|| time_zone.is_set
	|| process_name.is_set
	|| category.is_set
	|| group.is_set
	|| message_name.is_set
	|| severity.is_set
	|| text.is_set;
}

bool GetSyslog::Output::Data::Syslog::Messages::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_id.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(time_of_day.yfilter)
	|| ydk::is_set(time_zone.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(message_name.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string GetSyslog::Output::Data::Syslog::Messages::Message::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:get-syslog/output/data/syslog/messages/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSyslog::Output::Data::Syslog::Messages::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    ADD_KEY_TOKEN(message_id, "message-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSyslog::Output::Data::Syslog::Messages::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (time_of_day.is_set || is_set(time_of_day.yfilter)) leaf_name_data.push_back(time_of_day.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.yfilter)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_name.is_set || is_set(message_name.yfilter)) leaf_name_data.push_back(message_name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetSyslog::Output::Data::Syslog::Messages::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetSyslog::Output::Data::Syslog::Messages::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetSyslog::Output::Data::Syslog::Messages::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day")
    {
        time_of_day = value;
        time_of_day.value_namespace = name_space;
        time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
        time_zone.value_namespace = name_space;
        time_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-name")
    {
        message_name = value;
        message_name.value_namespace = name_space;
        message_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void GetSyslog::Output::Data::Syslog::Messages::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "time-of-day")
    {
        time_of_day.yfilter = yfilter;
    }
    if(value_path == "time-zone")
    {
        time_zone.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "message-name")
    {
        message_name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool GetSyslog::Output::Data::Syslog::Messages::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-id" || name == "card-type" || name == "node-name" || name == "time-stamp" || name == "time-of-day" || name == "time-zone" || name == "process-name" || name == "category" || name == "group" || name == "message-name" || name == "severity" || name == "text")
        return true;
    return false;
}

Logging::Logging()
    :
    history(std::make_shared<Logging::History>())
{
    history->parent = this;

    yang_name = "logging"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Logging::~Logging()
{
}

bool Logging::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool Logging::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Logging::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Logging::clone_ptr() const
{
    return std::make_shared<Logging>();
}

std::string Logging::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Logging::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Logging::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Logging::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

Logging::History::History()
    :
    properties{YType::str, "properties"},
    message{YType::str, "message"}
{

    yang_name = "history"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Logging::History::~History()
{
}

bool Logging::History::has_data() const
{
    if (is_presence_container) return true;
    return properties.is_set
	|| message.is_set;
}

bool Logging::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(properties.yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string Logging::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Logging::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Logging::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (properties.is_set || is_set(properties.yfilter)) leaf_name_data.push_back(properties.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Logging::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Logging::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Logging::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "properties")
    {
        properties = value;
        properties.value_namespace = name_space;
        properties.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Logging::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "properties")
    {
        properties.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Logging::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "properties" || name == "message")
        return true;
    return false;
}

Syslog::Syslog()
    :
    logging_files(std::make_shared<Syslog::LoggingFiles>())
    , an_remote_servers(std::make_shared<Syslog::AnRemoteServers>())
    , messages(std::make_shared<Syslog::Messages>())
    , logging_statistics(std::make_shared<Syslog::LoggingStatistics>())
{
    logging_files->parent = this;
    an_remote_servers->parent = this;
    messages->parent = this;
    logging_statistics->parent = this;

    yang_name = "syslog"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Syslog::~Syslog()
{
}

bool Syslog::has_data() const
{
    if (is_presence_container) return true;
    return (logging_files !=  nullptr && logging_files->has_data())
	|| (an_remote_servers !=  nullptr && an_remote_servers->has_data())
	|| (messages !=  nullptr && messages->has_data())
	|| (logging_statistics !=  nullptr && logging_statistics->has_data());
}

bool Syslog::has_operation() const
{
    return is_set(yfilter)
	|| (logging_files !=  nullptr && logging_files->has_operation())
	|| (an_remote_servers !=  nullptr && an_remote_servers->has_operation())
	|| (messages !=  nullptr && messages->has_operation())
	|| (logging_statistics !=  nullptr && logging_statistics->has_operation());
}

std::string Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging-files")
    {
        if(logging_files == nullptr)
        {
            logging_files = std::make_shared<Syslog::LoggingFiles>();
        }
        return logging_files;
    }

    if(child_yang_name == "an-remote-servers")
    {
        if(an_remote_servers == nullptr)
        {
            an_remote_servers = std::make_shared<Syslog::AnRemoteServers>();
        }
        return an_remote_servers;
    }

    if(child_yang_name == "messages")
    {
        if(messages == nullptr)
        {
            messages = std::make_shared<Syslog::Messages>();
        }
        return messages;
    }

    if(child_yang_name == "logging-statistics")
    {
        if(logging_statistics == nullptr)
        {
            logging_statistics = std::make_shared<Syslog::LoggingStatistics>();
        }
        return logging_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging_files != nullptr)
    {
        _children["logging-files"] = logging_files;
    }

    if(an_remote_servers != nullptr)
    {
        _children["an-remote-servers"] = an_remote_servers;
    }

    if(messages != nullptr)
    {
        _children["messages"] = messages;
    }

    if(logging_statistics != nullptr)
    {
        _children["logging-statistics"] = logging_statistics;
    }

    return _children;
}

void Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Syslog::clone_ptr() const
{
    return std::make_shared<Syslog>();
}

std::string Syslog::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Syslog::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Syslog::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Syslog::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging-files" || name == "an-remote-servers" || name == "messages" || name == "logging-statistics")
        return true;
    return false;
}

Syslog::LoggingFiles::LoggingFiles()
    :
    file_log_detail(this, {})
{

    yang_name = "logging-files"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingFiles::~LoggingFiles()
{
}

bool Syslog::LoggingFiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<file_log_detail.len(); index++)
    {
        if(file_log_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::LoggingFiles::has_operation() const
{
    for (std::size_t index=0; index<file_log_detail.len(); index++)
    {
        if(file_log_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::LoggingFiles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingFiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-files";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingFiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingFiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file-log-detail")
    {
        auto ent_ = std::make_shared<Syslog::LoggingFiles::FileLogDetail>();
        ent_->parent = this;
        file_log_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingFiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : file_log_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::LoggingFiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::LoggingFiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::LoggingFiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-log-detail")
        return true;
    return false;
}

Syslog::LoggingFiles::FileLogDetail::FileLogDetail()
    :
    file_path{YType::str, "file-path"},
    file_name{YType::str, "file-name"}
{

    yang_name = "file-log-detail"; yang_parent_name = "logging-files"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingFiles::FileLogDetail::~FileLogDetail()
{
}

bool Syslog::LoggingFiles::FileLogDetail::has_data() const
{
    if (is_presence_container) return true;
    return file_path.is_set
	|| file_name.is_set;
}

bool Syslog::LoggingFiles::FileLogDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_path.yfilter)
	|| ydk::is_set(file_name.yfilter);
}

std::string Syslog::LoggingFiles::FileLogDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-files/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingFiles::FileLogDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-log-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingFiles::FileLogDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_path.is_set || is_set(file_path.yfilter)) leaf_name_data.push_back(file_path.get_name_leafdata());
    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingFiles::FileLogDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingFiles::FileLogDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingFiles::FileLogDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-path")
    {
        file_path = value;
        file_path.value_namespace = name_space;
        file_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingFiles::FileLogDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-path")
    {
        file_path.yfilter = yfilter;
    }
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
}

bool Syslog::LoggingFiles::FileLogDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-path" || name == "file-name")
        return true;
    return false;
}

Syslog::AnRemoteServers::AnRemoteServers()
    :
    an_remote_log_server(this, {})
{

    yang_name = "an-remote-servers"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::AnRemoteServers::~AnRemoteServers()
{
}

bool Syslog::AnRemoteServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<an_remote_log_server.len(); index++)
    {
        if(an_remote_log_server[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::AnRemoteServers::has_operation() const
{
    for (std::size_t index=0; index<an_remote_log_server.len(); index++)
    {
        if(an_remote_log_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::AnRemoteServers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::AnRemoteServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "an-remote-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::AnRemoteServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::AnRemoteServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "an-remote-log-server")
    {
        auto ent_ = std::make_shared<Syslog::AnRemoteServers::AnRemoteLogServer>();
        ent_->parent = this;
        an_remote_log_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::AnRemoteServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : an_remote_log_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::AnRemoteServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::AnRemoteServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::AnRemoteServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "an-remote-log-server")
        return true;
    return false;
}

Syslog::AnRemoteServers::AnRemoteLogServer::AnRemoteLogServer()
    :
    ip_address{YType::str, "ip-address"},
    vrf_name{YType::str, "vrf-name"},
    vrf_severity{YType::str, "vrf-severity"},
    rh_discriminator{YType::str, "rh-discriminator"}
{

    yang_name = "an-remote-log-server"; yang_parent_name = "an-remote-servers"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::AnRemoteServers::AnRemoteLogServer::~AnRemoteLogServer()
{
}

bool Syslog::AnRemoteServers::AnRemoteLogServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| vrf_name.is_set
	|| vrf_severity.is_set
	|| rh_discriminator.is_set;
}

bool Syslog::AnRemoteServers::AnRemoteLogServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_severity.yfilter)
	|| ydk::is_set(rh_discriminator.yfilter);
}

std::string Syslog::AnRemoteServers::AnRemoteLogServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/an-remote-servers/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::AnRemoteServers::AnRemoteLogServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "an-remote-log-server";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::AnRemoteServers::AnRemoteLogServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_severity.is_set || is_set(vrf_severity.yfilter)) leaf_name_data.push_back(vrf_severity.get_name_leafdata());
    if (rh_discriminator.is_set || is_set(rh_discriminator.yfilter)) leaf_name_data.push_back(rh_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::AnRemoteServers::AnRemoteLogServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::AnRemoteServers::AnRemoteLogServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::AnRemoteServers::AnRemoteLogServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-severity")
    {
        vrf_severity = value;
        vrf_severity.value_namespace = name_space;
        vrf_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rh-discriminator")
    {
        rh_discriminator = value;
        rh_discriminator.value_namespace = name_space;
        rh_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::AnRemoteServers::AnRemoteLogServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-severity")
    {
        vrf_severity.yfilter = yfilter;
    }
    if(value_path == "rh-discriminator")
    {
        rh_discriminator.yfilter = yfilter;
    }
}

bool Syslog::AnRemoteServers::AnRemoteLogServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf-name" || name == "vrf-severity" || name == "rh-discriminator")
        return true;
    return false;
}

Syslog::Messages::Messages()
    :
    message(this, {"message_id"})
{

    yang_name = "messages"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Messages::~Messages()
{
}

bool Syslog::Messages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Messages::has_operation() const
{
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Messages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Messages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Messages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Messages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        auto ent_ = std::make_shared<Syslog::Messages::Message>();
        ent_->parent = this;
        message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Messages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Messages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Messages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Messages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

Syslog::Messages::Message::Message()
    :
    message_id{YType::uint32, "message-id"},
    card_type{YType::str, "card-type"},
    node_name{YType::str, "node-name"},
    time_stamp{YType::uint64, "time-stamp"},
    time_of_day{YType::str, "time-of-day"},
    time_zone{YType::str, "time-zone"},
    process_name{YType::str, "process-name"},
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_name{YType::str, "message-name"},
    severity{YType::enumeration, "severity"},
    text{YType::str, "text"}
{

    yang_name = "message"; yang_parent_name = "messages"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Messages::Message::~Message()
{
}

bool Syslog::Messages::Message::has_data() const
{
    if (is_presence_container) return true;
    return message_id.is_set
	|| card_type.is_set
	|| node_name.is_set
	|| time_stamp.is_set
	|| time_of_day.is_set
	|| time_zone.is_set
	|| process_name.is_set
	|| category.is_set
	|| group.is_set
	|| message_name.is_set
	|| severity.is_set
	|| text.is_set;
}

bool Syslog::Messages::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_id.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(time_of_day.yfilter)
	|| ydk::is_set(time_zone.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(message_name.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Syslog::Messages::Message::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/messages/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Messages::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    ADD_KEY_TOKEN(message_id, "message-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Messages::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (time_of_day.is_set || is_set(time_of_day.yfilter)) leaf_name_data.push_back(time_of_day.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.yfilter)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_name.is_set || is_set(message_name.yfilter)) leaf_name_data.push_back(message_name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Messages::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Messages::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Messages::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day")
    {
        time_of_day = value;
        time_of_day.value_namespace = name_space;
        time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
        time_zone.value_namespace = name_space;
        time_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-name")
    {
        message_name = value;
        message_name.value_namespace = name_space;
        message_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Messages::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "time-of-day")
    {
        time_of_day.yfilter = yfilter;
    }
    if(value_path == "time-zone")
    {
        time_zone.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "message-name")
    {
        message_name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Syslog::Messages::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-id" || name == "card-type" || name == "node-name" || name == "time-stamp" || name == "time-of-day" || name == "time-zone" || name == "process-name" || name == "category" || name == "group" || name == "message-name" || name == "severity" || name == "text")
        return true;
    return false;
}

Syslog::LoggingStatistics::LoggingStatistics()
    :
    logging_stats(std::make_shared<Syslog::LoggingStatistics::LoggingStats>())
    , console_logging_stats(std::make_shared<Syslog::LoggingStatistics::ConsoleLoggingStats>())
    , monitor_logging_stats(std::make_shared<Syslog::LoggingStatistics::MonitorLoggingStats>())
    , trap_logging_stats(std::make_shared<Syslog::LoggingStatistics::TrapLoggingStats>())
    , buffer_logging_stats(std::make_shared<Syslog::LoggingStatistics::BufferLoggingStats>())
    , remote_logging_stat(this, {})
    , tls_remote_logging_stat(this, {})
    , file_logging_stat(this, {})
{
    logging_stats->parent = this;
    console_logging_stats->parent = this;
    monitor_logging_stats->parent = this;
    trap_logging_stats->parent = this;
    buffer_logging_stats->parent = this;

    yang_name = "logging-statistics"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::~LoggingStatistics()
{
}

bool Syslog::LoggingStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_logging_stat.len(); index++)
    {
        if(remote_logging_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tls_remote_logging_stat.len(); index++)
    {
        if(tls_remote_logging_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<file_logging_stat.len(); index++)
    {
        if(file_logging_stat[index]->has_data())
            return true;
    }
    return (logging_stats !=  nullptr && logging_stats->has_data())
	|| (console_logging_stats !=  nullptr && console_logging_stats->has_data())
	|| (monitor_logging_stats !=  nullptr && monitor_logging_stats->has_data())
	|| (trap_logging_stats !=  nullptr && trap_logging_stats->has_data())
	|| (buffer_logging_stats !=  nullptr && buffer_logging_stats->has_data());
}

bool Syslog::LoggingStatistics::has_operation() const
{
    for (std::size_t index=0; index<remote_logging_stat.len(); index++)
    {
        if(remote_logging_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tls_remote_logging_stat.len(); index++)
    {
        if(tls_remote_logging_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<file_logging_stat.len(); index++)
    {
        if(file_logging_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (logging_stats !=  nullptr && logging_stats->has_operation())
	|| (console_logging_stats !=  nullptr && console_logging_stats->has_operation())
	|| (monitor_logging_stats !=  nullptr && monitor_logging_stats->has_operation())
	|| (trap_logging_stats !=  nullptr && trap_logging_stats->has_operation())
	|| (buffer_logging_stats !=  nullptr && buffer_logging_stats->has_operation());
}

std::string Syslog::LoggingStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging-stats")
    {
        if(logging_stats == nullptr)
        {
            logging_stats = std::make_shared<Syslog::LoggingStatistics::LoggingStats>();
        }
        return logging_stats;
    }

    if(child_yang_name == "console-logging-stats")
    {
        if(console_logging_stats == nullptr)
        {
            console_logging_stats = std::make_shared<Syslog::LoggingStatistics::ConsoleLoggingStats>();
        }
        return console_logging_stats;
    }

    if(child_yang_name == "monitor-logging-stats")
    {
        if(monitor_logging_stats == nullptr)
        {
            monitor_logging_stats = std::make_shared<Syslog::LoggingStatistics::MonitorLoggingStats>();
        }
        return monitor_logging_stats;
    }

    if(child_yang_name == "trap-logging-stats")
    {
        if(trap_logging_stats == nullptr)
        {
            trap_logging_stats = std::make_shared<Syslog::LoggingStatistics::TrapLoggingStats>();
        }
        return trap_logging_stats;
    }

    if(child_yang_name == "buffer-logging-stats")
    {
        if(buffer_logging_stats == nullptr)
        {
            buffer_logging_stats = std::make_shared<Syslog::LoggingStatistics::BufferLoggingStats>();
        }
        return buffer_logging_stats;
    }

    if(child_yang_name == "remote-logging-stat")
    {
        auto ent_ = std::make_shared<Syslog::LoggingStatistics::RemoteLoggingStat>();
        ent_->parent = this;
        remote_logging_stat.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tls-remote-logging-stat")
    {
        auto ent_ = std::make_shared<Syslog::LoggingStatistics::TlsRemoteLoggingStat>();
        ent_->parent = this;
        tls_remote_logging_stat.append(ent_);
        return ent_;
    }

    if(child_yang_name == "file-logging-stat")
    {
        auto ent_ = std::make_shared<Syslog::LoggingStatistics::FileLoggingStat>();
        ent_->parent = this;
        file_logging_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging_stats != nullptr)
    {
        _children["logging-stats"] = logging_stats;
    }

    if(console_logging_stats != nullptr)
    {
        _children["console-logging-stats"] = console_logging_stats;
    }

    if(monitor_logging_stats != nullptr)
    {
        _children["monitor-logging-stats"] = monitor_logging_stats;
    }

    if(trap_logging_stats != nullptr)
    {
        _children["trap-logging-stats"] = trap_logging_stats;
    }

    if(buffer_logging_stats != nullptr)
    {
        _children["buffer-logging-stats"] = buffer_logging_stats;
    }

    count_ = 0;
    for (auto ent_ : remote_logging_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tls_remote_logging_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : file_logging_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::LoggingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::LoggingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::LoggingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging-stats" || name == "console-logging-stats" || name == "monitor-logging-stats" || name == "trap-logging-stats" || name == "buffer-logging-stats" || name == "remote-logging-stat" || name == "tls-remote-logging-stat" || name == "file-logging-stat")
        return true;
    return false;
}

Syslog::LoggingStatistics::LoggingStats::LoggingStats()
    :
    is_log_enabled{YType::boolean, "is-log-enabled"},
    drop_count{YType::uint32, "drop-count"},
    flush_count{YType::uint32, "flush-count"},
    overrun_count{YType::uint32, "overrun-count"}
{

    yang_name = "logging-stats"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::LoggingStats::~LoggingStats()
{
}

bool Syslog::LoggingStatistics::LoggingStats::has_data() const
{
    if (is_presence_container) return true;
    return is_log_enabled.is_set
	|| drop_count.is_set
	|| flush_count.is_set
	|| overrun_count.is_set;
}

bool Syslog::LoggingStatistics::LoggingStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_log_enabled.yfilter)
	|| ydk::is_set(drop_count.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(overrun_count.yfilter);
}

std::string Syslog::LoggingStatistics::LoggingStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::LoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::LoggingStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_log_enabled.is_set || is_set(is_log_enabled.yfilter)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (drop_count.is_set || is_set(drop_count.yfilter)) leaf_name_data.push_back(drop_count.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (overrun_count.is_set || is_set(overrun_count.yfilter)) leaf_name_data.push_back(overrun_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::LoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::LoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::LoggingStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
        is_log_enabled.value_namespace = name_space;
        is_log_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-count")
    {
        drop_count = value;
        drop_count.value_namespace = name_space;
        drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overrun-count")
    {
        overrun_count = value;
        overrun_count.value_namespace = name_space;
        overrun_count.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::LoggingStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled.yfilter = yfilter;
    }
    if(value_path == "drop-count")
    {
        drop_count.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "overrun-count")
    {
        overrun_count.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::LoggingStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-log-enabled" || name == "drop-count" || name == "flush-count" || name == "overrun-count")
        return true;
    return false;
}

Syslog::LoggingStatistics::ConsoleLoggingStats::ConsoleLoggingStats()
    :
    is_log_enabled{YType::boolean, "is-log-enabled"},
    severity{YType::enumeration, "severity"},
    message_count{YType::uint32, "message-count"},
    buffer_size{YType::uint32, "buffer-size"}
{

    yang_name = "console-logging-stats"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::ConsoleLoggingStats::~ConsoleLoggingStats()
{
}

bool Syslog::LoggingStatistics::ConsoleLoggingStats::has_data() const
{
    if (is_presence_container) return true;
    return is_log_enabled.is_set
	|| severity.is_set
	|| message_count.is_set
	|| buffer_size.is_set;
}

bool Syslog::LoggingStatistics::ConsoleLoggingStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_log_enabled.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(message_count.yfilter)
	|| ydk::is_set(buffer_size.yfilter);
}

std::string Syslog::LoggingStatistics::ConsoleLoggingStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::ConsoleLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-logging-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::ConsoleLoggingStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_log_enabled.is_set || is_set(is_log_enabled.yfilter)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.yfilter)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::ConsoleLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::ConsoleLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::ConsoleLoggingStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
        is_log_enabled.value_namespace = name_space;
        is_log_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-count")
    {
        message_count = value;
        message_count.value_namespace = name_space;
        message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::ConsoleLoggingStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "message-count")
    {
        message_count.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::ConsoleLoggingStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-log-enabled" || name == "severity" || name == "message-count" || name == "buffer-size")
        return true;
    return false;
}

Syslog::LoggingStatistics::MonitorLoggingStats::MonitorLoggingStats()
    :
    is_log_enabled{YType::boolean, "is-log-enabled"},
    severity{YType::enumeration, "severity"},
    message_count{YType::uint32, "message-count"},
    buffer_size{YType::uint32, "buffer-size"}
{

    yang_name = "monitor-logging-stats"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::MonitorLoggingStats::~MonitorLoggingStats()
{
}

bool Syslog::LoggingStatistics::MonitorLoggingStats::has_data() const
{
    if (is_presence_container) return true;
    return is_log_enabled.is_set
	|| severity.is_set
	|| message_count.is_set
	|| buffer_size.is_set;
}

bool Syslog::LoggingStatistics::MonitorLoggingStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_log_enabled.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(message_count.yfilter)
	|| ydk::is_set(buffer_size.yfilter);
}

std::string Syslog::LoggingStatistics::MonitorLoggingStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::MonitorLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-logging-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::MonitorLoggingStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_log_enabled.is_set || is_set(is_log_enabled.yfilter)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.yfilter)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::MonitorLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::MonitorLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::MonitorLoggingStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
        is_log_enabled.value_namespace = name_space;
        is_log_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-count")
    {
        message_count = value;
        message_count.value_namespace = name_space;
        message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::MonitorLoggingStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "message-count")
    {
        message_count.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::MonitorLoggingStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-log-enabled" || name == "severity" || name == "message-count" || name == "buffer-size")
        return true;
    return false;
}

Syslog::LoggingStatistics::TrapLoggingStats::TrapLoggingStats()
    :
    is_log_enabled{YType::boolean, "is-log-enabled"},
    severity{YType::enumeration, "severity"},
    message_count{YType::uint32, "message-count"},
    buffer_size{YType::uint32, "buffer-size"}
{

    yang_name = "trap-logging-stats"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::TrapLoggingStats::~TrapLoggingStats()
{
}

bool Syslog::LoggingStatistics::TrapLoggingStats::has_data() const
{
    if (is_presence_container) return true;
    return is_log_enabled.is_set
	|| severity.is_set
	|| message_count.is_set
	|| buffer_size.is_set;
}

bool Syslog::LoggingStatistics::TrapLoggingStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_log_enabled.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(message_count.yfilter)
	|| ydk::is_set(buffer_size.yfilter);
}

std::string Syslog::LoggingStatistics::TrapLoggingStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::TrapLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-logging-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::TrapLoggingStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_log_enabled.is_set || is_set(is_log_enabled.yfilter)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.yfilter)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::TrapLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::TrapLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::TrapLoggingStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
        is_log_enabled.value_namespace = name_space;
        is_log_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-count")
    {
        message_count = value;
        message_count.value_namespace = name_space;
        message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::TrapLoggingStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "message-count")
    {
        message_count.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::TrapLoggingStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-log-enabled" || name == "severity" || name == "message-count" || name == "buffer-size")
        return true;
    return false;
}

Syslog::LoggingStatistics::BufferLoggingStats::BufferLoggingStats()
    :
    is_log_enabled{YType::boolean, "is-log-enabled"},
    severity{YType::enumeration, "severity"},
    message_count{YType::uint32, "message-count"},
    buffer_size{YType::uint32, "buffer-size"}
{

    yang_name = "buffer-logging-stats"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::BufferLoggingStats::~BufferLoggingStats()
{
}

bool Syslog::LoggingStatistics::BufferLoggingStats::has_data() const
{
    if (is_presence_container) return true;
    return is_log_enabled.is_set
	|| severity.is_set
	|| message_count.is_set
	|| buffer_size.is_set;
}

bool Syslog::LoggingStatistics::BufferLoggingStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_log_enabled.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(message_count.yfilter)
	|| ydk::is_set(buffer_size.yfilter);
}

std::string Syslog::LoggingStatistics::BufferLoggingStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::BufferLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-logging-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::BufferLoggingStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_log_enabled.is_set || is_set(is_log_enabled.yfilter)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.yfilter)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::BufferLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::BufferLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::BufferLoggingStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
        is_log_enabled.value_namespace = name_space;
        is_log_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-count")
    {
        message_count = value;
        message_count.value_namespace = name_space;
        message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::BufferLoggingStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "message-count")
    {
        message_count.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::BufferLoggingStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-log-enabled" || name == "severity" || name == "message-count" || name == "buffer-size")
        return true;
    return false;
}

Syslog::LoggingStatistics::RemoteLoggingStat::RemoteLoggingStat()
    :
    remote_host_name{YType::str, "remote-host-name"},
    message_count{YType::uint32, "message-count"}
{

    yang_name = "remote-logging-stat"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::RemoteLoggingStat::~RemoteLoggingStat()
{
}

bool Syslog::LoggingStatistics::RemoteLoggingStat::has_data() const
{
    if (is_presence_container) return true;
    return remote_host_name.is_set
	|| message_count.is_set;
}

bool Syslog::LoggingStatistics::RemoteLoggingStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_host_name.yfilter)
	|| ydk::is_set(message_count.yfilter);
}

std::string Syslog::LoggingStatistics::RemoteLoggingStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::RemoteLoggingStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-logging-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::RemoteLoggingStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_host_name.is_set || is_set(remote_host_name.yfilter)) leaf_name_data.push_back(remote_host_name.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.yfilter)) leaf_name_data.push_back(message_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::RemoteLoggingStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::RemoteLoggingStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::RemoteLoggingStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-host-name")
    {
        remote_host_name = value;
        remote_host_name.value_namespace = name_space;
        remote_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-count")
    {
        message_count = value;
        message_count.value_namespace = name_space;
        message_count.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::RemoteLoggingStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-host-name")
    {
        remote_host_name.yfilter = yfilter;
    }
    if(value_path == "message-count")
    {
        message_count.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::RemoteLoggingStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-host-name" || name == "message-count")
        return true;
    return false;
}

Syslog::LoggingStatistics::TlsRemoteLoggingStat::TlsRemoteLoggingStat()
    :
    remote_host_name{YType::str, "remote-host-name"},
    message_count{YType::uint32, "message-count"}
{

    yang_name = "tls-remote-logging-stat"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::TlsRemoteLoggingStat::~TlsRemoteLoggingStat()
{
}

bool Syslog::LoggingStatistics::TlsRemoteLoggingStat::has_data() const
{
    if (is_presence_container) return true;
    return remote_host_name.is_set
	|| message_count.is_set;
}

bool Syslog::LoggingStatistics::TlsRemoteLoggingStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_host_name.yfilter)
	|| ydk::is_set(message_count.yfilter);
}

std::string Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls-remote-logging-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_host_name.is_set || is_set(remote_host_name.yfilter)) leaf_name_data.push_back(remote_host_name.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.yfilter)) leaf_name_data.push_back(message_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::TlsRemoteLoggingStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-host-name")
    {
        remote_host_name = value;
        remote_host_name.value_namespace = name_space;
        remote_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-count")
    {
        message_count = value;
        message_count.value_namespace = name_space;
        message_count.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::TlsRemoteLoggingStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-host-name")
    {
        remote_host_name.yfilter = yfilter;
    }
    if(value_path == "message-count")
    {
        message_count.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::TlsRemoteLoggingStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-host-name" || name == "message-count")
        return true;
    return false;
}

Syslog::LoggingStatistics::FileLoggingStat::FileLoggingStat()
    :
    file_name{YType::str, "file-name"},
    message_count{YType::uint32, "message-count"}
{

    yang_name = "file-logging-stat"; yang_parent_name = "logging-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingStatistics::FileLoggingStat::~FileLoggingStat()
{
}

bool Syslog::LoggingStatistics::FileLoggingStat::has_data() const
{
    if (is_presence_container) return true;
    return file_name.is_set
	|| message_count.is_set;
}

bool Syslog::LoggingStatistics::FileLoggingStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| ydk::is_set(message_count.yfilter);
}

std::string Syslog::LoggingStatistics::FileLoggingStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingStatistics::FileLoggingStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-logging-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingStatistics::FileLoggingStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.yfilter)) leaf_name_data.push_back(message_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingStatistics::FileLoggingStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingStatistics::FileLoggingStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingStatistics::FileLoggingStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-count")
    {
        message_count = value;
        message_count.value_namespace = name_space;
        message_count.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingStatistics::FileLoggingStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
    if(value_path == "message-count")
    {
        message_count.yfilter = yfilter;
    }
}

bool Syslog::LoggingStatistics::FileLoggingStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-name" || name == "message-count")
        return true;
    return false;
}

const Enum::YLeaf SystemMessageSeverity::message_severity_unknown {-1, "message-severity-unknown"};
const Enum::YLeaf SystemMessageSeverity::message_severity_emergency {0, "message-severity-emergency"};
const Enum::YLeaf SystemMessageSeverity::message_severity_alert {1, "message-severity-alert"};
const Enum::YLeaf SystemMessageSeverity::message_severity_critical {2, "message-severity-critical"};
const Enum::YLeaf SystemMessageSeverity::message_severity_error {3, "message-severity-error"};
const Enum::YLeaf SystemMessageSeverity::message_severity_warning {4, "message-severity-warning"};
const Enum::YLeaf SystemMessageSeverity::message_severity_notice {5, "message-severity-notice"};
const Enum::YLeaf SystemMessageSeverity::message_severity_informational {6, "message-severity-informational"};
const Enum::YLeaf SystemMessageSeverity::message_severity_debug {7, "message-severity-debug"};


}
}



#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_27.hpp"
#include "Cisco_NX_OS_device_28.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::PrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Precedence-list"; yang_parent_name = "precedence-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::~PrecedenceList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Precedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolItems()
    :
    protocol_list(this, {"val"})
{

    yang_name = "protocol-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::~ProtocolItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_operation() const
{
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Protocol-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList>();
        ent_->parent = this;
        protocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Protocol-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::ProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Protocol-list"; yang_parent_name = "protocol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::~ProtocolList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Protocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::DscpNotItems()
    :
    notdscp_list(this, {"val"})
{

    yang_name = "dscpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::~DscpNotItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::has_operation() const
{
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotDscp-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList>();
        ent_->parent = this;
        notdscp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notdscp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotDscp-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::NotDscpList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotDscp-list"; yang_parent_name = "dscpNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::~NotDscpList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotDscp-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::CosNotItems()
    :
    notcos_list(this, {"val"})
{

    yang_name = "cosNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::~CosNotItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::has_operation() const
{
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cosNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotCos-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList>();
        ent_->parent = this;
        notcos_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notcos_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotCos-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::NotCosList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotCos-list"; yang_parent_name = "cosNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::~NotCosList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotCos-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::MplsExperimentalNotItems()
    :
    notmplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimentalNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::~MplsExperimentalNotItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_operation() const
{
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimentalNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotMPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList>();
        ent_->parent = this;
        notmplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notmplsexperimental_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotMPLSExperimental-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::NotMPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotMPLSExperimental-list"; yang_parent_name = "mplsExperimentalNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::~NotMPLSExperimentalList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotMPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::PrecedenceNotItems()
    :
    notprecedence_list(this, {"val"})
{

    yang_name = "precedenceNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::~PrecedenceNotItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedenceNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotPrecedence-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList>();
        ent_->parent = this;
        notprecedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprecedence_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotPrecedence-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::NotPrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotPrecedence-list"; yang_parent_name = "precedenceNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::~NotPrecedenceList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotPrecedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::ProtocolNotItems()
    :
    notprotocol_list(this, {"val"})
{

    yang_name = "protocolNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::~ProtocolNotItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotProtocol-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList>();
        ent_->parent = this;
        notprotocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprotocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotProtocol-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::NotProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotProtocol-list"; yang_parent_name = "protocolNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::~NotProtocolList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotProtocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::IpRtpNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "ipRtpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::~IpRtpNotItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRtpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::PacketLengthNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "packetLengthNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::~PacketLengthNotItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packetLengthNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::GrpItems()
    :
    qosgrp_list(this, {"id"})
{

    yang_name = "grp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::~GrpItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QoSGrp-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList>();
        ent_->parent = this;
        qosgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QoSGrp-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::QoSGrpList()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QoSGrp-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::~QoSGrpList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QoSGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsclassMapToPolicyMapItems()
    :
    rsclassmaptopolicymap_list(this, {"tdn"})
{

    yang_name = "rsclassMapToPolicyMap-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::~RsclassMapToPolicyMapItems()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsClassMapToPolicyMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList>();
        ent_->parent = this;
        rsclassmaptopolicymap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsclassmaptopolicymap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsClassMapToPolicyMap-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::RsClassMapToPolicyMapList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsClassMapToPolicyMap-list"; yang_parent_name = "rsclassMapToPolicyMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::~RsClassMapToPolicyMapList()
{
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsClassMapToPolicyMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::PItems()
    :
    name_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "p-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PItems::~PItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::IpqosItems::QueuingItems::PItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::PItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::NameItems()
    :
    pmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "p-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::~NameItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/p-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PMapInst-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList>();
        ent_->parent = this;
        pmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PMapInst-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::PMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    refcount{YType::uint32, "refCount"},
    configstatus{YType::uint32, "configStatus"}
        ,
    cmap_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems>())
    , description_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems>())
    , rtipqospolicyinsttopmap_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>())
    , rtclassmaptopolicymap_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>())
{
    cmap_items->parent = this;
    description_items->parent = this;
    rtipqospolicyinsttopmap_items->parent = this;
    rtclassmaptopolicymap_items->parent = this;

    yang_name = "PMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::~PMapInstList()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| refcount.is_set
	|| configstatus.is_set
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_data())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_data());
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_operation())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/p-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "rtipqosPolicyInstToPMap-items")
    {
        if(rtipqospolicyinsttopmap_items == nullptr)
        {
            rtipqospolicyinsttopmap_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>();
        }
        return rtipqospolicyinsttopmap_items;
    }

    if(child_yang_name == "rtclassMapToPolicyMap-items")
    {
        if(rtclassmaptopolicymap_items == nullptr)
        {
            rtclassmaptopolicymap_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>();
        }
        return rtclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(rtipqospolicyinsttopmap_items != nullptr)
    {
        _children["rtipqosPolicyInstToPMap-items"] = rtipqospolicyinsttopmap_items;
    }

    if(rtclassmaptopolicymap_items != nullptr)
    {
        _children["rtclassMapToPolicyMap-items"] = rtclassmaptopolicymap_items;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchType")
    {
        matchtype = value;
        matchtype.value_namespace = name_space;
        matchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmap-items" || name == "Description-items" || name == "rtipqosPolicyInstToPMap-items" || name == "rtclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "refCount" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::CmapItems()
    :
    matchcmap_list(this, {"name"})
{

    yang_name = "cmap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::~CmapItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchCMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList>();
        ent_->parent = this;
        matchcmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchcmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchCMap-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MatchCMapList()
    :
    name{YType::str, "name"},
    prevcmap{YType::str, "prevCMap"},
    nextcmap{YType::str, "nextCMap"},
    configstatus{YType::uint32, "configStatus"}
        ,
    setcos_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>())
    , mtu_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>())
    , setprecedence_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>())
    , setdscp_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>())
    , setgrp_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>())
    , setdlbdisable_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>())
    , queuelimit_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>())
    , pause_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>())
    , dpp_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>())
    , setbw_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>())
    , setrembw_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>())
    , shape_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>())
    , police_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>())
    , prio_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>())
    , randdet_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>())
    , randdetnonecn_items(std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>())
{
    setcos_items->parent = this;
    mtu_items->parent = this;
    setprecedence_items->parent = this;
    setdscp_items->parent = this;
    setgrp_items->parent = this;
    setdlbdisable_items->parent = this;
    queuelimit_items->parent = this;
    pause_items->parent = this;
    dpp_items->parent = this;
    setbw_items->parent = this;
    setrembw_items->parent = this;
    shape_items->parent = this;
    police_items->parent = this;
    prio_items->parent = this;
    randdet_items->parent = this;
    randdetnonecn_items->parent = this;

    yang_name = "MatchCMap-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::~MatchCMapList()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| prevcmap.is_set
	|| nextcmap.is_set
	|| configstatus.is_set
	|| (setcos_items !=  nullptr && setcos_items->has_data())
	|| (mtu_items !=  nullptr && mtu_items->has_data())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_data())
	|| (setdscp_items !=  nullptr && setdscp_items->has_data())
	|| (setgrp_items !=  nullptr && setgrp_items->has_data())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_data())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_data())
	|| (pause_items !=  nullptr && pause_items->has_data())
	|| (dpp_items !=  nullptr && dpp_items->has_data())
	|| (setbw_items !=  nullptr && setbw_items->has_data())
	|| (setrembw_items !=  nullptr && setrembw_items->has_data())
	|| (shape_items !=  nullptr && shape_items->has_data())
	|| (police_items !=  nullptr && police_items->has_data())
	|| (prio_items !=  nullptr && prio_items->has_data())
	|| (randdet_items !=  nullptr && randdet_items->has_data())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_data());
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prevcmap.yfilter)
	|| ydk::is_set(nextcmap.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (setcos_items !=  nullptr && setcos_items->has_operation())
	|| (mtu_items !=  nullptr && mtu_items->has_operation())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_operation())
	|| (setdscp_items !=  nullptr && setdscp_items->has_operation())
	|| (setgrp_items !=  nullptr && setgrp_items->has_operation())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_operation())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_operation())
	|| (pause_items !=  nullptr && pause_items->has_operation())
	|| (dpp_items !=  nullptr && dpp_items->has_operation())
	|| (setbw_items !=  nullptr && setbw_items->has_operation())
	|| (setrembw_items !=  nullptr && setrembw_items->has_operation())
	|| (shape_items !=  nullptr && shape_items->has_operation())
	|| (police_items !=  nullptr && police_items->has_operation())
	|| (prio_items !=  nullptr && prio_items->has_operation())
	|| (randdet_items !=  nullptr && randdet_items->has_operation())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchCMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prevcmap.is_set || is_set(prevcmap.yfilter)) leaf_name_data.push_back(prevcmap.get_name_leafdata());
    if (nextcmap.is_set || is_set(nextcmap.yfilter)) leaf_name_data.push_back(nextcmap.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setCos-items")
    {
        if(setcos_items == nullptr)
        {
            setcos_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>();
        }
        return setcos_items;
    }

    if(child_yang_name == "mtu-items")
    {
        if(mtu_items == nullptr)
        {
            mtu_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>();
        }
        return mtu_items;
    }

    if(child_yang_name == "setPrecedence-items")
    {
        if(setprecedence_items == nullptr)
        {
            setprecedence_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>();
        }
        return setprecedence_items;
    }

    if(child_yang_name == "setDscp-items")
    {
        if(setdscp_items == nullptr)
        {
            setdscp_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>();
        }
        return setdscp_items;
    }

    if(child_yang_name == "setGrp-items")
    {
        if(setgrp_items == nullptr)
        {
            setgrp_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>();
        }
        return setgrp_items;
    }

    if(child_yang_name == "setDlbDisable-items")
    {
        if(setdlbdisable_items == nullptr)
        {
            setdlbdisable_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>();
        }
        return setdlbdisable_items;
    }

    if(child_yang_name == "QueueLimit-items")
    {
        if(queuelimit_items == nullptr)
        {
            queuelimit_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>();
        }
        return queuelimit_items;
    }

    if(child_yang_name == "pause-items")
    {
        if(pause_items == nullptr)
        {
            pause_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>();
        }
        return pause_items;
    }

    if(child_yang_name == "dpp-items")
    {
        if(dpp_items == nullptr)
        {
            dpp_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>();
        }
        return dpp_items;
    }

    if(child_yang_name == "setBW-items")
    {
        if(setbw_items == nullptr)
        {
            setbw_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>();
        }
        return setbw_items;
    }

    if(child_yang_name == "setRemBW-items")
    {
        if(setrembw_items == nullptr)
        {
            setrembw_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>();
        }
        return setrembw_items;
    }

    if(child_yang_name == "shape-items")
    {
        if(shape_items == nullptr)
        {
            shape_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>();
        }
        return shape_items;
    }

    if(child_yang_name == "police-items")
    {
        if(police_items == nullptr)
        {
            police_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>();
        }
        return police_items;
    }

    if(child_yang_name == "prio-items")
    {
        if(prio_items == nullptr)
        {
            prio_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>();
        }
        return prio_items;
    }

    if(child_yang_name == "RandDet-items")
    {
        if(randdet_items == nullptr)
        {
            randdet_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>();
        }
        return randdet_items;
    }

    if(child_yang_name == "RandDetNonEcn-items")
    {
        if(randdetnonecn_items == nullptr)
        {
            randdetnonecn_items = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>();
        }
        return randdetnonecn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(setcos_items != nullptr)
    {
        _children["setCos-items"] = setcos_items;
    }

    if(mtu_items != nullptr)
    {
        _children["mtu-items"] = mtu_items;
    }

    if(setprecedence_items != nullptr)
    {
        _children["setPrecedence-items"] = setprecedence_items;
    }

    if(setdscp_items != nullptr)
    {
        _children["setDscp-items"] = setdscp_items;
    }

    if(setgrp_items != nullptr)
    {
        _children["setGrp-items"] = setgrp_items;
    }

    if(setdlbdisable_items != nullptr)
    {
        _children["setDlbDisable-items"] = setdlbdisable_items;
    }

    if(queuelimit_items != nullptr)
    {
        _children["QueueLimit-items"] = queuelimit_items;
    }

    if(pause_items != nullptr)
    {
        _children["pause-items"] = pause_items;
    }

    if(dpp_items != nullptr)
    {
        _children["dpp-items"] = dpp_items;
    }

    if(setbw_items != nullptr)
    {
        _children["setBW-items"] = setbw_items;
    }

    if(setrembw_items != nullptr)
    {
        _children["setRemBW-items"] = setrembw_items;
    }

    if(shape_items != nullptr)
    {
        _children["shape-items"] = shape_items;
    }

    if(police_items != nullptr)
    {
        _children["police-items"] = police_items;
    }

    if(prio_items != nullptr)
    {
        _children["prio-items"] = prio_items;
    }

    if(randdet_items != nullptr)
    {
        _children["RandDet-items"] = randdet_items;
    }

    if(randdetnonecn_items != nullptr)
    {
        _children["RandDetNonEcn-items"] = randdetnonecn_items;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevCMap")
    {
        prevcmap = value;
        prevcmap.value_namespace = name_space;
        prevcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextCMap")
    {
        nextcmap = value;
        nextcmap.value_namespace = name_space;
        nextcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prevCMap")
    {
        prevcmap.yfilter = yfilter;
    }
    if(value_path == "nextCMap")
    {
        nextcmap.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setCos-items" || name == "mtu-items" || name == "setPrecedence-items" || name == "setDscp-items" || name == "setGrp-items" || name == "setDlbDisable-items" || name == "QueueLimit-items" || name == "pause-items" || name == "dpp-items" || name == "setBW-items" || name == "setRemBW-items" || name == "shape-items" || name == "police-items" || name == "prio-items" || name == "RandDet-items" || name == "RandDetNonEcn-items" || name == "name" || name == "prevCMap" || name == "nextCMap" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::SetCosItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setCos-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::~SetCosItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setCos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::MtuItems()
    :
    value_{YType::uint16, "value"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "mtu-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::~MtuItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::SetPrecedenceItems()
    :
    val{YType::enumeration, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setPrecedence-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::~SetPrecedenceItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setPrecedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::SetDscpItems()
    :
    val{YType::uint8, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDscp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::~SetDscpItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::SetGrpItems()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setGrp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::~SetGrpItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setGrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::SetDlbDisableItems()
    :
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDlbDisable-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::~SetDlbDisableItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDlbDisable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::QueueLimitItems()
    :
    queuelimitval{YType::uint64, "QueueLimitVal"},
    queuelimitunit{YType::enumeration, "QueueLimitUnit"},
    dynamic{YType::uint8, "dynamic"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QueueLimit-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::~QueueLimitItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_data() const
{
    if (is_presence_container) return true;
    return queuelimitval.is_set
	|| queuelimitunit.is_set
	|| dynamic.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queuelimitval.yfilter)
	|| ydk::is_set(queuelimitunit.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueueLimit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queuelimitval.is_set || is_set(queuelimitval.yfilter)) leaf_name_data.push_back(queuelimitval.get_name_leafdata());
    if (queuelimitunit.is_set || is_set(queuelimitunit.yfilter)) leaf_name_data.push_back(queuelimitunit.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval = value;
        queuelimitval.value_namespace = name_space;
        queuelimitval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit = value;
        queuelimitunit.value_namespace = name_space;
        queuelimitunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval.yfilter = yfilter;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueueLimitVal" || name == "QueueLimitUnit" || name == "dynamic" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::PauseItems()
    :
    buffersize{YType::uint64, "bufferSize"},
    pausethreshold{YType::uint64, "pauseThreshold"},
    resumethreshold{YType::uint64, "resumeThreshold"},
    pfccos0{YType::boolean, "pfcCos0"},
    pfccos1{YType::boolean, "pfcCos1"},
    pfccos2{YType::boolean, "pfcCos2"},
    pfccos3{YType::boolean, "pfcCos3"},
    pfccos4{YType::boolean, "pfcCos4"},
    pfccos5{YType::boolean, "pfcCos5"},
    pfccos6{YType::boolean, "pfcCos6"},
    pfccos7{YType::boolean, "pfcCos7"},
    receive{YType::boolean, "receive"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "pause-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::~PauseItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_data() const
{
    if (is_presence_container) return true;
    return buffersize.is_set
	|| pausethreshold.is_set
	|| resumethreshold.is_set
	|| pfccos0.is_set
	|| pfccos1.is_set
	|| pfccos2.is_set
	|| pfccos3.is_set
	|| pfccos4.is_set
	|| pfccos5.is_set
	|| pfccos6.is_set
	|| pfccos7.is_set
	|| receive.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter)
	|| ydk::is_set(pausethreshold.yfilter)
	|| ydk::is_set(resumethreshold.yfilter)
	|| ydk::is_set(pfccos0.yfilter)
	|| ydk::is_set(pfccos1.yfilter)
	|| ydk::is_set(pfccos2.yfilter)
	|| ydk::is_set(pfccos3.yfilter)
	|| ydk::is_set(pfccos4.yfilter)
	|| ydk::is_set(pfccos5.yfilter)
	|| ydk::is_set(pfccos6.yfilter)
	|| ydk::is_set(pfccos7.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());
    if (pausethreshold.is_set || is_set(pausethreshold.yfilter)) leaf_name_data.push_back(pausethreshold.get_name_leafdata());
    if (resumethreshold.is_set || is_set(resumethreshold.yfilter)) leaf_name_data.push_back(resumethreshold.get_name_leafdata());
    if (pfccos0.is_set || is_set(pfccos0.yfilter)) leaf_name_data.push_back(pfccos0.get_name_leafdata());
    if (pfccos1.is_set || is_set(pfccos1.yfilter)) leaf_name_data.push_back(pfccos1.get_name_leafdata());
    if (pfccos2.is_set || is_set(pfccos2.yfilter)) leaf_name_data.push_back(pfccos2.get_name_leafdata());
    if (pfccos3.is_set || is_set(pfccos3.yfilter)) leaf_name_data.push_back(pfccos3.get_name_leafdata());
    if (pfccos4.is_set || is_set(pfccos4.yfilter)) leaf_name_data.push_back(pfccos4.get_name_leafdata());
    if (pfccos5.is_set || is_set(pfccos5.yfilter)) leaf_name_data.push_back(pfccos5.get_name_leafdata());
    if (pfccos6.is_set || is_set(pfccos6.yfilter)) leaf_name_data.push_back(pfccos6.get_name_leafdata());
    if (pfccos7.is_set || is_set(pfccos7.yfilter)) leaf_name_data.push_back(pfccos7.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferSize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold = value;
        pausethreshold.value_namespace = name_space;
        pausethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold = value;
        resumethreshold.value_namespace = name_space;
        resumethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0 = value;
        pfccos0.value_namespace = name_space;
        pfccos0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1 = value;
        pfccos1.value_namespace = name_space;
        pfccos1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2 = value;
        pfccos2.value_namespace = name_space;
        pfccos2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3 = value;
        pfccos3.value_namespace = name_space;
        pfccos3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4 = value;
        pfccos4.value_namespace = name_space;
        pfccos4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5 = value;
        pfccos5.value_namespace = name_space;
        pfccos5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6 = value;
        pfccos6.value_namespace = name_space;
        pfccos6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7 = value;
        pfccos7.value_namespace = name_space;
        pfccos7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferSize")
    {
        buffersize.yfilter = yfilter;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold.yfilter = yfilter;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold.yfilter = yfilter;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0.yfilter = yfilter;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1.yfilter = yfilter;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2.yfilter = yfilter;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3.yfilter = yfilter;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4.yfilter = yfilter;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5.yfilter = yfilter;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6.yfilter = yfilter;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferSize" || name == "pauseThreshold" || name == "resumeThreshold" || name == "pfcCos0" || name == "pfcCos1" || name == "pfcCos2" || name == "pfcCos3" || name == "pfcCos4" || name == "pfcCos5" || name == "pfcCos6" || name == "pfcCos7" || name == "receive" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::DppItems()
    :
    setqosgroup{YType::uint16, "setQosGroup"}
{

    yang_name = "dpp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::~DppItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_data() const
{
    if (is_presence_container) return true;
    return setqosgroup.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setqosgroup.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setqosgroup.is_set || is_set(setqosgroup.yfilter)) leaf_name_data.push_back(setqosgroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup = value;
        setqosgroup.value_namespace = name_space;
        setqosgroup.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setQosGroup")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::SetBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::~SetBWItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::SetRemBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setRemBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::~SetRemBWItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setRemBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::ShapeItems()
    :
    min{YType::uint64, "min"},
    minrateunit{YType::enumeration, "minRateUnit"},
    max{YType::uint64, "max"},
    maxrateunit{YType::enumeration, "maxRateUnit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "shape-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::~ShapeItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| minrateunit.is_set
	|| max.is_set
	|| maxrateunit.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(minrateunit.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(maxrateunit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (minrateunit.is_set || is_set(minrateunit.yfilter)) leaf_name_data.push_back(minrateunit.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (maxrateunit.is_set || is_set(maxrateunit.yfilter)) leaf_name_data.push_back(maxrateunit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit = value;
        minrateunit.value_namespace = name_space;
        minrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit = value;
        maxrateunit.value_namespace = name_space;
        maxrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "minRateUnit" || name == "max" || name == "maxRateUnit" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::PoliceItems()
    :
    cirrate{YType::uint64, "cirRate"},
    cirunit{YType::enumeration, "cirUnit"},
    bcrate{YType::uint64, "bcRate"},
    bcunit{YType::enumeration, "bcUnit"},
    pirrate{YType::uint64, "pirRate"},
    pirunit{YType::enumeration, "pirUnit"},
    berate{YType::uint64, "beRate"},
    beunit{YType::enumeration, "beUnit"},
    conformaction{YType::enumeration, "conformAction"},
    conformsetcostransmit{YType::uint8, "conformSetCosTransmit"},
    conformsetdscptransmit{YType::uint8, "conformSetDscpTransmit"},
    conformsetprectransmit{YType::enumeration, "conformSetPrecTransmit"},
    conformsetqosgrptransmit{YType::uint16, "conformSetQosGrpTransmit"},
    exceedaction{YType::enumeration, "exceedAction"},
    exceedsetcostransmit{YType::uint8, "exceedSetCosTransmit"},
    exceedsetdscptransmit{YType::uint8, "exceedSetDscpTransmit"},
    exceedsetprectransmit{YType::enumeration, "exceedSetPrecTransmit"},
    exceedsetqosgrptransmit{YType::uint16, "exceedSetQosGrpTransmit"},
    violateaction{YType::enumeration, "violateAction"},
    violatesetcostransmit{YType::uint8, "violateSetCosTransmit"},
    violatesetdscptransmit{YType::uint8, "violateSetDscpTransmit"},
    violatesetprectransmit{YType::enumeration, "violateSetPrecTransmit"},
    violatesetqosgrptransmit{YType::uint16, "violateSetQosGrpTransmit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "police-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::~PoliceItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_data() const
{
    if (is_presence_container) return true;
    return cirrate.is_set
	|| cirunit.is_set
	|| bcrate.is_set
	|| bcunit.is_set
	|| pirrate.is_set
	|| pirunit.is_set
	|| berate.is_set
	|| beunit.is_set
	|| conformaction.is_set
	|| conformsetcostransmit.is_set
	|| conformsetdscptransmit.is_set
	|| conformsetprectransmit.is_set
	|| conformsetqosgrptransmit.is_set
	|| exceedaction.is_set
	|| exceedsetcostransmit.is_set
	|| exceedsetdscptransmit.is_set
	|| exceedsetprectransmit.is_set
	|| exceedsetqosgrptransmit.is_set
	|| violateaction.is_set
	|| violatesetcostransmit.is_set
	|| violatesetdscptransmit.is_set
	|| violatesetprectransmit.is_set
	|| violatesetqosgrptransmit.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cirrate.yfilter)
	|| ydk::is_set(cirunit.yfilter)
	|| ydk::is_set(bcrate.yfilter)
	|| ydk::is_set(bcunit.yfilter)
	|| ydk::is_set(pirrate.yfilter)
	|| ydk::is_set(pirunit.yfilter)
	|| ydk::is_set(berate.yfilter)
	|| ydk::is_set(beunit.yfilter)
	|| ydk::is_set(conformaction.yfilter)
	|| ydk::is_set(conformsetcostransmit.yfilter)
	|| ydk::is_set(conformsetdscptransmit.yfilter)
	|| ydk::is_set(conformsetprectransmit.yfilter)
	|| ydk::is_set(conformsetqosgrptransmit.yfilter)
	|| ydk::is_set(exceedaction.yfilter)
	|| ydk::is_set(exceedsetcostransmit.yfilter)
	|| ydk::is_set(exceedsetdscptransmit.yfilter)
	|| ydk::is_set(exceedsetprectransmit.yfilter)
	|| ydk::is_set(exceedsetqosgrptransmit.yfilter)
	|| ydk::is_set(violateaction.yfilter)
	|| ydk::is_set(violatesetcostransmit.yfilter)
	|| ydk::is_set(violatesetdscptransmit.yfilter)
	|| ydk::is_set(violatesetprectransmit.yfilter)
	|| ydk::is_set(violatesetqosgrptransmit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cirrate.is_set || is_set(cirrate.yfilter)) leaf_name_data.push_back(cirrate.get_name_leafdata());
    if (cirunit.is_set || is_set(cirunit.yfilter)) leaf_name_data.push_back(cirunit.get_name_leafdata());
    if (bcrate.is_set || is_set(bcrate.yfilter)) leaf_name_data.push_back(bcrate.get_name_leafdata());
    if (bcunit.is_set || is_set(bcunit.yfilter)) leaf_name_data.push_back(bcunit.get_name_leafdata());
    if (pirrate.is_set || is_set(pirrate.yfilter)) leaf_name_data.push_back(pirrate.get_name_leafdata());
    if (pirunit.is_set || is_set(pirunit.yfilter)) leaf_name_data.push_back(pirunit.get_name_leafdata());
    if (berate.is_set || is_set(berate.yfilter)) leaf_name_data.push_back(berate.get_name_leafdata());
    if (beunit.is_set || is_set(beunit.yfilter)) leaf_name_data.push_back(beunit.get_name_leafdata());
    if (conformaction.is_set || is_set(conformaction.yfilter)) leaf_name_data.push_back(conformaction.get_name_leafdata());
    if (conformsetcostransmit.is_set || is_set(conformsetcostransmit.yfilter)) leaf_name_data.push_back(conformsetcostransmit.get_name_leafdata());
    if (conformsetdscptransmit.is_set || is_set(conformsetdscptransmit.yfilter)) leaf_name_data.push_back(conformsetdscptransmit.get_name_leafdata());
    if (conformsetprectransmit.is_set || is_set(conformsetprectransmit.yfilter)) leaf_name_data.push_back(conformsetprectransmit.get_name_leafdata());
    if (conformsetqosgrptransmit.is_set || is_set(conformsetqosgrptransmit.yfilter)) leaf_name_data.push_back(conformsetqosgrptransmit.get_name_leafdata());
    if (exceedaction.is_set || is_set(exceedaction.yfilter)) leaf_name_data.push_back(exceedaction.get_name_leafdata());
    if (exceedsetcostransmit.is_set || is_set(exceedsetcostransmit.yfilter)) leaf_name_data.push_back(exceedsetcostransmit.get_name_leafdata());
    if (exceedsetdscptransmit.is_set || is_set(exceedsetdscptransmit.yfilter)) leaf_name_data.push_back(exceedsetdscptransmit.get_name_leafdata());
    if (exceedsetprectransmit.is_set || is_set(exceedsetprectransmit.yfilter)) leaf_name_data.push_back(exceedsetprectransmit.get_name_leafdata());
    if (exceedsetqosgrptransmit.is_set || is_set(exceedsetqosgrptransmit.yfilter)) leaf_name_data.push_back(exceedsetqosgrptransmit.get_name_leafdata());
    if (violateaction.is_set || is_set(violateaction.yfilter)) leaf_name_data.push_back(violateaction.get_name_leafdata());
    if (violatesetcostransmit.is_set || is_set(violatesetcostransmit.yfilter)) leaf_name_data.push_back(violatesetcostransmit.get_name_leafdata());
    if (violatesetdscptransmit.is_set || is_set(violatesetdscptransmit.yfilter)) leaf_name_data.push_back(violatesetdscptransmit.get_name_leafdata());
    if (violatesetprectransmit.is_set || is_set(violatesetprectransmit.yfilter)) leaf_name_data.push_back(violatesetprectransmit.get_name_leafdata());
    if (violatesetqosgrptransmit.is_set || is_set(violatesetqosgrptransmit.yfilter)) leaf_name_data.push_back(violatesetqosgrptransmit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cirRate")
    {
        cirrate = value;
        cirrate.value_namespace = name_space;
        cirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cirUnit")
    {
        cirunit = value;
        cirunit.value_namespace = name_space;
        cirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcRate")
    {
        bcrate = value;
        bcrate.value_namespace = name_space;
        bcrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcUnit")
    {
        bcunit = value;
        bcunit.value_namespace = name_space;
        bcunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirRate")
    {
        pirrate = value;
        pirrate.value_namespace = name_space;
        pirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirUnit")
    {
        pirunit = value;
        pirunit.value_namespace = name_space;
        pirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beRate")
    {
        berate = value;
        berate.value_namespace = name_space;
        berate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beUnit")
    {
        beunit = value;
        beunit.value_namespace = name_space;
        beunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformAction")
    {
        conformaction = value;
        conformaction.value_namespace = name_space;
        conformaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit = value;
        conformsetcostransmit.value_namespace = name_space;
        conformsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit = value;
        conformsetdscptransmit.value_namespace = name_space;
        conformsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit = value;
        conformsetprectransmit.value_namespace = name_space;
        conformsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit = value;
        conformsetqosgrptransmit.value_namespace = name_space;
        conformsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedAction")
    {
        exceedaction = value;
        exceedaction.value_namespace = name_space;
        exceedaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit = value;
        exceedsetcostransmit.value_namespace = name_space;
        exceedsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit = value;
        exceedsetdscptransmit.value_namespace = name_space;
        exceedsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit = value;
        exceedsetprectransmit.value_namespace = name_space;
        exceedsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit = value;
        exceedsetqosgrptransmit.value_namespace = name_space;
        exceedsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateAction")
    {
        violateaction = value;
        violateaction.value_namespace = name_space;
        violateaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit = value;
        violatesetcostransmit.value_namespace = name_space;
        violatesetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit = value;
        violatesetdscptransmit.value_namespace = name_space;
        violatesetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit = value;
        violatesetprectransmit.value_namespace = name_space;
        violatesetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit = value;
        violatesetqosgrptransmit.value_namespace = name_space;
        violatesetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cirRate")
    {
        cirrate.yfilter = yfilter;
    }
    if(value_path == "cirUnit")
    {
        cirunit.yfilter = yfilter;
    }
    if(value_path == "bcRate")
    {
        bcrate.yfilter = yfilter;
    }
    if(value_path == "bcUnit")
    {
        bcunit.yfilter = yfilter;
    }
    if(value_path == "pirRate")
    {
        pirrate.yfilter = yfilter;
    }
    if(value_path == "pirUnit")
    {
        pirunit.yfilter = yfilter;
    }
    if(value_path == "beRate")
    {
        berate.yfilter = yfilter;
    }
    if(value_path == "beUnit")
    {
        beunit.yfilter = yfilter;
    }
    if(value_path == "conformAction")
    {
        conformaction.yfilter = yfilter;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedAction")
    {
        exceedaction.yfilter = yfilter;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "violateAction")
    {
        violateaction.yfilter = yfilter;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cirRate" || name == "cirUnit" || name == "bcRate" || name == "bcUnit" || name == "pirRate" || name == "pirUnit" || name == "beRate" || name == "beUnit" || name == "conformAction" || name == "conformSetCosTransmit" || name == "conformSetDscpTransmit" || name == "conformSetPrecTransmit" || name == "conformSetQosGrpTransmit" || name == "exceedAction" || name == "exceedSetCosTransmit" || name == "exceedSetDscpTransmit" || name == "exceedSetPrecTransmit" || name == "exceedSetQosGrpTransmit" || name == "violateAction" || name == "violateSetCosTransmit" || name == "violateSetDscpTransmit" || name == "violateSetPrecTransmit" || name == "violateSetQosGrpTransmit" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::PrioItems()
    :
    level{YType::uint8, "level"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "prio-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::~PrioItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::RandDetItems()
    :
    minthreshold{YType::uint32, "minThreshold"},
    minthresholdunit{YType::enumeration, "minThresholdUnit"},
    maxthreshold{YType::uint32, "maxThreshold"},
    maxthresholdunit{YType::enumeration, "maxThresholdUnit"},
    dropavail{YType::uint8, "dropAvail"},
    weight{YType::uint8, "weight"},
    capaverage{YType::boolean, "capAverage"},
    optimization{YType::uint8, "optimization"},
    ecn{YType::boolean, "ecn"}
{

    yang_name = "RandDet-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::~RandDetItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_data() const
{
    if (is_presence_container) return true;
    return minthreshold.is_set
	|| minthresholdunit.is_set
	|| maxthreshold.is_set
	|| maxthresholdunit.is_set
	|| dropavail.is_set
	|| weight.is_set
	|| capaverage.is_set
	|| optimization.is_set
	|| ecn.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthreshold.yfilter)
	|| ydk::is_set(minthresholdunit.yfilter)
	|| ydk::is_set(maxthreshold.yfilter)
	|| ydk::is_set(maxthresholdunit.yfilter)
	|| ydk::is_set(dropavail.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(capaverage.yfilter)
	|| ydk::is_set(optimization.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDet-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthreshold.is_set || is_set(minthreshold.yfilter)) leaf_name_data.push_back(minthreshold.get_name_leafdata());
    if (minthresholdunit.is_set || is_set(minthresholdunit.yfilter)) leaf_name_data.push_back(minthresholdunit.get_name_leafdata());
    if (maxthreshold.is_set || is_set(maxthreshold.yfilter)) leaf_name_data.push_back(maxthreshold.get_name_leafdata());
    if (maxthresholdunit.is_set || is_set(maxthresholdunit.yfilter)) leaf_name_data.push_back(maxthresholdunit.get_name_leafdata());
    if (dropavail.is_set || is_set(dropavail.yfilter)) leaf_name_data.push_back(dropavail.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (capaverage.is_set || is_set(capaverage.yfilter)) leaf_name_data.push_back(capaverage.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThreshold")
    {
        minthreshold = value;
        minthreshold.value_namespace = name_space;
        minthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit = value;
        minthresholdunit.value_namespace = name_space;
        minthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold = value;
        maxthreshold.value_namespace = name_space;
        maxthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit = value;
        maxthresholdunit.value_namespace = name_space;
        maxthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvail")
    {
        dropavail = value;
        dropavail.value_namespace = name_space;
        dropavail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capAverage")
    {
        capaverage = value;
        capaverage.value_namespace = name_space;
        capaverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThreshold")
    {
        minthreshold.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit.yfilter = yfilter;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit.yfilter = yfilter;
    }
    if(value_path == "dropAvail")
    {
        dropavail.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "capAverage")
    {
        capaverage.yfilter = yfilter;
    }
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThreshold" || name == "minThresholdUnit" || name == "maxThreshold" || name == "maxThresholdUnit" || name == "dropAvail" || name == "weight" || name == "capAverage" || name == "optimization" || name == "ecn")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::RandDetNonEcnItems()
    :
    minthresholdnonecn{YType::uint32, "minThresholdNonEcn"},
    minthresholdunitnonecn{YType::enumeration, "minThresholdUnitNonEcn"},
    maxthresholdnonecn{YType::uint32, "maxThresholdNonEcn"},
    maxthresholdunitnonecn{YType::enumeration, "maxThresholdUnitNonEcn"},
    dropavailnonecn{YType::uint8, "dropAvailNonEcn"}
{

    yang_name = "RandDetNonEcn-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::~RandDetNonEcnItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_data() const
{
    if (is_presence_container) return true;
    return minthresholdnonecn.is_set
	|| minthresholdunitnonecn.is_set
	|| maxthresholdnonecn.is_set
	|| maxthresholdunitnonecn.is_set
	|| dropavailnonecn.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthresholdnonecn.yfilter)
	|| ydk::is_set(minthresholdunitnonecn.yfilter)
	|| ydk::is_set(maxthresholdnonecn.yfilter)
	|| ydk::is_set(maxthresholdunitnonecn.yfilter)
	|| ydk::is_set(dropavailnonecn.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDetNonEcn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthresholdnonecn.is_set || is_set(minthresholdnonecn.yfilter)) leaf_name_data.push_back(minthresholdnonecn.get_name_leafdata());
    if (minthresholdunitnonecn.is_set || is_set(minthresholdunitnonecn.yfilter)) leaf_name_data.push_back(minthresholdunitnonecn.get_name_leafdata());
    if (maxthresholdnonecn.is_set || is_set(maxthresholdnonecn.yfilter)) leaf_name_data.push_back(maxthresholdnonecn.get_name_leafdata());
    if (maxthresholdunitnonecn.is_set || is_set(maxthresholdunitnonecn.yfilter)) leaf_name_data.push_back(maxthresholdunitnonecn.get_name_leafdata());
    if (dropavailnonecn.is_set || is_set(dropavailnonecn.yfilter)) leaf_name_data.push_back(dropavailnonecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn = value;
        minthresholdnonecn.value_namespace = name_space;
        minthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn = value;
        minthresholdunitnonecn.value_namespace = name_space;
        minthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn = value;
        maxthresholdnonecn.value_namespace = name_space;
        maxthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn = value;
        maxthresholdunitnonecn.value_namespace = name_space;
        maxthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn = value;
        dropavailnonecn.value_namespace = name_space;
        dropavailnonecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThresholdNonEcn" || name == "minThresholdUnitNonEcn" || name == "maxThresholdNonEcn" || name == "maxThresholdUnitNonEcn" || name == "dropAvailNonEcn")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtipqosPolicyInstToPMapItems()
    :
    rtipqospolicyinsttopmap_list(this, {"tdn"})
{

    yang_name = "rtipqosPolicyInstToPMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::~RtipqosPolicyInstToPMapItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_operation() const
{
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtipqosPolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtIpqosPolicyInstToPMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList>();
        ent_->parent = this;
        rtipqospolicyinsttopmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtipqospolicyinsttopmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtIpqosPolicyInstToPMap-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::RtIpqosPolicyInstToPMapList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtIpqosPolicyInstToPMap-list"; yang_parent_name = "rtipqosPolicyInstToPMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::~RtIpqosPolicyInstToPMapList()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtIpqosPolicyInstToPMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::RtclassMapToPolicyMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtclassMapToPolicyMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::~RtclassMapToPolicyMapItems()
{
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::CopyPMapItems::CopyPMapItems()
    :
    lastfrom{YType::str, "lastFrom"},
    lastto{YType::str, "lastTo"}
{

    yang_name = "copyPMap-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::CopyPMapItems::~CopyPMapItems()
{
}

bool System::IpqosItems::QueuingItems::CopyPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return lastfrom.is_set
	|| lastto.is_set;
}

bool System::IpqosItems::QueuingItems::CopyPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastfrom.yfilter)
	|| ydk::is_set(lastto.yfilter);
}

std::string System::IpqosItems::QueuingItems::CopyPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::CopyPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copyPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::CopyPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastfrom.is_set || is_set(lastfrom.yfilter)) leaf_name_data.push_back(lastfrom.get_name_leafdata());
    if (lastto.is_set || is_set(lastto.yfilter)) leaf_name_data.push_back(lastto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::QueuingItems::CopyPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::QueuingItems::CopyPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::QueuingItems::CopyPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastFrom")
    {
        lastfrom = value;
        lastfrom.value_namespace = name_space;
        lastfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTo")
    {
        lastto = value;
        lastto.value_namespace = name_space;
        lastto.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::CopyPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastFrom")
    {
        lastfrom.yfilter = yfilter;
    }
    if(value_path == "lastTo")
    {
        lastto.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::CopyPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastFrom" || name == "lastTo")
        return true;
    return false;
}

System::IpqosItems::NwItems::NwItems()
    :
    policy_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems>())
    , c_items(std::make_shared<System::IpqosItems::NwItems::CItems>())
    , p_items(std::make_shared<System::IpqosItems::NwItems::PItems>())
    , copypmap_items(std::make_shared<System::IpqosItems::NwItems::CopyPMapItems>())
{
    policy_items->parent = this;
    c_items->parent = this;
    p_items->parent = this;
    copypmap_items->parent = this;

    yang_name = "nw-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::~NwItems()
{
}

bool System::IpqosItems::NwItems::has_data() const
{
    if (is_presence_container) return true;
    return (policy_items !=  nullptr && policy_items->has_data())
	|| (c_items !=  nullptr && c_items->has_data())
	|| (p_items !=  nullptr && p_items->has_data())
	|| (copypmap_items !=  nullptr && copypmap_items->has_data());
}

bool System::IpqosItems::NwItems::has_operation() const
{
    return is_set(yfilter)
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (c_items !=  nullptr && c_items->has_operation())
	|| (p_items !=  nullptr && p_items->has_operation())
	|| (copypmap_items !=  nullptr && copypmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nw-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "c-items")
    {
        if(c_items == nullptr)
        {
            c_items = std::make_shared<System::IpqosItems::NwItems::CItems>();
        }
        return c_items;
    }

    if(child_yang_name == "p-items")
    {
        if(p_items == nullptr)
        {
            p_items = std::make_shared<System::IpqosItems::NwItems::PItems>();
        }
        return p_items;
    }

    if(child_yang_name == "copyPMap-items")
    {
        if(copypmap_items == nullptr)
        {
            copypmap_items = std::make_shared<System::IpqosItems::NwItems::CopyPMapItems>();
        }
        return copypmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    if(c_items != nullptr)
    {
        _children["c-items"] = c_items;
    }

    if(p_items != nullptr)
    {
        _children["p-items"] = p_items;
    }

    if(copypmap_items != nullptr)
    {
        _children["copyPMap-items"] = copypmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-items" || name == "c-items" || name == "p-items" || name == "copyPMap-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::PolicyItems()
    :
    in_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems>())
    , out_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems>())
{
    in_items->parent = this;
    out_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "nw-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::~PolicyItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (in_items !=  nullptr && in_items->has_data())
	|| (out_items !=  nullptr && out_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (in_items !=  nullptr && in_items->has_operation())
	|| (out_items !=  nullptr && out_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-items")
    {
        if(in_items == nullptr)
        {
            in_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems>();
        }
        return in_items;
    }

    if(child_yang_name == "out-items")
    {
        if(out_items == nullptr)
        {
            out_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems>();
        }
        return out_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in_items != nullptr)
    {
        _children["in-items"] = in_items;
    }

    if(out_items != nullptr)
    {
        _children["out-items"] = out_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-items" || name == "out-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::InItems()
    :
    intf_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems>())
    , sys_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::SysItems>())
    , pmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;
    pmap_items->parent = this;

    yang_name = "in-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::~InItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::InItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items" || name == "pmap-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::~IntfItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/in-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::~IfList()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/in-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        _children["queCmap-items"] = quecmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        ent_->parent = this;
        queuingstats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queuingstats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::SysItems()
    :
    pmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::~SysItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/in-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/in-items/sys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/in-items/sys-items/pmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/in-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/in-items/pmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::OutItems()
    :
    intf_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems>())
    , sys_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems>())
    , pmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;
    pmap_items->parent = this;

    yang_name = "out-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::~OutItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items" || name == "pmap-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::~IntfItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/out-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::~IfList()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/out-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        _children["queCmap-items"] = quecmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        ent_->parent = this;
        queuingstats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queuingstats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::SysItems()
    :
    pmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::~SysItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/out-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/out-items/sys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/out-items/sys-items/pmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/out-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/policy-items/out-items/pmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::CItems()
    :
    name_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "c-items"; yang_parent_name = "nw-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::CItems::~CItems()
{
}

bool System::IpqosItems::NwItems::CItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::IpqosItems::NwItems::CItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::IpqosItems::NwItems::CItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::CItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::NameItems()
    :
    cmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "c-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::CItems::NameItems::~NameItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmapinst_list.len(); index++)
    {
        if(cmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<cmapinst_list.len(); index++)
    {
        if(cmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/c-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::CItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CMapInst-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList>();
        ent_->parent = this;
        cmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CMapInst-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    configstatus{YType::uint32, "configStatus"}
        ,
    acl_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems>())
    , dscp_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems>())
    , iprtp_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems>())
    , packetlength_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems>())
    , cos_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems>())
    , mplsexperimental_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems>())
    , precedence_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems>())
    , protocol_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems>())
    , description_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems>())
    , dscpnot_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems>())
    , cosnot_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems>())
    , mplsexperimentalnot_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems>())
    , precedencenot_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems>())
    , protocolnot_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems>())
    , iprtpnot_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems>())
    , packetlengthnot_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems>())
    , grp_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems>())
    , rsclassmaptopolicymap_items(std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems>())
{
    acl_items->parent = this;
    dscp_items->parent = this;
    iprtp_items->parent = this;
    packetlength_items->parent = this;
    cos_items->parent = this;
    mplsexperimental_items->parent = this;
    precedence_items->parent = this;
    protocol_items->parent = this;
    description_items->parent = this;
    dscpnot_items->parent = this;
    cosnot_items->parent = this;
    mplsexperimentalnot_items->parent = this;
    precedencenot_items->parent = this;
    protocolnot_items->parent = this;
    iprtpnot_items->parent = this;
    packetlengthnot_items->parent = this;
    grp_items->parent = this;
    rsclassmaptopolicymap_items->parent = this;

    yang_name = "CMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::~CMapInstList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| configstatus.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (dscp_items !=  nullptr && dscp_items->has_data())
	|| (iprtp_items !=  nullptr && iprtp_items->has_data())
	|| (packetlength_items !=  nullptr && packetlength_items->has_data())
	|| (cos_items !=  nullptr && cos_items->has_data())
	|| (mplsexperimental_items !=  nullptr && mplsexperimental_items->has_data())
	|| (precedence_items !=  nullptr && precedence_items->has_data())
	|| (protocol_items !=  nullptr && protocol_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (dscpnot_items !=  nullptr && dscpnot_items->has_data())
	|| (cosnot_items !=  nullptr && cosnot_items->has_data())
	|| (mplsexperimentalnot_items !=  nullptr && mplsexperimentalnot_items->has_data())
	|| (precedencenot_items !=  nullptr && precedencenot_items->has_data())
	|| (protocolnot_items !=  nullptr && protocolnot_items->has_data())
	|| (iprtpnot_items !=  nullptr && iprtpnot_items->has_data())
	|| (packetlengthnot_items !=  nullptr && packetlengthnot_items->has_data())
	|| (grp_items !=  nullptr && grp_items->has_data())
	|| (rsclassmaptopolicymap_items !=  nullptr && rsclassmaptopolicymap_items->has_data());
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (dscp_items !=  nullptr && dscp_items->has_operation())
	|| (iprtp_items !=  nullptr && iprtp_items->has_operation())
	|| (packetlength_items !=  nullptr && packetlength_items->has_operation())
	|| (cos_items !=  nullptr && cos_items->has_operation())
	|| (mplsexperimental_items !=  nullptr && mplsexperimental_items->has_operation())
	|| (precedence_items !=  nullptr && precedence_items->has_operation())
	|| (protocol_items !=  nullptr && protocol_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (dscpnot_items !=  nullptr && dscpnot_items->has_operation())
	|| (cosnot_items !=  nullptr && cosnot_items->has_operation())
	|| (mplsexperimentalnot_items !=  nullptr && mplsexperimentalnot_items->has_operation())
	|| (precedencenot_items !=  nullptr && precedencenot_items->has_operation())
	|| (protocolnot_items !=  nullptr && protocolnot_items->has_operation())
	|| (iprtpnot_items !=  nullptr && iprtpnot_items->has_operation())
	|| (packetlengthnot_items !=  nullptr && packetlengthnot_items->has_operation())
	|| (grp_items !=  nullptr && grp_items->has_operation())
	|| (rsclassmaptopolicymap_items !=  nullptr && rsclassmaptopolicymap_items->has_operation());
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/c-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "dscp-items")
    {
        if(dscp_items == nullptr)
        {
            dscp_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems>();
        }
        return dscp_items;
    }

    if(child_yang_name == "ipRtp-items")
    {
        if(iprtp_items == nullptr)
        {
            iprtp_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems>();
        }
        return iprtp_items;
    }

    if(child_yang_name == "packetLength-items")
    {
        if(packetlength_items == nullptr)
        {
            packetlength_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems>();
        }
        return packetlength_items;
    }

    if(child_yang_name == "cos-items")
    {
        if(cos_items == nullptr)
        {
            cos_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems>();
        }
        return cos_items;
    }

    if(child_yang_name == "mplsExperimental-items")
    {
        if(mplsexperimental_items == nullptr)
        {
            mplsexperimental_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems>();
        }
        return mplsexperimental_items;
    }

    if(child_yang_name == "precedence-items")
    {
        if(precedence_items == nullptr)
        {
            precedence_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems>();
        }
        return precedence_items;
    }

    if(child_yang_name == "protocol-items")
    {
        if(protocol_items == nullptr)
        {
            protocol_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems>();
        }
        return protocol_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "dscpNot-items")
    {
        if(dscpnot_items == nullptr)
        {
            dscpnot_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems>();
        }
        return dscpnot_items;
    }

    if(child_yang_name == "cosNot-items")
    {
        if(cosnot_items == nullptr)
        {
            cosnot_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems>();
        }
        return cosnot_items;
    }

    if(child_yang_name == "mplsExperimentalNot-items")
    {
        if(mplsexperimentalnot_items == nullptr)
        {
            mplsexperimentalnot_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems>();
        }
        return mplsexperimentalnot_items;
    }

    if(child_yang_name == "precedenceNot-items")
    {
        if(precedencenot_items == nullptr)
        {
            precedencenot_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems>();
        }
        return precedencenot_items;
    }

    if(child_yang_name == "protocolNot-items")
    {
        if(protocolnot_items == nullptr)
        {
            protocolnot_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems>();
        }
        return protocolnot_items;
    }

    if(child_yang_name == "ipRtpNot-items")
    {
        if(iprtpnot_items == nullptr)
        {
            iprtpnot_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems>();
        }
        return iprtpnot_items;
    }

    if(child_yang_name == "packetLengthNot-items")
    {
        if(packetlengthnot_items == nullptr)
        {
            packetlengthnot_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems>();
        }
        return packetlengthnot_items;
    }

    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems>();
        }
        return grp_items;
    }

    if(child_yang_name == "rsclassMapToPolicyMap-items")
    {
        if(rsclassmaptopolicymap_items == nullptr)
        {
            rsclassmaptopolicymap_items = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems>();
        }
        return rsclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(dscp_items != nullptr)
    {
        _children["dscp-items"] = dscp_items;
    }

    if(iprtp_items != nullptr)
    {
        _children["ipRtp-items"] = iprtp_items;
    }

    if(packetlength_items != nullptr)
    {
        _children["packetLength-items"] = packetlength_items;
    }

    if(cos_items != nullptr)
    {
        _children["cos-items"] = cos_items;
    }

    if(mplsexperimental_items != nullptr)
    {
        _children["mplsExperimental-items"] = mplsexperimental_items;
    }

    if(precedence_items != nullptr)
    {
        _children["precedence-items"] = precedence_items;
    }

    if(protocol_items != nullptr)
    {
        _children["protocol-items"] = protocol_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(dscpnot_items != nullptr)
    {
        _children["dscpNot-items"] = dscpnot_items;
    }

    if(cosnot_items != nullptr)
    {
        _children["cosNot-items"] = cosnot_items;
    }

    if(mplsexperimentalnot_items != nullptr)
    {
        _children["mplsExperimentalNot-items"] = mplsexperimentalnot_items;
    }

    if(precedencenot_items != nullptr)
    {
        _children["precedenceNot-items"] = precedencenot_items;
    }

    if(protocolnot_items != nullptr)
    {
        _children["protocolNot-items"] = protocolnot_items;
    }

    if(iprtpnot_items != nullptr)
    {
        _children["ipRtpNot-items"] = iprtpnot_items;
    }

    if(packetlengthnot_items != nullptr)
    {
        _children["packetLengthNot-items"] = packetlengthnot_items;
    }

    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
    }

    if(rsclassmaptopolicymap_items != nullptr)
    {
        _children["rsclassMapToPolicyMap-items"] = rsclassmaptopolicymap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchType")
    {
        matchtype = value;
        matchtype.value_namespace = name_space;
        matchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "dscp-items" || name == "ipRtp-items" || name == "packetLength-items" || name == "cos-items" || name == "mplsExperimental-items" || name == "precedence-items" || name == "protocol-items" || name == "Description-items" || name == "dscpNot-items" || name == "cosNot-items" || name == "mplsExperimentalNot-items" || name == "precedenceNot-items" || name == "protocolNot-items" || name == "ipRtpNot-items" || name == "packetLengthNot-items" || name == "grp-items" || name == "rsclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclItems()
    :
    acl_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::~AclItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Acl-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList>();
        ent_->parent = this;
        acl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Acl-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::AclList()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Acl-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::~AclList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Acl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpItems()
    :
    dscp_list(this, {"val"})
{

    yang_name = "dscp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::~DscpItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscp_list.len(); index++)
    {
        if(dscp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::has_operation() const
{
    for (std::size_t index=0; index<dscp_list.len(); index++)
    {
        if(dscp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dscp-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList>();
        ent_->parent = this;
        dscp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dscp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dscp-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::DscpList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Dscp-list"; yang_parent_name = "dscp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::~DscpList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dscp-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::IpRtpItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "ipRtp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::~IpRtpItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::PacketLengthItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "packetLength-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::~PacketLengthItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packetLength-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosItems()
    :
    cos_list(this, {"val"})
{

    yang_name = "cos-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::~CosItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cos_list.len(); index++)
    {
        if(cos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::has_operation() const
{
    for (std::size_t index=0; index<cos_list.len(); index++)
    {
        if(cos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cos-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList>();
        ent_->parent = this;
        cos_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cos_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cos-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::CosList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Cos-list"; yang_parent_name = "cos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::~CosList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cos-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MplsExperimentalItems()
    :
    mplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimental-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::~MplsExperimentalItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_operation() const
{
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimental-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList>();
        ent_->parent = this;
        mplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsexperimental_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MPLSExperimental-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::MPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "MPLSExperimental-list"; yang_parent_name = "mplsExperimental-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::~MPLSExperimentalList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceItems()
    :
    precedence_list(this, {"val"})
{

    yang_name = "precedence-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::~PrecedenceItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_operation() const
{
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Precedence-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList>();
        ent_->parent = this;
        precedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : precedence_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Precedence-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::PrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Precedence-list"; yang_parent_name = "precedence-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::~PrecedenceList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Precedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolItems()
    :
    protocol_list(this, {"val"})
{

    yang_name = "protocol-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::~ProtocolItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::has_operation() const
{
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Protocol-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList>();
        ent_->parent = this;
        protocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Protocol-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::ProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Protocol-list"; yang_parent_name = "protocol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::~ProtocolList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Protocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::DscpNotItems()
    :
    notdscp_list(this, {"val"})
{

    yang_name = "dscpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::~DscpNotItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::has_operation() const
{
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotDscp-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList>();
        ent_->parent = this;
        notdscp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notdscp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotDscp-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::NotDscpList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotDscp-list"; yang_parent_name = "dscpNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::~NotDscpList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotDscp-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::CosNotItems()
    :
    notcos_list(this, {"val"})
{

    yang_name = "cosNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::~CosNotItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::has_operation() const
{
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cosNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotCos-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList>();
        ent_->parent = this;
        notcos_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notcos_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotCos-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::NotCosList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotCos-list"; yang_parent_name = "cosNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::~NotCosList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotCos-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::MplsExperimentalNotItems()
    :
    notmplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimentalNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::~MplsExperimentalNotItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_operation() const
{
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimentalNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotMPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList>();
        ent_->parent = this;
        notmplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notmplsexperimental_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotMPLSExperimental-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::NotMPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotMPLSExperimental-list"; yang_parent_name = "mplsExperimentalNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::~NotMPLSExperimentalList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotMPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::PrecedenceNotItems()
    :
    notprecedence_list(this, {"val"})
{

    yang_name = "precedenceNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::~PrecedenceNotItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedenceNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotPrecedence-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList>();
        ent_->parent = this;
        notprecedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprecedence_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotPrecedence-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::NotPrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotPrecedence-list"; yang_parent_name = "precedenceNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::~NotPrecedenceList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotPrecedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::ProtocolNotItems()
    :
    notprotocol_list(this, {"val"})
{

    yang_name = "protocolNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::~ProtocolNotItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotProtocol-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList>();
        ent_->parent = this;
        notprotocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprotocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotProtocol-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::NotProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotProtocol-list"; yang_parent_name = "protocolNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::~NotProtocolList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotProtocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::IpRtpNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "ipRtpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::~IpRtpNotItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRtpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::PacketLengthNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "packetLengthNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::~PacketLengthNotItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packetLengthNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::GrpItems()
    :
    qosgrp_list(this, {"id"})
{

    yang_name = "grp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::~GrpItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QoSGrp-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList>();
        ent_->parent = this;
        qosgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QoSGrp-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::QoSGrpList()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QoSGrp-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::~QoSGrpList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QoSGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsclassMapToPolicyMapItems()
    :
    rsclassmaptopolicymap_list(this, {"tdn"})
{

    yang_name = "rsclassMapToPolicyMap-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::~RsclassMapToPolicyMapItems()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsClassMapToPolicyMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList>();
        ent_->parent = this;
        rsclassmaptopolicymap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsclassmaptopolicymap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsClassMapToPolicyMap-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::RsClassMapToPolicyMapList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsClassMapToPolicyMap-list"; yang_parent_name = "rsclassMapToPolicyMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::~RsClassMapToPolicyMapList()
{
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsClassMapToPolicyMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::PItems()
    :
    name_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "p-items"; yang_parent_name = "nw-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PItems::~PItems()
{
}

bool System::IpqosItems::NwItems::PItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::IpqosItems::NwItems::PItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::IpqosItems::NwItems::PItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::NameItems()
    :
    pmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "p-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PItems::NameItems::~NameItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/p-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PMapInst-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList>();
        ent_->parent = this;
        pmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PMapInst-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::PMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    refcount{YType::uint32, "refCount"},
    configstatus{YType::uint32, "configStatus"}
        ,
    cmap_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems>())
    , description_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems>())
    , rtipqospolicyinsttopmap_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>())
    , rtclassmaptopolicymap_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>())
{
    cmap_items->parent = this;
    description_items->parent = this;
    rtipqospolicyinsttopmap_items->parent = this;
    rtclassmaptopolicymap_items->parent = this;

    yang_name = "PMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::~PMapInstList()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| refcount.is_set
	|| configstatus.is_set
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_data())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_data());
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_operation())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_operation());
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/p-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "rtipqosPolicyInstToPMap-items")
    {
        if(rtipqospolicyinsttopmap_items == nullptr)
        {
            rtipqospolicyinsttopmap_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>();
        }
        return rtipqospolicyinsttopmap_items;
    }

    if(child_yang_name == "rtclassMapToPolicyMap-items")
    {
        if(rtclassmaptopolicymap_items == nullptr)
        {
            rtclassmaptopolicymap_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>();
        }
        return rtclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(rtipqospolicyinsttopmap_items != nullptr)
    {
        _children["rtipqosPolicyInstToPMap-items"] = rtipqospolicyinsttopmap_items;
    }

    if(rtclassmaptopolicymap_items != nullptr)
    {
        _children["rtclassMapToPolicyMap-items"] = rtclassmaptopolicymap_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchType")
    {
        matchtype = value;
        matchtype.value_namespace = name_space;
        matchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmap-items" || name == "Description-items" || name == "rtipqosPolicyInstToPMap-items" || name == "rtclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "refCount" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::CmapItems()
    :
    matchcmap_list(this, {"name"})
{

    yang_name = "cmap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::~CmapItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchCMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList>();
        ent_->parent = this;
        matchcmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchcmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchCMap-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MatchCMapList()
    :
    name{YType::str, "name"},
    prevcmap{YType::str, "prevCMap"},
    nextcmap{YType::str, "nextCMap"},
    configstatus{YType::uint32, "configStatus"}
        ,
    setcos_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>())
    , mtu_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>())
    , setprecedence_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>())
    , setdscp_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>())
    , setgrp_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>())
    , setdlbdisable_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>())
    , queuelimit_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>())
    , pause_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>())
    , dpp_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>())
    , setbw_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>())
    , setrembw_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>())
    , shape_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>())
    , police_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>())
    , prio_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>())
    , randdet_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>())
    , randdetnonecn_items(std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>())
{
    setcos_items->parent = this;
    mtu_items->parent = this;
    setprecedence_items->parent = this;
    setdscp_items->parent = this;
    setgrp_items->parent = this;
    setdlbdisable_items->parent = this;
    queuelimit_items->parent = this;
    pause_items->parent = this;
    dpp_items->parent = this;
    setbw_items->parent = this;
    setrembw_items->parent = this;
    shape_items->parent = this;
    police_items->parent = this;
    prio_items->parent = this;
    randdet_items->parent = this;
    randdetnonecn_items->parent = this;

    yang_name = "MatchCMap-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::~MatchCMapList()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| prevcmap.is_set
	|| nextcmap.is_set
	|| configstatus.is_set
	|| (setcos_items !=  nullptr && setcos_items->has_data())
	|| (mtu_items !=  nullptr && mtu_items->has_data())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_data())
	|| (setdscp_items !=  nullptr && setdscp_items->has_data())
	|| (setgrp_items !=  nullptr && setgrp_items->has_data())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_data())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_data())
	|| (pause_items !=  nullptr && pause_items->has_data())
	|| (dpp_items !=  nullptr && dpp_items->has_data())
	|| (setbw_items !=  nullptr && setbw_items->has_data())
	|| (setrembw_items !=  nullptr && setrembw_items->has_data())
	|| (shape_items !=  nullptr && shape_items->has_data())
	|| (police_items !=  nullptr && police_items->has_data())
	|| (prio_items !=  nullptr && prio_items->has_data())
	|| (randdet_items !=  nullptr && randdet_items->has_data())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_data());
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prevcmap.yfilter)
	|| ydk::is_set(nextcmap.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (setcos_items !=  nullptr && setcos_items->has_operation())
	|| (mtu_items !=  nullptr && mtu_items->has_operation())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_operation())
	|| (setdscp_items !=  nullptr && setdscp_items->has_operation())
	|| (setgrp_items !=  nullptr && setgrp_items->has_operation())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_operation())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_operation())
	|| (pause_items !=  nullptr && pause_items->has_operation())
	|| (dpp_items !=  nullptr && dpp_items->has_operation())
	|| (setbw_items !=  nullptr && setbw_items->has_operation())
	|| (setrembw_items !=  nullptr && setrembw_items->has_operation())
	|| (shape_items !=  nullptr && shape_items->has_operation())
	|| (police_items !=  nullptr && police_items->has_operation())
	|| (prio_items !=  nullptr && prio_items->has_operation())
	|| (randdet_items !=  nullptr && randdet_items->has_operation())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_operation());
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchCMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prevcmap.is_set || is_set(prevcmap.yfilter)) leaf_name_data.push_back(prevcmap.get_name_leafdata());
    if (nextcmap.is_set || is_set(nextcmap.yfilter)) leaf_name_data.push_back(nextcmap.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setCos-items")
    {
        if(setcos_items == nullptr)
        {
            setcos_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>();
        }
        return setcos_items;
    }

    if(child_yang_name == "mtu-items")
    {
        if(mtu_items == nullptr)
        {
            mtu_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>();
        }
        return mtu_items;
    }

    if(child_yang_name == "setPrecedence-items")
    {
        if(setprecedence_items == nullptr)
        {
            setprecedence_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>();
        }
        return setprecedence_items;
    }

    if(child_yang_name == "setDscp-items")
    {
        if(setdscp_items == nullptr)
        {
            setdscp_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>();
        }
        return setdscp_items;
    }

    if(child_yang_name == "setGrp-items")
    {
        if(setgrp_items == nullptr)
        {
            setgrp_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>();
        }
        return setgrp_items;
    }

    if(child_yang_name == "setDlbDisable-items")
    {
        if(setdlbdisable_items == nullptr)
        {
            setdlbdisable_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>();
        }
        return setdlbdisable_items;
    }

    if(child_yang_name == "QueueLimit-items")
    {
        if(queuelimit_items == nullptr)
        {
            queuelimit_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>();
        }
        return queuelimit_items;
    }

    if(child_yang_name == "pause-items")
    {
        if(pause_items == nullptr)
        {
            pause_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>();
        }
        return pause_items;
    }

    if(child_yang_name == "dpp-items")
    {
        if(dpp_items == nullptr)
        {
            dpp_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>();
        }
        return dpp_items;
    }

    if(child_yang_name == "setBW-items")
    {
        if(setbw_items == nullptr)
        {
            setbw_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>();
        }
        return setbw_items;
    }

    if(child_yang_name == "setRemBW-items")
    {
        if(setrembw_items == nullptr)
        {
            setrembw_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>();
        }
        return setrembw_items;
    }

    if(child_yang_name == "shape-items")
    {
        if(shape_items == nullptr)
        {
            shape_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>();
        }
        return shape_items;
    }

    if(child_yang_name == "police-items")
    {
        if(police_items == nullptr)
        {
            police_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>();
        }
        return police_items;
    }

    if(child_yang_name == "prio-items")
    {
        if(prio_items == nullptr)
        {
            prio_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>();
        }
        return prio_items;
    }

    if(child_yang_name == "RandDet-items")
    {
        if(randdet_items == nullptr)
        {
            randdet_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>();
        }
        return randdet_items;
    }

    if(child_yang_name == "RandDetNonEcn-items")
    {
        if(randdetnonecn_items == nullptr)
        {
            randdetnonecn_items = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>();
        }
        return randdetnonecn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(setcos_items != nullptr)
    {
        _children["setCos-items"] = setcos_items;
    }

    if(mtu_items != nullptr)
    {
        _children["mtu-items"] = mtu_items;
    }

    if(setprecedence_items != nullptr)
    {
        _children["setPrecedence-items"] = setprecedence_items;
    }

    if(setdscp_items != nullptr)
    {
        _children["setDscp-items"] = setdscp_items;
    }

    if(setgrp_items != nullptr)
    {
        _children["setGrp-items"] = setgrp_items;
    }

    if(setdlbdisable_items != nullptr)
    {
        _children["setDlbDisable-items"] = setdlbdisable_items;
    }

    if(queuelimit_items != nullptr)
    {
        _children["QueueLimit-items"] = queuelimit_items;
    }

    if(pause_items != nullptr)
    {
        _children["pause-items"] = pause_items;
    }

    if(dpp_items != nullptr)
    {
        _children["dpp-items"] = dpp_items;
    }

    if(setbw_items != nullptr)
    {
        _children["setBW-items"] = setbw_items;
    }

    if(setrembw_items != nullptr)
    {
        _children["setRemBW-items"] = setrembw_items;
    }

    if(shape_items != nullptr)
    {
        _children["shape-items"] = shape_items;
    }

    if(police_items != nullptr)
    {
        _children["police-items"] = police_items;
    }

    if(prio_items != nullptr)
    {
        _children["prio-items"] = prio_items;
    }

    if(randdet_items != nullptr)
    {
        _children["RandDet-items"] = randdet_items;
    }

    if(randdetnonecn_items != nullptr)
    {
        _children["RandDetNonEcn-items"] = randdetnonecn_items;
    }

    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevCMap")
    {
        prevcmap = value;
        prevcmap.value_namespace = name_space;
        prevcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextCMap")
    {
        nextcmap = value;
        nextcmap.value_namespace = name_space;
        nextcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prevCMap")
    {
        prevcmap.yfilter = yfilter;
    }
    if(value_path == "nextCMap")
    {
        nextcmap.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setCos-items" || name == "mtu-items" || name == "setPrecedence-items" || name == "setDscp-items" || name == "setGrp-items" || name == "setDlbDisable-items" || name == "QueueLimit-items" || name == "pause-items" || name == "dpp-items" || name == "setBW-items" || name == "setRemBW-items" || name == "shape-items" || name == "police-items" || name == "prio-items" || name == "RandDet-items" || name == "RandDetNonEcn-items" || name == "name" || name == "prevCMap" || name == "nextCMap" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::SetCosItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setCos-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::~SetCosItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setCos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::MtuItems()
    :
    value_{YType::uint16, "value"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "mtu-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::~MtuItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::SetPrecedenceItems()
    :
    val{YType::enumeration, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setPrecedence-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::~SetPrecedenceItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setPrecedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::SetDscpItems()
    :
    val{YType::uint8, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDscp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::~SetDscpItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::SetGrpItems()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setGrp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::~SetGrpItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setGrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::SetDlbDisableItems()
    :
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDlbDisable-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::~SetDlbDisableItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDlbDisable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::QueueLimitItems()
    :
    queuelimitval{YType::uint64, "QueueLimitVal"},
    queuelimitunit{YType::enumeration, "QueueLimitUnit"},
    dynamic{YType::uint8, "dynamic"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QueueLimit-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::~QueueLimitItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_data() const
{
    if (is_presence_container) return true;
    return queuelimitval.is_set
	|| queuelimitunit.is_set
	|| dynamic.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queuelimitval.yfilter)
	|| ydk::is_set(queuelimitunit.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueueLimit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queuelimitval.is_set || is_set(queuelimitval.yfilter)) leaf_name_data.push_back(queuelimitval.get_name_leafdata());
    if (queuelimitunit.is_set || is_set(queuelimitunit.yfilter)) leaf_name_data.push_back(queuelimitunit.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval = value;
        queuelimitval.value_namespace = name_space;
        queuelimitval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit = value;
        queuelimitunit.value_namespace = name_space;
        queuelimitunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval.yfilter = yfilter;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueueLimitVal" || name == "QueueLimitUnit" || name == "dynamic" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::PauseItems()
    :
    buffersize{YType::uint64, "bufferSize"},
    pausethreshold{YType::uint64, "pauseThreshold"},
    resumethreshold{YType::uint64, "resumeThreshold"},
    pfccos0{YType::boolean, "pfcCos0"},
    pfccos1{YType::boolean, "pfcCos1"},
    pfccos2{YType::boolean, "pfcCos2"},
    pfccos3{YType::boolean, "pfcCos3"},
    pfccos4{YType::boolean, "pfcCos4"},
    pfccos5{YType::boolean, "pfcCos5"},
    pfccos6{YType::boolean, "pfcCos6"},
    pfccos7{YType::boolean, "pfcCos7"},
    receive{YType::boolean, "receive"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "pause-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::~PauseItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_data() const
{
    if (is_presence_container) return true;
    return buffersize.is_set
	|| pausethreshold.is_set
	|| resumethreshold.is_set
	|| pfccos0.is_set
	|| pfccos1.is_set
	|| pfccos2.is_set
	|| pfccos3.is_set
	|| pfccos4.is_set
	|| pfccos5.is_set
	|| pfccos6.is_set
	|| pfccos7.is_set
	|| receive.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter)
	|| ydk::is_set(pausethreshold.yfilter)
	|| ydk::is_set(resumethreshold.yfilter)
	|| ydk::is_set(pfccos0.yfilter)
	|| ydk::is_set(pfccos1.yfilter)
	|| ydk::is_set(pfccos2.yfilter)
	|| ydk::is_set(pfccos3.yfilter)
	|| ydk::is_set(pfccos4.yfilter)
	|| ydk::is_set(pfccos5.yfilter)
	|| ydk::is_set(pfccos6.yfilter)
	|| ydk::is_set(pfccos7.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());
    if (pausethreshold.is_set || is_set(pausethreshold.yfilter)) leaf_name_data.push_back(pausethreshold.get_name_leafdata());
    if (resumethreshold.is_set || is_set(resumethreshold.yfilter)) leaf_name_data.push_back(resumethreshold.get_name_leafdata());
    if (pfccos0.is_set || is_set(pfccos0.yfilter)) leaf_name_data.push_back(pfccos0.get_name_leafdata());
    if (pfccos1.is_set || is_set(pfccos1.yfilter)) leaf_name_data.push_back(pfccos1.get_name_leafdata());
    if (pfccos2.is_set || is_set(pfccos2.yfilter)) leaf_name_data.push_back(pfccos2.get_name_leafdata());
    if (pfccos3.is_set || is_set(pfccos3.yfilter)) leaf_name_data.push_back(pfccos3.get_name_leafdata());
    if (pfccos4.is_set || is_set(pfccos4.yfilter)) leaf_name_data.push_back(pfccos4.get_name_leafdata());
    if (pfccos5.is_set || is_set(pfccos5.yfilter)) leaf_name_data.push_back(pfccos5.get_name_leafdata());
    if (pfccos6.is_set || is_set(pfccos6.yfilter)) leaf_name_data.push_back(pfccos6.get_name_leafdata());
    if (pfccos7.is_set || is_set(pfccos7.yfilter)) leaf_name_data.push_back(pfccos7.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferSize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold = value;
        pausethreshold.value_namespace = name_space;
        pausethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold = value;
        resumethreshold.value_namespace = name_space;
        resumethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0 = value;
        pfccos0.value_namespace = name_space;
        pfccos0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1 = value;
        pfccos1.value_namespace = name_space;
        pfccos1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2 = value;
        pfccos2.value_namespace = name_space;
        pfccos2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3 = value;
        pfccos3.value_namespace = name_space;
        pfccos3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4 = value;
        pfccos4.value_namespace = name_space;
        pfccos4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5 = value;
        pfccos5.value_namespace = name_space;
        pfccos5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6 = value;
        pfccos6.value_namespace = name_space;
        pfccos6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7 = value;
        pfccos7.value_namespace = name_space;
        pfccos7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferSize")
    {
        buffersize.yfilter = yfilter;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold.yfilter = yfilter;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold.yfilter = yfilter;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0.yfilter = yfilter;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1.yfilter = yfilter;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2.yfilter = yfilter;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3.yfilter = yfilter;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4.yfilter = yfilter;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5.yfilter = yfilter;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6.yfilter = yfilter;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferSize" || name == "pauseThreshold" || name == "resumeThreshold" || name == "pfcCos0" || name == "pfcCos1" || name == "pfcCos2" || name == "pfcCos3" || name == "pfcCos4" || name == "pfcCos5" || name == "pfcCos6" || name == "pfcCos7" || name == "receive" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::DppItems()
    :
    setqosgroup{YType::uint16, "setQosGroup"}
{

    yang_name = "dpp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::~DppItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_data() const
{
    if (is_presence_container) return true;
    return setqosgroup.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setqosgroup.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setqosgroup.is_set || is_set(setqosgroup.yfilter)) leaf_name_data.push_back(setqosgroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup = value;
        setqosgroup.value_namespace = name_space;
        setqosgroup.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setQosGroup")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::SetBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::~SetBWItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::SetRemBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setRemBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::~SetRemBWItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setRemBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::ShapeItems()
    :
    min{YType::uint64, "min"},
    minrateunit{YType::enumeration, "minRateUnit"},
    max{YType::uint64, "max"},
    maxrateunit{YType::enumeration, "maxRateUnit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "shape-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::~ShapeItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| minrateunit.is_set
	|| max.is_set
	|| maxrateunit.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(minrateunit.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(maxrateunit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (minrateunit.is_set || is_set(minrateunit.yfilter)) leaf_name_data.push_back(minrateunit.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (maxrateunit.is_set || is_set(maxrateunit.yfilter)) leaf_name_data.push_back(maxrateunit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit = value;
        minrateunit.value_namespace = name_space;
        minrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit = value;
        maxrateunit.value_namespace = name_space;
        maxrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "minRateUnit" || name == "max" || name == "maxRateUnit" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::PoliceItems()
    :
    cirrate{YType::uint64, "cirRate"},
    cirunit{YType::enumeration, "cirUnit"},
    bcrate{YType::uint64, "bcRate"},
    bcunit{YType::enumeration, "bcUnit"},
    pirrate{YType::uint64, "pirRate"},
    pirunit{YType::enumeration, "pirUnit"},
    berate{YType::uint64, "beRate"},
    beunit{YType::enumeration, "beUnit"},
    conformaction{YType::enumeration, "conformAction"},
    conformsetcostransmit{YType::uint8, "conformSetCosTransmit"},
    conformsetdscptransmit{YType::uint8, "conformSetDscpTransmit"},
    conformsetprectransmit{YType::enumeration, "conformSetPrecTransmit"},
    conformsetqosgrptransmit{YType::uint16, "conformSetQosGrpTransmit"},
    exceedaction{YType::enumeration, "exceedAction"},
    exceedsetcostransmit{YType::uint8, "exceedSetCosTransmit"},
    exceedsetdscptransmit{YType::uint8, "exceedSetDscpTransmit"},
    exceedsetprectransmit{YType::enumeration, "exceedSetPrecTransmit"},
    exceedsetqosgrptransmit{YType::uint16, "exceedSetQosGrpTransmit"},
    violateaction{YType::enumeration, "violateAction"},
    violatesetcostransmit{YType::uint8, "violateSetCosTransmit"},
    violatesetdscptransmit{YType::uint8, "violateSetDscpTransmit"},
    violatesetprectransmit{YType::enumeration, "violateSetPrecTransmit"},
    violatesetqosgrptransmit{YType::uint16, "violateSetQosGrpTransmit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "police-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::~PoliceItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_data() const
{
    if (is_presence_container) return true;
    return cirrate.is_set
	|| cirunit.is_set
	|| bcrate.is_set
	|| bcunit.is_set
	|| pirrate.is_set
	|| pirunit.is_set
	|| berate.is_set
	|| beunit.is_set
	|| conformaction.is_set
	|| conformsetcostransmit.is_set
	|| conformsetdscptransmit.is_set
	|| conformsetprectransmit.is_set
	|| conformsetqosgrptransmit.is_set
	|| exceedaction.is_set
	|| exceedsetcostransmit.is_set
	|| exceedsetdscptransmit.is_set
	|| exceedsetprectransmit.is_set
	|| exceedsetqosgrptransmit.is_set
	|| violateaction.is_set
	|| violatesetcostransmit.is_set
	|| violatesetdscptransmit.is_set
	|| violatesetprectransmit.is_set
	|| violatesetqosgrptransmit.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cirrate.yfilter)
	|| ydk::is_set(cirunit.yfilter)
	|| ydk::is_set(bcrate.yfilter)
	|| ydk::is_set(bcunit.yfilter)
	|| ydk::is_set(pirrate.yfilter)
	|| ydk::is_set(pirunit.yfilter)
	|| ydk::is_set(berate.yfilter)
	|| ydk::is_set(beunit.yfilter)
	|| ydk::is_set(conformaction.yfilter)
	|| ydk::is_set(conformsetcostransmit.yfilter)
	|| ydk::is_set(conformsetdscptransmit.yfilter)
	|| ydk::is_set(conformsetprectransmit.yfilter)
	|| ydk::is_set(conformsetqosgrptransmit.yfilter)
	|| ydk::is_set(exceedaction.yfilter)
	|| ydk::is_set(exceedsetcostransmit.yfilter)
	|| ydk::is_set(exceedsetdscptransmit.yfilter)
	|| ydk::is_set(exceedsetprectransmit.yfilter)
	|| ydk::is_set(exceedsetqosgrptransmit.yfilter)
	|| ydk::is_set(violateaction.yfilter)
	|| ydk::is_set(violatesetcostransmit.yfilter)
	|| ydk::is_set(violatesetdscptransmit.yfilter)
	|| ydk::is_set(violatesetprectransmit.yfilter)
	|| ydk::is_set(violatesetqosgrptransmit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cirrate.is_set || is_set(cirrate.yfilter)) leaf_name_data.push_back(cirrate.get_name_leafdata());
    if (cirunit.is_set || is_set(cirunit.yfilter)) leaf_name_data.push_back(cirunit.get_name_leafdata());
    if (bcrate.is_set || is_set(bcrate.yfilter)) leaf_name_data.push_back(bcrate.get_name_leafdata());
    if (bcunit.is_set || is_set(bcunit.yfilter)) leaf_name_data.push_back(bcunit.get_name_leafdata());
    if (pirrate.is_set || is_set(pirrate.yfilter)) leaf_name_data.push_back(pirrate.get_name_leafdata());
    if (pirunit.is_set || is_set(pirunit.yfilter)) leaf_name_data.push_back(pirunit.get_name_leafdata());
    if (berate.is_set || is_set(berate.yfilter)) leaf_name_data.push_back(berate.get_name_leafdata());
    if (beunit.is_set || is_set(beunit.yfilter)) leaf_name_data.push_back(beunit.get_name_leafdata());
    if (conformaction.is_set || is_set(conformaction.yfilter)) leaf_name_data.push_back(conformaction.get_name_leafdata());
    if (conformsetcostransmit.is_set || is_set(conformsetcostransmit.yfilter)) leaf_name_data.push_back(conformsetcostransmit.get_name_leafdata());
    if (conformsetdscptransmit.is_set || is_set(conformsetdscptransmit.yfilter)) leaf_name_data.push_back(conformsetdscptransmit.get_name_leafdata());
    if (conformsetprectransmit.is_set || is_set(conformsetprectransmit.yfilter)) leaf_name_data.push_back(conformsetprectransmit.get_name_leafdata());
    if (conformsetqosgrptransmit.is_set || is_set(conformsetqosgrptransmit.yfilter)) leaf_name_data.push_back(conformsetqosgrptransmit.get_name_leafdata());
    if (exceedaction.is_set || is_set(exceedaction.yfilter)) leaf_name_data.push_back(exceedaction.get_name_leafdata());
    if (exceedsetcostransmit.is_set || is_set(exceedsetcostransmit.yfilter)) leaf_name_data.push_back(exceedsetcostransmit.get_name_leafdata());
    if (exceedsetdscptransmit.is_set || is_set(exceedsetdscptransmit.yfilter)) leaf_name_data.push_back(exceedsetdscptransmit.get_name_leafdata());
    if (exceedsetprectransmit.is_set || is_set(exceedsetprectransmit.yfilter)) leaf_name_data.push_back(exceedsetprectransmit.get_name_leafdata());
    if (exceedsetqosgrptransmit.is_set || is_set(exceedsetqosgrptransmit.yfilter)) leaf_name_data.push_back(exceedsetqosgrptransmit.get_name_leafdata());
    if (violateaction.is_set || is_set(violateaction.yfilter)) leaf_name_data.push_back(violateaction.get_name_leafdata());
    if (violatesetcostransmit.is_set || is_set(violatesetcostransmit.yfilter)) leaf_name_data.push_back(violatesetcostransmit.get_name_leafdata());
    if (violatesetdscptransmit.is_set || is_set(violatesetdscptransmit.yfilter)) leaf_name_data.push_back(violatesetdscptransmit.get_name_leafdata());
    if (violatesetprectransmit.is_set || is_set(violatesetprectransmit.yfilter)) leaf_name_data.push_back(violatesetprectransmit.get_name_leafdata());
    if (violatesetqosgrptransmit.is_set || is_set(violatesetqosgrptransmit.yfilter)) leaf_name_data.push_back(violatesetqosgrptransmit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cirRate")
    {
        cirrate = value;
        cirrate.value_namespace = name_space;
        cirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cirUnit")
    {
        cirunit = value;
        cirunit.value_namespace = name_space;
        cirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcRate")
    {
        bcrate = value;
        bcrate.value_namespace = name_space;
        bcrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcUnit")
    {
        bcunit = value;
        bcunit.value_namespace = name_space;
        bcunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirRate")
    {
        pirrate = value;
        pirrate.value_namespace = name_space;
        pirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirUnit")
    {
        pirunit = value;
        pirunit.value_namespace = name_space;
        pirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beRate")
    {
        berate = value;
        berate.value_namespace = name_space;
        berate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beUnit")
    {
        beunit = value;
        beunit.value_namespace = name_space;
        beunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformAction")
    {
        conformaction = value;
        conformaction.value_namespace = name_space;
        conformaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit = value;
        conformsetcostransmit.value_namespace = name_space;
        conformsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit = value;
        conformsetdscptransmit.value_namespace = name_space;
        conformsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit = value;
        conformsetprectransmit.value_namespace = name_space;
        conformsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit = value;
        conformsetqosgrptransmit.value_namespace = name_space;
        conformsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedAction")
    {
        exceedaction = value;
        exceedaction.value_namespace = name_space;
        exceedaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit = value;
        exceedsetcostransmit.value_namespace = name_space;
        exceedsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit = value;
        exceedsetdscptransmit.value_namespace = name_space;
        exceedsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit = value;
        exceedsetprectransmit.value_namespace = name_space;
        exceedsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit = value;
        exceedsetqosgrptransmit.value_namespace = name_space;
        exceedsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateAction")
    {
        violateaction = value;
        violateaction.value_namespace = name_space;
        violateaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit = value;
        violatesetcostransmit.value_namespace = name_space;
        violatesetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit = value;
        violatesetdscptransmit.value_namespace = name_space;
        violatesetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit = value;
        violatesetprectransmit.value_namespace = name_space;
        violatesetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit = value;
        violatesetqosgrptransmit.value_namespace = name_space;
        violatesetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cirRate")
    {
        cirrate.yfilter = yfilter;
    }
    if(value_path == "cirUnit")
    {
        cirunit.yfilter = yfilter;
    }
    if(value_path == "bcRate")
    {
        bcrate.yfilter = yfilter;
    }
    if(value_path == "bcUnit")
    {
        bcunit.yfilter = yfilter;
    }
    if(value_path == "pirRate")
    {
        pirrate.yfilter = yfilter;
    }
    if(value_path == "pirUnit")
    {
        pirunit.yfilter = yfilter;
    }
    if(value_path == "beRate")
    {
        berate.yfilter = yfilter;
    }
    if(value_path == "beUnit")
    {
        beunit.yfilter = yfilter;
    }
    if(value_path == "conformAction")
    {
        conformaction.yfilter = yfilter;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedAction")
    {
        exceedaction.yfilter = yfilter;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "violateAction")
    {
        violateaction.yfilter = yfilter;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cirRate" || name == "cirUnit" || name == "bcRate" || name == "bcUnit" || name == "pirRate" || name == "pirUnit" || name == "beRate" || name == "beUnit" || name == "conformAction" || name == "conformSetCosTransmit" || name == "conformSetDscpTransmit" || name == "conformSetPrecTransmit" || name == "conformSetQosGrpTransmit" || name == "exceedAction" || name == "exceedSetCosTransmit" || name == "exceedSetDscpTransmit" || name == "exceedSetPrecTransmit" || name == "exceedSetQosGrpTransmit" || name == "violateAction" || name == "violateSetCosTransmit" || name == "violateSetDscpTransmit" || name == "violateSetPrecTransmit" || name == "violateSetQosGrpTransmit" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::PrioItems()
    :
    level{YType::uint8, "level"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "prio-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::~PrioItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::RandDetItems()
    :
    minthreshold{YType::uint32, "minThreshold"},
    minthresholdunit{YType::enumeration, "minThresholdUnit"},
    maxthreshold{YType::uint32, "maxThreshold"},
    maxthresholdunit{YType::enumeration, "maxThresholdUnit"},
    dropavail{YType::uint8, "dropAvail"},
    weight{YType::uint8, "weight"},
    capaverage{YType::boolean, "capAverage"},
    optimization{YType::uint8, "optimization"},
    ecn{YType::boolean, "ecn"}
{

    yang_name = "RandDet-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::~RandDetItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_data() const
{
    if (is_presence_container) return true;
    return minthreshold.is_set
	|| minthresholdunit.is_set
	|| maxthreshold.is_set
	|| maxthresholdunit.is_set
	|| dropavail.is_set
	|| weight.is_set
	|| capaverage.is_set
	|| optimization.is_set
	|| ecn.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthreshold.yfilter)
	|| ydk::is_set(minthresholdunit.yfilter)
	|| ydk::is_set(maxthreshold.yfilter)
	|| ydk::is_set(maxthresholdunit.yfilter)
	|| ydk::is_set(dropavail.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(capaverage.yfilter)
	|| ydk::is_set(optimization.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDet-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthreshold.is_set || is_set(minthreshold.yfilter)) leaf_name_data.push_back(minthreshold.get_name_leafdata());
    if (minthresholdunit.is_set || is_set(minthresholdunit.yfilter)) leaf_name_data.push_back(minthresholdunit.get_name_leafdata());
    if (maxthreshold.is_set || is_set(maxthreshold.yfilter)) leaf_name_data.push_back(maxthreshold.get_name_leafdata());
    if (maxthresholdunit.is_set || is_set(maxthresholdunit.yfilter)) leaf_name_data.push_back(maxthresholdunit.get_name_leafdata());
    if (dropavail.is_set || is_set(dropavail.yfilter)) leaf_name_data.push_back(dropavail.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (capaverage.is_set || is_set(capaverage.yfilter)) leaf_name_data.push_back(capaverage.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThreshold")
    {
        minthreshold = value;
        minthreshold.value_namespace = name_space;
        minthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit = value;
        minthresholdunit.value_namespace = name_space;
        minthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold = value;
        maxthreshold.value_namespace = name_space;
        maxthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit = value;
        maxthresholdunit.value_namespace = name_space;
        maxthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvail")
    {
        dropavail = value;
        dropavail.value_namespace = name_space;
        dropavail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capAverage")
    {
        capaverage = value;
        capaverage.value_namespace = name_space;
        capaverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThreshold")
    {
        minthreshold.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit.yfilter = yfilter;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit.yfilter = yfilter;
    }
    if(value_path == "dropAvail")
    {
        dropavail.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "capAverage")
    {
        capaverage.yfilter = yfilter;
    }
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThreshold" || name == "minThresholdUnit" || name == "maxThreshold" || name == "maxThresholdUnit" || name == "dropAvail" || name == "weight" || name == "capAverage" || name == "optimization" || name == "ecn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::RandDetNonEcnItems()
    :
    minthresholdnonecn{YType::uint32, "minThresholdNonEcn"},
    minthresholdunitnonecn{YType::enumeration, "minThresholdUnitNonEcn"},
    maxthresholdnonecn{YType::uint32, "maxThresholdNonEcn"},
    maxthresholdunitnonecn{YType::enumeration, "maxThresholdUnitNonEcn"},
    dropavailnonecn{YType::uint8, "dropAvailNonEcn"}
{

    yang_name = "RandDetNonEcn-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::~RandDetNonEcnItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_data() const
{
    if (is_presence_container) return true;
    return minthresholdnonecn.is_set
	|| minthresholdunitnonecn.is_set
	|| maxthresholdnonecn.is_set
	|| maxthresholdunitnonecn.is_set
	|| dropavailnonecn.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthresholdnonecn.yfilter)
	|| ydk::is_set(minthresholdunitnonecn.yfilter)
	|| ydk::is_set(maxthresholdnonecn.yfilter)
	|| ydk::is_set(maxthresholdunitnonecn.yfilter)
	|| ydk::is_set(dropavailnonecn.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDetNonEcn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthresholdnonecn.is_set || is_set(minthresholdnonecn.yfilter)) leaf_name_data.push_back(minthresholdnonecn.get_name_leafdata());
    if (minthresholdunitnonecn.is_set || is_set(minthresholdunitnonecn.yfilter)) leaf_name_data.push_back(minthresholdunitnonecn.get_name_leafdata());
    if (maxthresholdnonecn.is_set || is_set(maxthresholdnonecn.yfilter)) leaf_name_data.push_back(maxthresholdnonecn.get_name_leafdata());
    if (maxthresholdunitnonecn.is_set || is_set(maxthresholdunitnonecn.yfilter)) leaf_name_data.push_back(maxthresholdunitnonecn.get_name_leafdata());
    if (dropavailnonecn.is_set || is_set(dropavailnonecn.yfilter)) leaf_name_data.push_back(dropavailnonecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn = value;
        minthresholdnonecn.value_namespace = name_space;
        minthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn = value;
        minthresholdunitnonecn.value_namespace = name_space;
        minthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn = value;
        maxthresholdnonecn.value_namespace = name_space;
        maxthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn = value;
        maxthresholdunitnonecn.value_namespace = name_space;
        maxthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn = value;
        dropavailnonecn.value_namespace = name_space;
        dropavailnonecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThresholdNonEcn" || name == "minThresholdUnitNonEcn" || name == "maxThresholdNonEcn" || name == "maxThresholdUnitNonEcn" || name == "dropAvailNonEcn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtipqosPolicyInstToPMapItems()
    :
    rtipqospolicyinsttopmap_list(this, {"tdn"})
{

    yang_name = "rtipqosPolicyInstToPMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::~RtipqosPolicyInstToPMapItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_operation() const
{
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtipqosPolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtIpqosPolicyInstToPMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList>();
        ent_->parent = this;
        rtipqospolicyinsttopmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtipqospolicyinsttopmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtIpqosPolicyInstToPMap-list")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::RtIpqosPolicyInstToPMapList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtIpqosPolicyInstToPMap-list"; yang_parent_name = "rtipqosPolicyInstToPMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::~RtIpqosPolicyInstToPMapList()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtIpqosPolicyInstToPMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::RtclassMapToPolicyMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtclassMapToPolicyMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::~RtclassMapToPolicyMapItems()
{
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::NwItems::CopyPMapItems::CopyPMapItems()
    :
    lastfrom{YType::str, "lastFrom"},
    lastto{YType::str, "lastTo"}
{

    yang_name = "copyPMap-items"; yang_parent_name = "nw-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::NwItems::CopyPMapItems::~CopyPMapItems()
{
}

bool System::IpqosItems::NwItems::CopyPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return lastfrom.is_set
	|| lastto.is_set;
}

bool System::IpqosItems::NwItems::CopyPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastfrom.yfilter)
	|| ydk::is_set(lastto.yfilter);
}

std::string System::IpqosItems::NwItems::CopyPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/nw-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::NwItems::CopyPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copyPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::NwItems::CopyPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastfrom.is_set || is_set(lastfrom.yfilter)) leaf_name_data.push_back(lastfrom.get_name_leafdata());
    if (lastto.is_set || is_set(lastto.yfilter)) leaf_name_data.push_back(lastto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::NwItems::CopyPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::NwItems::CopyPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::NwItems::CopyPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastFrom")
    {
        lastfrom = value;
        lastfrom.value_namespace = name_space;
        lastfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTo")
    {
        lastto = value;
        lastto.value_namespace = name_space;
        lastto.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::NwItems::CopyPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastFrom")
    {
        lastfrom.yfilter = yfilter;
    }
    if(value_path == "lastTo")
    {
        lastto.yfilter = yfilter;
    }
}

bool System::IpqosItems::NwItems::CopyPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastFrom" || name == "lastTo")
        return true;
    return false;
}

System::IpqosItems::DfltItems::DfltItems()
    :
    policy_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems>())
    , c_items(std::make_shared<System::IpqosItems::DfltItems::CItems>())
    , p_items(std::make_shared<System::IpqosItems::DfltItems::PItems>())
    , copypmap_items(std::make_shared<System::IpqosItems::DfltItems::CopyPMapItems>())
{
    policy_items->parent = this;
    c_items->parent = this;
    p_items->parent = this;
    copypmap_items->parent = this;

    yang_name = "dflt-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::~DfltItems()
{
}

bool System::IpqosItems::DfltItems::has_data() const
{
    if (is_presence_container) return true;
    return (policy_items !=  nullptr && policy_items->has_data())
	|| (c_items !=  nullptr && c_items->has_data())
	|| (p_items !=  nullptr && p_items->has_data())
	|| (copypmap_items !=  nullptr && copypmap_items->has_data());
}

bool System::IpqosItems::DfltItems::has_operation() const
{
    return is_set(yfilter)
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (c_items !=  nullptr && c_items->has_operation())
	|| (p_items !=  nullptr && p_items->has_operation())
	|| (copypmap_items !=  nullptr && copypmap_items->has_operation());
}

std::string System::IpqosItems::DfltItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dflt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "c-items")
    {
        if(c_items == nullptr)
        {
            c_items = std::make_shared<System::IpqosItems::DfltItems::CItems>();
        }
        return c_items;
    }

    if(child_yang_name == "p-items")
    {
        if(p_items == nullptr)
        {
            p_items = std::make_shared<System::IpqosItems::DfltItems::PItems>();
        }
        return p_items;
    }

    if(child_yang_name == "copyPMap-items")
    {
        if(copypmap_items == nullptr)
        {
            copypmap_items = std::make_shared<System::IpqosItems::DfltItems::CopyPMapItems>();
        }
        return copypmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    if(c_items != nullptr)
    {
        _children["c-items"] = c_items;
    }

    if(p_items != nullptr)
    {
        _children["p-items"] = p_items;
    }

    if(copypmap_items != nullptr)
    {
        _children["copyPMap-items"] = copypmap_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-items" || name == "c-items" || name == "p-items" || name == "copyPMap-items")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::PolicyItems()
    :
    in_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems>())
    , out_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::OutItems>())
{
    in_items->parent = this;
    out_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "dflt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PolicyItems::~PolicyItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (in_items !=  nullptr && in_items->has_data())
	|| (out_items !=  nullptr && out_items->has_data());
}

bool System::IpqosItems::DfltItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (in_items !=  nullptr && in_items->has_operation())
	|| (out_items !=  nullptr && out_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-items")
    {
        if(in_items == nullptr)
        {
            in_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems>();
        }
        return in_items;
    }

    if(child_yang_name == "out-items")
    {
        if(out_items == nullptr)
        {
            out_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::OutItems>();
        }
        return out_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in_items != nullptr)
    {
        _children["in-items"] = in_items;
    }

    if(out_items != nullptr)
    {
        _children["out-items"] = out_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-items" || name == "out-items")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::InItems()
    :
    intf_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems>())
    , sys_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems>())
    , pmap_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::PmapItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;
    pmap_items->parent = this;

    yang_name = "in-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::~InItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items" || name == "pmap-items")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::~IntfItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/policy-items/in-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::~IfList()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/policy-items/in-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        _children["queCmap-items"] = quecmap_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        ent_->parent = this;
        queuingstats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queuingstats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::SysItems()
    :
    pmap_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::~SysItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/policy-items/in-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/policy-items/in-items/sys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/policy-items/in-items/sys-items/pmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}


}
}


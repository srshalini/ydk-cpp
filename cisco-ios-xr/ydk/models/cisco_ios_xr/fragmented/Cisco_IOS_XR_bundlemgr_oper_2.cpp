
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
        ,
    mlacp_iccp_group_item(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem>())
{
    mlacp_iccp_group_item->parent = this;

    yang_name = "mlacp-iccp-group"; yang_parent_name = "mlacp-iccp-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::~MlacpIccpGroup()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| (mlacp_iccp_group_item !=  nullptr && mlacp_iccp_group_item->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (mlacp_iccp_group_item !=  nullptr && mlacp_iccp_group_item->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/mlacp-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group";
    ADD_KEY_TOKEN(iccp_group, "iccp-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-iccp-group-item")
    {
        if(mlacp_iccp_group_item == nullptr)
        {
            mlacp_iccp_group_item = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem>();
        }
        return mlacp_iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mlacp_iccp_group_item != nullptr)
    {
        _children["mlacp-iccp-group-item"] = mlacp_iccp_group_item;
    }

    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::MlacpIccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData>())
    , bundle_data(this, {})
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-iccp-group-item"; yang_parent_name = "mlacp-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::~MlacpIccpGroupItem()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "bundle-data")
    {
        auto ent_ = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData>();
        ent_->parent = this;
        bundle_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iccp_group_data != nullptr)
    {
        _children["iccp-group-data"] = iccp_group_data;
    }

    count_ = 0;
    for (auto ent_ : bundle_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "bundle-data")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"},
    connect_timer_running{YType::uint64, "connect-timer-running"}
        ,
    node_data(this, {})
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| singleton.is_set
	|| connect_timer_running.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(connect_timer_running.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        auto ent_ = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData>();
        ent_->parent = this;
        node_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "iccp-group-id" || name == "singleton" || name == "connect-timer-running")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::NodeData()
    :
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    ldp_id{YType::str, "ldp-id"},
    version_number{YType::uint32, "version-number"},
    node_state{YType::enumeration, "node-state"},
    iccp_group_state{YType::enumeration, "iccp-group-state"}
        ,
    system_id(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_data() const
{
    if (is_presence_container) return true;
    return mlacp_node_id.is_set
	|| ldp_id.is_set
	|| version_number.is_set
	|| node_state.is_set
	|| iccp_group_state.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_id != nullptr)
    {
        _children["system-id"] = system_id;
    }

    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "mlacp-node-id" || name == "ldp-id" || name == "version-number" || name == "node-state" || name == "iccp-group-state")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_mac_addr != nullptr)
    {
        _children["system-mac-addr"] = system_mac_addr;
    }

    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
        ,
    mlacp_bundle_data(this, {})
    , mlacp_member_data(this, {})
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::~BundleData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        auto ent_ = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData>();
        ent_->parent = this;
        mlacp_bundle_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        auto ent_ = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData>();
        ent_->parent = this;
        mlacp_member_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mlacp_bundle_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mlacp_member_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MlacpBundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_state{YType::enumeration, "bundle-state"},
    port_priority{YType::uint16, "port-priority"}
        ,
    mac_address(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| mlacp_node_id.is_set
	|| aggregator_id.is_set
	|| bundle_state.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bundle-name" || name == "mlacp-node-id" || name == "aggregator-id" || name == "bundle-state" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::MlacpMemberData()
    :
    port_name{YType::str, "port-name"},
    interface_handle{YType::str, "interface-handle"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_number{YType::uint16, "port-number"},
    operational_priority{YType::uint16, "operational-priority"},
    configured_priority{YType::uint16, "configured-priority"},
    member_state{YType::enumeration, "member-state"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_data() const
{
    if (is_presence_container) return true;
    return port_name.is_set
	|| interface_handle.is_set
	|| mlacp_node_id.is_set
	|| port_number.is_set
	|| operational_priority.is_set
	|| configured_priority.is_set
	|| member_state.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(member_state.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-name" || name == "interface-handle" || name == "mlacp-node-id" || name == "port-number" || name == "operational-priority" || name == "configured-priority" || name == "member-state")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocation()
    :
    mac_allocation_global(std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal>())
{
    mac_allocation_global->parent = this;

    yang_name = "mac-allocation"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MacAllocation::~MacAllocation()
{
}

bool BundleInformation::MacAllocation::has_data() const
{
    if (is_presence_container) return true;
    return (mac_allocation_global !=  nullptr && mac_allocation_global->has_data());
}

bool BundleInformation::MacAllocation::has_operation() const
{
    return is_set(yfilter)
	|| (mac_allocation_global !=  nullptr && mac_allocation_global->has_operation());
}

std::string BundleInformation::MacAllocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::MacAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-allocation-global")
    {
        if(mac_allocation_global == nullptr)
        {
            mac_allocation_global = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal>();
        }
        return mac_allocation_global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::MacAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_allocation_global != nullptr)
    {
        _children["mac-allocation-global"] = mac_allocation_global;
    }

    return _children;
}

void BundleInformation::MacAllocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MacAllocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MacAllocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-allocation-global")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobal()
    :
    mac_allocation_global_item(std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem>())
{
    mac_allocation_global_item->parent = this;

    yang_name = "mac-allocation-global"; yang_parent_name = "mac-allocation"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MacAllocation::MacAllocationGlobal::~MacAllocationGlobal()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_data() const
{
    if (is_presence_container) return true;
    return (mac_allocation_global_item !=  nullptr && mac_allocation_global_item->has_data());
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (mac_allocation_global_item !=  nullptr && mac_allocation_global_item->has_operation());
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::MacAllocationGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::MacAllocation::MacAllocationGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-allocation-global-item")
    {
        if(mac_allocation_global_item == nullptr)
        {
            mac_allocation_global_item = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem>();
        }
        return mac_allocation_global_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_allocation_global_item != nullptr)
    {
        _children["mac-allocation-global-item"] = mac_allocation_global_item;
    }

    return _children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MacAllocation::MacAllocationGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-allocation-global-item")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAllocationGlobalItem()
    :
    mac_address(this, {})
{

    yang_name = "mac-allocation-global-item"; yang_parent_name = "mac-allocation-global"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::~MacAllocationGlobalItem()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_address.len(); index++)
    {
        if(mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_operation() const
{
    for (std::size_t index=0; index<mac_address.len(); index++)
    {
        if(mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/mac-allocation-global/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation-global-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        auto ent_ = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress>();
        ent_->parent = this;
        mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mac-allocation-global-item"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/mac-allocation-global/mac-allocation-global-item/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Events::Events()
    :
    events_members(std::make_shared<BundleInformation::Events::EventsMembers>())
    , events_bundles(std::make_shared<BundleInformation::Events::EventsBundles>())
{
    events_members->parent = this;
    events_bundles->parent = this;

    yang_name = "events"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Events::~Events()
{
}

bool BundleInformation::Events::has_data() const
{
    if (is_presence_container) return true;
    return (events_members !=  nullptr && events_members->has_data())
	|| (events_bundles !=  nullptr && events_bundles->has_data());
}

bool BundleInformation::Events::has_operation() const
{
    return is_set(yfilter)
	|| (events_members !=  nullptr && events_members->has_operation())
	|| (events_bundles !=  nullptr && events_bundles->has_operation());
}

std::string BundleInformation::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-members")
    {
        if(events_members == nullptr)
        {
            events_members = std::make_shared<BundleInformation::Events::EventsMembers>();
        }
        return events_members;
    }

    if(child_yang_name == "events-bundles")
    {
        if(events_bundles == nullptr)
        {
            events_bundles = std::make_shared<BundleInformation::Events::EventsBundles>();
        }
        return events_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_members != nullptr)
    {
        _children["events-members"] = events_members;
    }

    if(events_bundles != nullptr)
    {
        _children["events-bundles"] = events_bundles;
    }

    return _children;
}

void BundleInformation::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-members" || name == "events-bundles")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMembers()
    :
    events_member(this, {"member_interface"})
{

    yang_name = "events-members"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Events::EventsMembers::~EventsMembers()
{
}

bool BundleInformation::Events::EventsMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_member.len(); index++)
    {
        if(events_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsMembers::has_operation() const
{
    for (std::size_t index=0; index<events_member.len(); index++)
    {
        if(events_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-member")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember>();
        ent_->parent = this;
        events_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-member")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMember()
    :
    member_interface{YType::str, "member-interface"}
        ,
    events_member_item(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem>())
    , events_member_ancestor(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor>())
{
    events_member_item->parent = this;
    events_member_ancestor->parent = this;

    yang_name = "events-member"; yang_parent_name = "events-members"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Events::EventsMembers::EventsMember::~EventsMember()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (events_member_item !=  nullptr && events_member_item->has_data())
	|| (events_member_ancestor !=  nullptr && events_member_ancestor->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_member_item !=  nullptr && events_member_item->has_operation())
	|| (events_member_ancestor !=  nullptr && events_member_ancestor->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/events-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsMembers::EventsMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-member-item")
    {
        if(events_member_item == nullptr)
        {
            events_member_item = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem>();
        }
        return events_member_item;
    }

    if(child_yang_name == "events-member-ancestor")
    {
        if(events_member_ancestor == nullptr)
        {
            events_member_ancestor = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor>();
        }
        return events_member_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_member_item != nullptr)
    {
        _children["events-member-item"] = events_member_item;
    }

    if(events_member_ancestor != nullptr)
    {
        _children["events-member-ancestor"] = events_member_ancestor;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-member-item" || name == "events-member-ancestor" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::EventsMemberItem()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-member-item"; yang_parent_name = "events-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::~EventsMemberItem()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::EventsMemberAncestor()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-member-ancestor"; yang_parent_name = "events-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::~EventsMemberAncestor()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-member-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::~Items()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundles()
    :
    events_bundle(this, {"bundle_interface"})
{

    yang_name = "events-bundles"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Events::EventsBundles::~EventsBundles()
{
}

bool BundleInformation::Events::EventsBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_bundle.len(); index++)
    {
        if(events_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::has_operation() const
{
    for (std::size_t index=0; index<events_bundle.len(); index++)
    {
        if(events_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle>();
        ent_->parent = this;
        events_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bundle")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    events_bundle_ancestor(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor>())
    , events_bundle_item(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem>())
    , events_bundle_descendant(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant>())
    , events_bundle_children_members(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers>())
{
    events_bundle_ancestor->parent = this;
    events_bundle_item->parent = this;
    events_bundle_descendant->parent = this;
    events_bundle_children_members->parent = this;

    yang_name = "events-bundle"; yang_parent_name = "events-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Events::EventsBundles::EventsBundle::~EventsBundle()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (events_bundle_ancestor !=  nullptr && events_bundle_ancestor->has_data())
	|| (events_bundle_item !=  nullptr && events_bundle_item->has_data())
	|| (events_bundle_descendant !=  nullptr && events_bundle_descendant->has_data())
	|| (events_bundle_children_members !=  nullptr && events_bundle_children_members->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_bundle_ancestor !=  nullptr && events_bundle_ancestor->has_operation())
	|| (events_bundle_item !=  nullptr && events_bundle_item->has_operation())
	|| (events_bundle_descendant !=  nullptr && events_bundle_descendant->has_operation())
	|| (events_bundle_children_members !=  nullptr && events_bundle_children_members->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/events-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle-ancestor")
    {
        if(events_bundle_ancestor == nullptr)
        {
            events_bundle_ancestor = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor>();
        }
        return events_bundle_ancestor;
    }

    if(child_yang_name == "events-bundle-item")
    {
        if(events_bundle_item == nullptr)
        {
            events_bundle_item = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem>();
        }
        return events_bundle_item;
    }

    if(child_yang_name == "events-bundle-descendant")
    {
        if(events_bundle_descendant == nullptr)
        {
            events_bundle_descendant = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant>();
        }
        return events_bundle_descendant;
    }

    if(child_yang_name == "events-bundle-children-members")
    {
        if(events_bundle_children_members == nullptr)
        {
            events_bundle_children_members = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers>();
        }
        return events_bundle_children_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_bundle_ancestor != nullptr)
    {
        _children["events-bundle-ancestor"] = events_bundle_ancestor;
    }

    if(events_bundle_item != nullptr)
    {
        _children["events-bundle-item"] = events_bundle_item;
    }

    if(events_bundle_descendant != nullptr)
    {
        _children["events-bundle-descendant"] = events_bundle_descendant;
    }

    if(events_bundle_children_members != nullptr)
    {
        _children["events-bundle-children-members"] = events_bundle_children_members;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bundle-ancestor" || name == "events-bundle-item" || name == "events-bundle-descendant" || name == "events-bundle-children-members" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::EventsBundleAncestor()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-bundle-ancestor"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::~EventsBundleAncestor()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::EventsBundleItem()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-bundle-item"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::~EventsBundleItem()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsBundleDescendant()
    :
    events_item(this, {})
{

    yang_name = "events-bundle-descendant"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::~EventsBundleDescendant()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem>();
        ent_->parent = this;
        events_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-item"; yang_parent_name = "events-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::~EventsItem()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMembers()
    :
    events_bundle_children_member(this, {"member_interface"})
{

    yang_name = "events-bundle-children-members"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::~EventsBundleChildrenMembers()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_bundle_children_member.len(); index++)
    {
        if(events_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<events_bundle_children_member.len(); index++)
    {
        if(events_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle-children-member")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember>();
        ent_->parent = this;
        events_bundle_children_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_bundle_children_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bundle-children-member")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::EventsBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-bundle-children-member"; yang_parent_name = "events-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::~EventsBundleChildrenMember()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-children-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "member-interface" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdl()
    :
    events_bdl_members(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers>())
    , events_bdl_bundles(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles>())
    , events_bdl_iccp_groups(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups>())
{
    events_bdl_members->parent = this;
    events_bdl_bundles->parent = this;
    events_bdl_iccp_groups->parent = this;

    yang_name = "events-bdl"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsBdl::~EventsBdl()
{
}

bool BundleInformation::EventsBdl::has_data() const
{
    if (is_presence_container) return true;
    return (events_bdl_members !=  nullptr && events_bdl_members->has_data())
	|| (events_bdl_bundles !=  nullptr && events_bdl_bundles->has_data())
	|| (events_bdl_iccp_groups !=  nullptr && events_bdl_iccp_groups->has_data());
}

bool BundleInformation::EventsBdl::has_operation() const
{
    return is_set(yfilter)
	|| (events_bdl_members !=  nullptr && events_bdl_members->has_operation())
	|| (events_bdl_bundles !=  nullptr && events_bdl_bundles->has_operation())
	|| (events_bdl_iccp_groups !=  nullptr && events_bdl_iccp_groups->has_operation());
}

std::string BundleInformation::EventsBdl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-members")
    {
        if(events_bdl_members == nullptr)
        {
            events_bdl_members = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers>();
        }
        return events_bdl_members;
    }

    if(child_yang_name == "events-bdl-bundles")
    {
        if(events_bdl_bundles == nullptr)
        {
            events_bdl_bundles = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles>();
        }
        return events_bdl_bundles;
    }

    if(child_yang_name == "events-bdl-iccp-groups")
    {
        if(events_bdl_iccp_groups == nullptr)
        {
            events_bdl_iccp_groups = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups>();
        }
        return events_bdl_iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_bdl_members != nullptr)
    {
        _children["events-bdl-members"] = events_bdl_members;
    }

    if(events_bdl_bundles != nullptr)
    {
        _children["events-bdl-bundles"] = events_bdl_bundles;
    }

    if(events_bdl_iccp_groups != nullptr)
    {
        _children["events-bdl-iccp-groups"] = events_bdl_iccp_groups;
    }

    return _children;
}

void BundleInformation::EventsBdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-members" || name == "events-bdl-bundles" || name == "events-bdl-iccp-groups")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMembers()
    :
    events_bdl_member(this, {"member_interface"})
{

    yang_name = "events-bdl-members"; yang_parent_name = "events-bdl"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsBdl::EventsBdlMembers::~EventsBdlMembers()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_bdl_member.len(); index++)
    {
        if(events_bdl_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_member.len(); index++)
    {
        if(events_bdl_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-member")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember>();
        ent_->parent = this;
        events_bdl_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_bdl_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-member")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMember()
    :
    member_interface{YType::str, "member-interface"}
        ,
    events_bdl_member_ancestor(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor>())
{
    events_bdl_member_ancestor->parent = this;

    yang_name = "events-bdl-member"; yang_parent_name = "events-bdl-members"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::~EventsBdlMember()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (events_bdl_member_ancestor !=  nullptr && events_bdl_member_ancestor->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_bdl_member_ancestor !=  nullptr && events_bdl_member_ancestor->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-member-ancestor")
    {
        if(events_bdl_member_ancestor == nullptr)
        {
            events_bdl_member_ancestor = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor>();
        }
        return events_bdl_member_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_bdl_member_ancestor != nullptr)
    {
        _children["events-bdl-member-ancestor"] = events_bdl_member_ancestor;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-member-ancestor" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::EventsBdlMemberAncestor()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-bdl-member-ancestor"; yang_parent_name = "events-bdl-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::~EventsBdlMemberAncestor()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bdl-member-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundles()
    :
    events_bdl_bundle(this, {"bundle_interface"})
{

    yang_name = "events-bdl-bundles"; yang_parent_name = "events-bdl"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsBdl::EventsBdlBundles::~EventsBdlBundles()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_bdl_bundle.len(); index++)
    {
        if(events_bdl_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_bundle.len(); index++)
    {
        if(events_bdl_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle>();
        ent_->parent = this;
        events_bdl_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_bdl_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-bundle")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    events_bdl_bundle_item(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem>())
{
    events_bdl_bundle_item->parent = this;

    yang_name = "events-bdl-bundle"; yang_parent_name = "events-bdl-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::~EventsBdlBundle()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (events_bdl_bundle_item !=  nullptr && events_bdl_bundle_item->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_bdl_bundle_item !=  nullptr && events_bdl_bundle_item->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle-item")
    {
        if(events_bdl_bundle_item == nullptr)
        {
            events_bdl_bundle_item = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem>();
        }
        return events_bdl_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_bdl_bundle_item != nullptr)
    {
        _children["events-bdl-bundle-item"] = events_bdl_bundle_item;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::EventsBdlBundleItem()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-bdl-bundle-item"; yang_parent_name = "events-bdl-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::~EventsBdlBundleItem()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bdl-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroups()
    :
    events_bdl_iccp_group(this, {"iccp_group"})
{

    yang_name = "events-bdl-iccp-groups"; yang_parent_name = "events-bdl"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::~EventsBdlIccpGroups()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_bdl_iccp_group.len(); index++)
    {
        if(events_bdl_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_iccp_group.len(); index++)
    {
        if(events_bdl_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-iccp-group")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup>();
        ent_->parent = this;
        events_bdl_iccp_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_bdl_iccp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
        ,
    events_bdl_bundle_descendant_iccp_group(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup>())
{
    events_bdl_bundle_descendant_iccp_group->parent = this;

    yang_name = "events-bdl-iccp-group"; yang_parent_name = "events-bdl-iccp-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::~EventsBdlIccpGroup()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| (events_bdl_bundle_descendant_iccp_group !=  nullptr && events_bdl_bundle_descendant_iccp_group->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (events_bdl_bundle_descendant_iccp_group !=  nullptr && events_bdl_bundle_descendant_iccp_group->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-iccp-group";
    ADD_KEY_TOKEN(iccp_group, "iccp-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle-descendant-iccp-group")
    {
        if(events_bdl_bundle_descendant_iccp_group == nullptr)
        {
            events_bdl_bundle_descendant_iccp_group = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup>();
        }
        return events_bdl_bundle_descendant_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_bdl_bundle_descendant_iccp_group != nullptr)
    {
        _children["events-bdl-bundle-descendant-iccp-group"] = events_bdl_bundle_descendant_iccp_group;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-bundle-descendant-iccp-group" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsBdlBundleDescendantIccpGroup()
    :
    events_item(this, {})
{

    yang_name = "events-bdl-bundle-descendant-iccp-group"; yang_parent_name = "events-bdl-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::~EventsBdlBundleDescendantIccpGroup()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle-descendant-iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem>();
        ent_->parent = this;
        events_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-item"; yang_parent_name = "events-bdl-bundle-descendant-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBriefs()
    :
    bundle_brief(this, {"bundle_interface"})
{

    yang_name = "bundle-briefs"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::BundleBriefs::~BundleBriefs()
{
}

bool BundleInformation::BundleBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_brief.len(); index++)
    {
        if(bundle_brief[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BundleBriefs::has_operation() const
{
    for (std::size_t index=0; index<bundle_brief.len(); index++)
    {
        if(bundle_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BundleBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BundleBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BundleBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-brief")
    {
        auto ent_ = std::make_shared<BundleInformation::BundleBriefs::BundleBrief>();
        ent_->parent = this;
        bundle_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BundleBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::BundleBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BundleBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BundleBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-brief")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBrief()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    bundle_brief_item(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem>())
{
    bundle_brief_item->parent = this;

    yang_name = "bundle-brief"; yang_parent_name = "bundle-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::BundleBriefs::BundleBrief::~BundleBrief()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (bundle_brief_item !=  nullptr && bundle_brief_item->has_data());
}

bool BundleInformation::BundleBriefs::BundleBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bundle_brief_item !=  nullptr && bundle_brief_item->has_operation());
}

std::string BundleInformation::BundleBriefs::BundleBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BundleBriefs::BundleBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-brief";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BundleBriefs::BundleBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-brief-item")
    {
        if(bundle_brief_item == nullptr)
        {
            bundle_brief_item = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem>();
        }
        return bundle_brief_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BundleBriefs::BundleBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_brief_item != nullptr)
    {
        _children["bundle-brief-item"] = bundle_brief_item;
    }

    return _children;
}

void BundleInformation::BundleBriefs::BundleBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BundleBriefs::BundleBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::BundleBriefs::BundleBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-brief-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BundleBriefItem()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "bundle-brief-item"; yang_parent_name = "bundle-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::~BundleBriefItem()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-brief-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto ent_ = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig>();
        ent_->parent = this;
        bfd_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    count_ = 0;
    for (auto ent_ : bfd_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-brief-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-brief-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbr()
    :
    events_mbr_bundles(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles>())
    , events_mbr_members(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers>())
    , events_mbr_iccp_groups(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups>())
{
    events_mbr_bundles->parent = this;
    events_mbr_members->parent = this;
    events_mbr_iccp_groups->parent = this;

    yang_name = "events-mbr"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsMbr::~EventsMbr()
{
}

bool BundleInformation::EventsMbr::has_data() const
{
    if (is_presence_container) return true;
    return (events_mbr_bundles !=  nullptr && events_mbr_bundles->has_data())
	|| (events_mbr_members !=  nullptr && events_mbr_members->has_data())
	|| (events_mbr_iccp_groups !=  nullptr && events_mbr_iccp_groups->has_data());
}

bool BundleInformation::EventsMbr::has_operation() const
{
    return is_set(yfilter)
	|| (events_mbr_bundles !=  nullptr && events_mbr_bundles->has_operation())
	|| (events_mbr_members !=  nullptr && events_mbr_members->has_operation())
	|| (events_mbr_iccp_groups !=  nullptr && events_mbr_iccp_groups->has_operation());
}

std::string BundleInformation::EventsMbr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundles")
    {
        if(events_mbr_bundles == nullptr)
        {
            events_mbr_bundles = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles>();
        }
        return events_mbr_bundles;
    }

    if(child_yang_name == "events-mbr-members")
    {
        if(events_mbr_members == nullptr)
        {
            events_mbr_members = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers>();
        }
        return events_mbr_members;
    }

    if(child_yang_name == "events-mbr-iccp-groups")
    {
        if(events_mbr_iccp_groups == nullptr)
        {
            events_mbr_iccp_groups = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups>();
        }
        return events_mbr_iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_mbr_bundles != nullptr)
    {
        _children["events-mbr-bundles"] = events_mbr_bundles;
    }

    if(events_mbr_members != nullptr)
    {
        _children["events-mbr-members"] = events_mbr_members;
    }

    if(events_mbr_iccp_groups != nullptr)
    {
        _children["events-mbr-iccp-groups"] = events_mbr_iccp_groups;
    }

    return _children;
}

void BundleInformation::EventsMbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundles" || name == "events-mbr-members" || name == "events-mbr-iccp-groups")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundles()
    :
    events_mbr_bundle(this, {"bundle_interface"})
{

    yang_name = "events-mbr-bundles"; yang_parent_name = "events-mbr"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsMbr::EventsMbrBundles::~EventsMbrBundles()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_mbr_bundle.len(); index++)
    {
        if(events_mbr_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle.len(); index++)
    {
        if(events_mbr_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle>();
        ent_->parent = this;
        events_mbr_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_mbr_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    events_mbr_bundle_children_members(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers>())
    , events_mbr_bundle_descendant(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant>())
{
    events_mbr_bundle_children_members->parent = this;
    events_mbr_bundle_descendant->parent = this;

    yang_name = "events-mbr-bundle"; yang_parent_name = "events-mbr-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::~EventsMbrBundle()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (events_mbr_bundle_children_members !=  nullptr && events_mbr_bundle_children_members->has_data())
	|| (events_mbr_bundle_descendant !=  nullptr && events_mbr_bundle_descendant->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_mbr_bundle_children_members !=  nullptr && events_mbr_bundle_children_members->has_operation())
	|| (events_mbr_bundle_descendant !=  nullptr && events_mbr_bundle_descendant->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-members")
    {
        if(events_mbr_bundle_children_members == nullptr)
        {
            events_mbr_bundle_children_members = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers>();
        }
        return events_mbr_bundle_children_members;
    }

    if(child_yang_name == "events-mbr-bundle-descendant")
    {
        if(events_mbr_bundle_descendant == nullptr)
        {
            events_mbr_bundle_descendant = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant>();
        }
        return events_mbr_bundle_descendant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_mbr_bundle_children_members != nullptr)
    {
        _children["events-mbr-bundle-children-members"] = events_mbr_bundle_children_members;
    }

    if(events_mbr_bundle_descendant != nullptr)
    {
        _children["events-mbr-bundle-descendant"] = events_mbr_bundle_descendant;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-members" || name == "events-mbr-bundle-descendant" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMembers()
    :
    events_mbr_bundle_children_member(this, {"member_interface"})
{

    yang_name = "events-mbr-bundle-children-members"; yang_parent_name = "events-mbr-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::~EventsMbrBundleChildrenMembers()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_mbr_bundle_children_member.len(); index++)
    {
        if(events_mbr_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member.len(); index++)
    {
        if(events_mbr_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember>();
        ent_->parent = this;
        events_mbr_bundle_children_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_mbr_bundle_children_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-member")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::EventsMbrBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-mbr-bundle-children-member"; yang_parent_name = "events-mbr-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::~EventsMbrBundleChildrenMember()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "member-interface" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsMbrBundleDescendant()
    :
    events_item(this, {})
{

    yang_name = "events-mbr-bundle-descendant"; yang_parent_name = "events-mbr-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::~EventsMbrBundleDescendant()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem>();
        ent_->parent = this;
        events_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-item"; yang_parent_name = "events-mbr-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMembers()
    :
    events_mbr_member(this, {"member_interface"})
{

    yang_name = "events-mbr-members"; yang_parent_name = "events-mbr"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsMbr::EventsMbrMembers::~EventsMbrMembers()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_mbr_member.len(); index++)
    {
        if(events_mbr_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_member.len(); index++)
    {
        if(events_mbr_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-member")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember>();
        ent_->parent = this;
        events_mbr_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_mbr_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-member")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMember()
    :
    member_interface{YType::str, "member-interface"}
        ,
    events_mbr_member_item(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem>())
{
    events_mbr_member_item->parent = this;

    yang_name = "events-mbr-member"; yang_parent_name = "events-mbr-members"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::~EventsMbrMember()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (events_mbr_member_item !=  nullptr && events_mbr_member_item->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_mbr_member_item !=  nullptr && events_mbr_member_item->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-member-item")
    {
        if(events_mbr_member_item == nullptr)
        {
            events_mbr_member_item = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem>();
        }
        return events_mbr_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_mbr_member_item != nullptr)
    {
        _children["events-mbr-member-item"] = events_mbr_member_item;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::EventsMbrMemberItem()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-mbr-member-item"; yang_parent_name = "events-mbr-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::~EventsMbrMemberItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroups()
    :
    events_mbr_iccp_group(this, {"iccp_group"})
{

    yang_name = "events-mbr-iccp-groups"; yang_parent_name = "events-mbr"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::~EventsMbrIccpGroups()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_mbr_iccp_group.len(); index++)
    {
        if(events_mbr_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_iccp_group.len(); index++)
    {
        if(events_mbr_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-iccp-group")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup>();
        ent_->parent = this;
        events_mbr_iccp_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_mbr_iccp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
        ,
    events_mbr_bundle_children_member_iccp_groups(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups>())
    , events_mbr_bundle_descendant_iccp_group(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup>())
{
    events_mbr_bundle_children_member_iccp_groups->parent = this;
    events_mbr_bundle_descendant_iccp_group->parent = this;

    yang_name = "events-mbr-iccp-group"; yang_parent_name = "events-mbr-iccp-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::~EventsMbrIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| (events_mbr_bundle_children_member_iccp_groups !=  nullptr && events_mbr_bundle_children_member_iccp_groups->has_data())
	|| (events_mbr_bundle_descendant_iccp_group !=  nullptr && events_mbr_bundle_descendant_iccp_group->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (events_mbr_bundle_children_member_iccp_groups !=  nullptr && events_mbr_bundle_children_member_iccp_groups->has_operation())
	|| (events_mbr_bundle_descendant_iccp_group !=  nullptr && events_mbr_bundle_descendant_iccp_group->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-iccp-group";
    ADD_KEY_TOKEN(iccp_group, "iccp-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member-iccp-groups")
    {
        if(events_mbr_bundle_children_member_iccp_groups == nullptr)
        {
            events_mbr_bundle_children_member_iccp_groups = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups>();
        }
        return events_mbr_bundle_children_member_iccp_groups;
    }

    if(child_yang_name == "events-mbr-bundle-descendant-iccp-group")
    {
        if(events_mbr_bundle_descendant_iccp_group == nullptr)
        {
            events_mbr_bundle_descendant_iccp_group = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup>();
        }
        return events_mbr_bundle_descendant_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_mbr_bundle_children_member_iccp_groups != nullptr)
    {
        _children["events-mbr-bundle-children-member-iccp-groups"] = events_mbr_bundle_children_member_iccp_groups;
    }

    if(events_mbr_bundle_descendant_iccp_group != nullptr)
    {
        _children["events-mbr-bundle-descendant-iccp-group"] = events_mbr_bundle_descendant_iccp_group;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-member-iccp-groups" || name == "events-mbr-bundle-descendant-iccp-group" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroups()
    :
    events_mbr_bundle_children_member_iccp_group(this, {"member_interface"})
{

    yang_name = "events-mbr-bundle-children-member-iccp-groups"; yang_parent_name = "events-mbr-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::~EventsMbrBundleChildrenMemberIccpGroups()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_mbr_bundle_children_member_iccp_group.len(); index++)
    {
        if(events_mbr_bundle_children_member_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member_iccp_group.len(); index++)
    {
        if(events_mbr_bundle_children_member_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member-iccp-group")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup>();
        ent_->parent = this;
        events_mbr_bundle_children_member_iccp_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_mbr_bundle_children_member_iccp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-member-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::EventsMbrBundleChildrenMemberIccpGroup()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-mbr-bundle-children-member-iccp-group"; yang_parent_name = "events-mbr-bundle-children-member-iccp-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::~EventsMbrBundleChildrenMemberIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member-iccp-group";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "member-interface" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-bundle-children-member-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsMbrBundleDescendantIccpGroup()
    :
    events_item(this, {})
{

    yang_name = "events-mbr-bundle-descendant-iccp-group"; yang_parent_name = "events-mbr-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::~EventsMbrBundleDescendantIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<events_item.len(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-descendant-iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem>();
        ent_->parent = this;
        events_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}


}
}



#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_7.hpp"
#include "Cisco_NX_OS_device_8.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        ent_->parent = this;
        extcommrt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extcommrt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    lnkattrflags{YType::str, "lnkAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return lnkattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "lnkAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        ent_->parent = this;
        lnkstattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        ent_->parent = this;
        pfxsidattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxsidattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnrtItems()
    :
    mvpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "mvpnrt-items"; yang_parent_name = "RdRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::~MvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MvpnRoute-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList>();
        ent_->parent = this;
        mvpnroute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mvpnroute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::MvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "MvpnRoute-list"; yang_parent_name = "mvpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::~MvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "MvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"},
    numimported{YType::uint16, "numImported"},
    importedlst{YType::str, "importedLst"},
    importedsrc{YType::str, "importedSrc"},
    origimportedsrc{YType::str, "origImportedSrc"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| numimported.is_set
	|| importedlst.is_set
	|| importedsrc.is_set
	|| origimportedsrc.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| ydk::is_set(numimported.yfilter)
	|| ydk::is_set(importedlst.yfilter)
	|| ydk::is_set(importedsrc.yfilter)
	|| ydk::is_set(origimportedsrc.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());
    if (numimported.is_set || is_set(numimported.yfilter)) leaf_name_data.push_back(numimported.get_name_leafdata());
    if (importedlst.is_set || is_set(importedlst.yfilter)) leaf_name_data.push_back(importedlst.get_name_leafdata());
    if (importedsrc.is_set || is_set(importedsrc.yfilter)) leaf_name_data.push_back(importedsrc.get_name_leafdata());
    if (origimportedsrc.is_set || is_set(origimportedsrc.yfilter)) leaf_name_data.push_back(origimportedsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seg_items != nullptr)
    {
        _children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        _children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        _children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        _children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        _children["pmsi-items"] = pmsi_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numImported")
    {
        numimported = value;
        numimported.value_namespace = name_space;
        numimported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedLst")
    {
        importedlst = value;
        importedlst.value_namespace = name_space;
        importedlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedSrc")
    {
        importedsrc = value;
        importedsrc.value_namespace = name_space;
        importedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc = value;
        origimportedsrc.value_namespace = name_space;
        origimportedsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
    if(value_path == "numImported")
    {
        numimported.yfilter = yfilter;
    }
    if(value_path == "importedLst")
    {
        importedlst.yfilter = yfilter;
    }
    if(value_path == "importedSrc")
    {
        importedsrc.yfilter = yfilter;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId" || name == "numImported" || name == "importedLst" || name == "importedSrc" || name == "origImportedSrc")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        ent_->parent = this;
        asseg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asseg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asn_items != nullptr)
    {
        _children["asn-items"] = asn_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        ent_->parent = this;
        asitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        ent_->parent = this;
        extcommrt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extcommrt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    lnkattrflags{YType::str, "lnkAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return lnkattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "lnkAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        ent_->parent = this;
        lnkstattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        ent_->parent = this;
        pfxsidattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxsidattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxItems()
    :
    pfxroutes_list(this, {"pfx"})
{

    yang_name = "pfx-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::~PfxItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxroutes_list.len(); index++)
    {
        if(pfxroutes_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::has_operation() const
{
    for (std::size_t index=0; index<pfxroutes_list.len(); index++)
    {
        if(pfxroutes_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxRoutes-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList>();
        ent_->parent = this;
        pfxroutes_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxroutes_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxRoutes-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::PfxRoutesList()
    :
    pfx{YType::str, "pfx"}
        ,
    lsrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems>())
    , evpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems>())
{
    lsrt_items->parent = this;
    evpnrt_items->parent = this;

    yang_name = "PfxRoutes-list"; yang_parent_name = "pfx-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::~PfxRoutesList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| (lsrt_items !=  nullptr && lsrt_items->has_data())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| (lsrt_items !=  nullptr && lsrt_items->has_operation())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxRoutes-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsrt-items")
    {
        if(lsrt_items == nullptr)
        {
            lsrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems>();
        }
        return lsrt_items;
    }

    if(child_yang_name == "evpnrt-items")
    {
        if(evpnrt_items == nullptr)
        {
            evpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems>();
        }
        return evpnrt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsrt_items != nullptr)
    {
        _children["lsrt-items"] = lsrt_items;
    }

    if(evpnrt_items != nullptr)
    {
        _children["evpnrt-items"] = evpnrt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsrt-items" || name == "evpnrt-items" || name == "pfx")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LsrtItems()
    :
    lnkstroute_list(this, {"pfx"})
{

    yang_name = "lsrt-items"; yang_parent_name = "PfxRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::~LsrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstroute_list.len(); index++)
    {
        if(lnkstroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstroute_list.len(); index++)
    {
        if(lnkstroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStRoute-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList>();
        ent_->parent = this;
        lnkstroute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstroute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::LnkStRouteList()
    :
    pfx{YType::str, "pfx"},
    nlritype{YType::enumeration, "nlriType"},
    protoid{YType::enumeration, "protoId"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "LnkStRoute-list"; yang_parent_name = "lsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::~LnkStRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| nlritype.is_set
	|| protoid.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(nlritype.yfilter)
	|| ydk::is_set(protoid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (nlritype.is_set || is_set(nlritype.yfilter)) leaf_name_data.push_back(nlritype.get_name_leafdata());
    if (protoid.is_set || is_set(protoid.yfilter)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlriType")
    {
        nlritype = value;
        nlritype.value_namespace = name_space;
        nlritype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoId")
    {
        protoid = value;
        protoid.value_namespace = name_space;
        protoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "nlriType")
    {
        nlritype.yfilter = yfilter;
    }
    if(value_path == "protoId")
    {
        protoid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "nlriType" || name == "protoId" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "LnkStRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"},
    numimported{YType::uint16, "numImported"},
    importedlst{YType::str, "importedLst"},
    importedsrc{YType::str, "importedSrc"},
    origimportedsrc{YType::str, "origImportedSrc"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| numimported.is_set
	|| importedlst.is_set
	|| importedsrc.is_set
	|| origimportedsrc.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| ydk::is_set(numimported.yfilter)
	|| ydk::is_set(importedlst.yfilter)
	|| ydk::is_set(importedsrc.yfilter)
	|| ydk::is_set(origimportedsrc.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());
    if (numimported.is_set || is_set(numimported.yfilter)) leaf_name_data.push_back(numimported.get_name_leafdata());
    if (importedlst.is_set || is_set(importedlst.yfilter)) leaf_name_data.push_back(importedlst.get_name_leafdata());
    if (importedsrc.is_set || is_set(importedsrc.yfilter)) leaf_name_data.push_back(importedsrc.get_name_leafdata());
    if (origimportedsrc.is_set || is_set(origimportedsrc.yfilter)) leaf_name_data.push_back(origimportedsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seg_items != nullptr)
    {
        _children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        _children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        _children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        _children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        _children["pmsi-items"] = pmsi_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numImported")
    {
        numimported = value;
        numimported.value_namespace = name_space;
        numimported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedLst")
    {
        importedlst = value;
        importedlst.value_namespace = name_space;
        importedlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedSrc")
    {
        importedsrc = value;
        importedsrc.value_namespace = name_space;
        importedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc = value;
        origimportedsrc.value_namespace = name_space;
        origimportedsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
    if(value_path == "numImported")
    {
        numimported.yfilter = yfilter;
    }
    if(value_path == "importedLst")
    {
        importedlst.yfilter = yfilter;
    }
    if(value_path == "importedSrc")
    {
        importedsrc.yfilter = yfilter;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId" || name == "numImported" || name == "importedLst" || name == "importedSrc" || name == "origImportedSrc")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList>();
        ent_->parent = this;
        asseg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asseg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asn_items != nullptr)
    {
        _children["asn-items"] = asn_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        ent_->parent = this;
        asitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        ent_->parent = this;
        extcommrt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extcommrt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    lnkattrflags{YType::str, "lnkAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return lnkattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "lnkAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        ent_->parent = this;
        lnkstattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        ent_->parent = this;
        pfxsidattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxsidattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnrtItems()
    :
    evpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "evpnrt-items"; yang_parent_name = "PfxRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::~EvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EvpnRoute-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList>();
        ent_->parent = this;
        evpnroute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evpnroute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::EvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "EvpnRoute-list"; yang_parent_name = "evpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::~EvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "EvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"},
    numimported{YType::uint16, "numImported"},
    importedlst{YType::str, "importedLst"},
    importedsrc{YType::str, "importedSrc"},
    origimportedsrc{YType::str, "origImportedSrc"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| numimported.is_set
	|| importedlst.is_set
	|| importedsrc.is_set
	|| origimportedsrc.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| ydk::is_set(numimported.yfilter)
	|| ydk::is_set(importedlst.yfilter)
	|| ydk::is_set(importedsrc.yfilter)
	|| ydk::is_set(origimportedsrc.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());
    if (numimported.is_set || is_set(numimported.yfilter)) leaf_name_data.push_back(numimported.get_name_leafdata());
    if (importedlst.is_set || is_set(importedlst.yfilter)) leaf_name_data.push_back(importedlst.get_name_leafdata());
    if (importedsrc.is_set || is_set(importedsrc.yfilter)) leaf_name_data.push_back(importedsrc.get_name_leafdata());
    if (origimportedsrc.is_set || is_set(origimportedsrc.yfilter)) leaf_name_data.push_back(origimportedsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seg_items != nullptr)
    {
        _children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        _children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        _children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        _children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        _children["pmsi-items"] = pmsi_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numImported")
    {
        numimported = value;
        numimported.value_namespace = name_space;
        numimported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedLst")
    {
        importedlst = value;
        importedlst.value_namespace = name_space;
        importedlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedSrc")
    {
        importedsrc = value;
        importedsrc.value_namespace = name_space;
        importedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc = value;
        origimportedsrc.value_namespace = name_space;
        origimportedsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
    if(value_path == "numImported")
    {
        numimported.yfilter = yfilter;
    }
    if(value_path == "importedLst")
    {
        importedlst.yfilter = yfilter;
    }
    if(value_path == "importedSrc")
    {
        importedsrc.yfilter = yfilter;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId" || name == "numImported" || name == "importedLst" || name == "importedSrc" || name == "origImportedSrc")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        ent_->parent = this;
        asseg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asseg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asn_items != nullptr)
    {
        _children["asn-items"] = asn_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        ent_->parent = this;
        asitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        ent_->parent = this;
        extcommrt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extcommrt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    lnkattrflags{YType::str, "lnkAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return lnkattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "lnkAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        ent_->parent = this;
        lnkstattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        ent_->parent = this;
        pfxsidattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxsidattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems::PfxRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EsidItems()
    :
    evpnesroutes_list(this, {"esid"})
{

    yang_name = "esid-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::~EsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpnesroutes_list.len(); index++)
    {
        if(evpnesroutes_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::has_operation() const
{
    for (std::size_t index=0; index<evpnesroutes_list.len(); index++)
    {
        if(evpnesroutes_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EvpnEsRoutes-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList>();
        ent_->parent = this;
        evpnesroutes_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evpnesroutes_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EvpnEsRoutes-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnEsRoutesList()
    :
    esid{YType::str, "esid"}
        ,
    evpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems>())
{
    evpnrt_items->parent = this;

    yang_name = "EvpnEsRoutes-list"; yang_parent_name = "esid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::~EvpnEsRoutesList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::has_data() const
{
    if (is_presence_container) return true;
    return esid.is_set
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esid.yfilter)
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvpnEsRoutes-list";
    ADD_KEY_TOKEN(esid, "esid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esid.is_set || is_set(esid.yfilter)) leaf_name_data.push_back(esid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpnrt-items")
    {
        if(evpnrt_items == nullptr)
        {
            evpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems>();
        }
        return evpnrt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpnrt_items != nullptr)
    {
        _children["evpnrt-items"] = evpnrt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esid")
    {
        esid = value;
        esid.value_namespace = name_space;
        esid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esid")
    {
        esid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnrt-items" || name == "esid")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnrtItems()
    :
    evpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "evpnrt-items"; yang_parent_name = "EvpnEsRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::~EvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EvpnRoute-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList>();
        ent_->parent = this;
        evpnroute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evpnroute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::EvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "EvpnRoute-list"; yang_parent_name = "evpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::~EvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "EvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"},
    numimported{YType::uint16, "numImported"},
    importedlst{YType::str, "importedLst"},
    importedsrc{YType::str, "importedSrc"},
    origimportedsrc{YType::str, "origImportedSrc"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| numimported.is_set
	|| importedlst.is_set
	|| importedsrc.is_set
	|| origimportedsrc.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| ydk::is_set(numimported.yfilter)
	|| ydk::is_set(importedlst.yfilter)
	|| ydk::is_set(importedsrc.yfilter)
	|| ydk::is_set(origimportedsrc.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());
    if (numimported.is_set || is_set(numimported.yfilter)) leaf_name_data.push_back(numimported.get_name_leafdata());
    if (importedlst.is_set || is_set(importedlst.yfilter)) leaf_name_data.push_back(importedlst.get_name_leafdata());
    if (importedsrc.is_set || is_set(importedsrc.yfilter)) leaf_name_data.push_back(importedsrc.get_name_leafdata());
    if (origimportedsrc.is_set || is_set(origimportedsrc.yfilter)) leaf_name_data.push_back(origimportedsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seg_items != nullptr)
    {
        _children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        _children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        _children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        _children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        _children["pmsi-items"] = pmsi_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numImported")
    {
        numimported = value;
        numimported.value_namespace = name_space;
        numimported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedLst")
    {
        importedlst = value;
        importedlst.value_namespace = name_space;
        importedlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedSrc")
    {
        importedsrc = value;
        importedsrc.value_namespace = name_space;
        importedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc = value;
        origimportedsrc.value_namespace = name_space;
        origimportedsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
    if(value_path == "numImported")
    {
        numimported.yfilter = yfilter;
    }
    if(value_path == "importedLst")
    {
        importedlst.yfilter = yfilter;
    }
    if(value_path == "importedSrc")
    {
        importedsrc.yfilter = yfilter;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId" || name == "numImported" || name == "importedLst" || name == "importedSrc" || name == "origImportedSrc")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        ent_->parent = this;
        asseg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asseg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asn_items != nullptr)
    {
        _children["asn-items"] = asn_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        ent_->parent = this;
        asitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        ent_->parent = this;
        extcommrt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extcommrt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    lnkattrflags{YType::str, "lnkAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return lnkattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "lnkAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        ent_->parent = this;
        lnkstattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        ent_->parent = this;
        pfxsidattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxsidattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems::EvpnEsRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NhItems()
    :
    nexthoproutes_list(this, {"pfx"})
{

    yang_name = "nh-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::~NhItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthoproutes_list.len(); index++)
    {
        if(nexthoproutes_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthoproutes_list.len(); index++)
    {
        if(nexthoproutes_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NextHopRoutes-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList>();
        ent_->parent = this;
        nexthoproutes_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthoproutes_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NextHopRoutes-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::NextHopRoutesList()
    :
    pfx{YType::str, "pfx"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems>())
    , vpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems>())
    , lblrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems>())
    , lsrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems>())
    , evpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems>())
    , mvpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems>())
{
    rt_items->parent = this;
    vpnrt_items->parent = this;
    lblrt_items->parent = this;
    lsrt_items->parent = this;
    evpnrt_items->parent = this;
    mvpnrt_items->parent = this;

    yang_name = "NextHopRoutes-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::~NextHopRoutesList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (vpnrt_items !=  nullptr && vpnrt_items->has_data())
	|| (lblrt_items !=  nullptr && lblrt_items->has_data())
	|| (lsrt_items !=  nullptr && lsrt_items->has_data())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_data())
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (vpnrt_items !=  nullptr && vpnrt_items->has_operation())
	|| (lblrt_items !=  nullptr && lblrt_items->has_operation())
	|| (lsrt_items !=  nullptr && lsrt_items->has_operation())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_operation())
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NextHopRoutes-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "vpnrt-items")
    {
        if(vpnrt_items == nullptr)
        {
            vpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems>();
        }
        return vpnrt_items;
    }

    if(child_yang_name == "lblrt-items")
    {
        if(lblrt_items == nullptr)
        {
            lblrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems>();
        }
        return lblrt_items;
    }

    if(child_yang_name == "lsrt-items")
    {
        if(lsrt_items == nullptr)
        {
            lsrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems>();
        }
        return lsrt_items;
    }

    if(child_yang_name == "evpnrt-items")
    {
        if(evpnrt_items == nullptr)
        {
            evpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems>();
        }
        return evpnrt_items;
    }

    if(child_yang_name == "mvpnrt-items")
    {
        if(mvpnrt_items == nullptr)
        {
            mvpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems>();
        }
        return mvpnrt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    if(vpnrt_items != nullptr)
    {
        _children["vpnrt-items"] = vpnrt_items;
    }

    if(lblrt_items != nullptr)
    {
        _children["lblrt-items"] = lblrt_items;
    }

    if(lsrt_items != nullptr)
    {
        _children["lsrt-items"] = lsrt_items;
    }

    if(evpnrt_items != nullptr)
    {
        _children["evpnrt-items"] = evpnrt_items;
    }

    if(mvpnrt_items != nullptr)
    {
        _children["mvpnrt-items"] = mvpnrt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "vpnrt-items" || name == "lblrt-items" || name == "lsrt-items" || name == "evpnrt-items" || name == "mvpnrt-items" || name == "pfx")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "NextHopRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::~RouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"},
    numimported{YType::uint16, "numImported"},
    importedlst{YType::str, "importedLst"},
    importedsrc{YType::str, "importedSrc"},
    origimportedsrc{YType::str, "origImportedSrc"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| numimported.is_set
	|| importedlst.is_set
	|| importedsrc.is_set
	|| origimportedsrc.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| ydk::is_set(numimported.yfilter)
	|| ydk::is_set(importedlst.yfilter)
	|| ydk::is_set(importedsrc.yfilter)
	|| ydk::is_set(origimportedsrc.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());
    if (numimported.is_set || is_set(numimported.yfilter)) leaf_name_data.push_back(numimported.get_name_leafdata());
    if (importedlst.is_set || is_set(importedlst.yfilter)) leaf_name_data.push_back(importedlst.get_name_leafdata());
    if (importedsrc.is_set || is_set(importedsrc.yfilter)) leaf_name_data.push_back(importedsrc.get_name_leafdata());
    if (origimportedsrc.is_set || is_set(origimportedsrc.yfilter)) leaf_name_data.push_back(origimportedsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seg_items != nullptr)
    {
        _children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        _children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        _children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        _children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        _children["pmsi-items"] = pmsi_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numImported")
    {
        numimported = value;
        numimported.value_namespace = name_space;
        numimported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedLst")
    {
        importedlst = value;
        importedlst.value_namespace = name_space;
        importedlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedSrc")
    {
        importedsrc = value;
        importedsrc.value_namespace = name_space;
        importedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc = value;
        origimportedsrc.value_namespace = name_space;
        origimportedsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
    if(value_path == "numImported")
    {
        numimported.yfilter = yfilter;
    }
    if(value_path == "importedLst")
    {
        importedlst.yfilter = yfilter;
    }
    if(value_path == "importedSrc")
    {
        importedsrc.yfilter = yfilter;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId" || name == "numImported" || name == "importedLst" || name == "importedSrc" || name == "origImportedSrc")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList>();
        ent_->parent = this;
        asseg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asseg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asn_items != nullptr)
    {
        _children["asn-items"] = asn_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        ent_->parent = this;
        asitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::RtItems_()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::~RtItems_()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList>();
        ent_->parent = this;
        extcommrt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extcommrt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    lnkattrflags{YType::str, "lnkAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return lnkattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "lnkAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        ent_->parent = this;
        lnkstattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        ent_->parent = this;
        pfxsidattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxsidattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::RtItems::RouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnrtItems()
    :
    vpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "vpnrt-items"; yang_parent_name = "NextHopRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::~VpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpnroute_list.len(); index++)
    {
        if(vpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<vpnroute_list.len(); index++)
    {
        if(vpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpnRoute-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList>();
        ent_->parent = this;
        vpnroute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vpnroute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::VpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "VpnRoute-list"; yang_parent_name = "vpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::~VpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "VpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"},
    numimported{YType::uint16, "numImported"},
    importedlst{YType::str, "importedLst"},
    importedsrc{YType::str, "importedSrc"},
    origimportedsrc{YType::str, "origImportedSrc"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| numimported.is_set
	|| importedlst.is_set
	|| importedsrc.is_set
	|| origimportedsrc.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| ydk::is_set(numimported.yfilter)
	|| ydk::is_set(importedlst.yfilter)
	|| ydk::is_set(importedsrc.yfilter)
	|| ydk::is_set(origimportedsrc.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());
    if (numimported.is_set || is_set(numimported.yfilter)) leaf_name_data.push_back(numimported.get_name_leafdata());
    if (importedlst.is_set || is_set(importedlst.yfilter)) leaf_name_data.push_back(importedlst.get_name_leafdata());
    if (importedsrc.is_set || is_set(importedsrc.yfilter)) leaf_name_data.push_back(importedsrc.get_name_leafdata());
    if (origimportedsrc.is_set || is_set(origimportedsrc.yfilter)) leaf_name_data.push_back(origimportedsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seg_items != nullptr)
    {
        _children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        _children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        _children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        _children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        _children["pmsi-items"] = pmsi_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numImported")
    {
        numimported = value;
        numimported.value_namespace = name_space;
        numimported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedLst")
    {
        importedlst = value;
        importedlst.value_namespace = name_space;
        importedlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedSrc")
    {
        importedsrc = value;
        importedsrc.value_namespace = name_space;
        importedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc = value;
        origimportedsrc.value_namespace = name_space;
        origimportedsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
    if(value_path == "numImported")
    {
        numimported.yfilter = yfilter;
    }
    if(value_path == "importedLst")
    {
        importedlst.yfilter = yfilter;
    }
    if(value_path == "importedSrc")
    {
        importedsrc.yfilter = yfilter;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId" || name == "numImported" || name == "importedLst" || name == "importedSrc" || name == "origImportedSrc")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        ent_->parent = this;
        asseg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asseg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asn_items != nullptr)
    {
        _children["asn-items"] = asn_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        ent_->parent = this;
        asitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        ent_->parent = this;
        extcommrt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extcommrt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    lnkattrflags{YType::str, "lnkAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return lnkattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "lnkAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        ent_->parent = this;
        lnkstattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lnkstattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_items != nullptr)
    {
        _children["tlv-items"] = tlv_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        ent_->parent = this;
        pfxsidattrentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxsidattrentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblrtItems()
    :
    lblroute_list(this, {"pfx"})
{

    yang_name = "lblrt-items"; yang_parent_name = "NextHopRoutes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::~LblrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lblroute_list.len(); index++)
    {
        if(lblroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::has_operation() const
{
    for (std::size_t index=0; index<lblroute_list.len(); index++)
    {
        if(lblroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lblrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LblRoute-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList>();
        ent_->parent = this;
        lblroute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lblroute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LblRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::LblRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rtlblafflags{YType::str, "rtLblAfFlags"},
    rtlblafver{YType::uint32, "rtLblAfVer"},
    loclbl{YType::uint32, "locLbl"},
    pfxlblholddowndelts{YType::str, "pfxLblHoldDownDelTs"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "LblRoute-list"; yang_parent_name = "lblrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::~LblRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rtlblafflags.is_set
	|| rtlblafver.is_set
	|| loclbl.is_set
	|| pfxlblholddowndelts.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rtlblafflags.yfilter)
	|| ydk::is_set(rtlblafver.yfilter)
	|| ydk::is_set(loclbl.yfilter)
	|| ydk::is_set(pfxlblholddowndelts.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LblRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rtlblafflags.is_set || is_set(rtlblafflags.yfilter)) leaf_name_data.push_back(rtlblafflags.get_name_leafdata());
    if (rtlblafver.is_set || is_set(rtlblafver.yfilter)) leaf_name_data.push_back(rtlblafver.get_name_leafdata());
    if (loclbl.is_set || is_set(loclbl.yfilter)) leaf_name_data.push_back(loclbl.get_name_leafdata());
    if (pfxlblholddowndelts.is_set || is_set(pfxlblholddowndelts.yfilter)) leaf_name_data.push_back(pfxlblholddowndelts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLblAfFlags")
    {
        rtlblafflags = value;
        rtlblafflags.value_namespace = name_space;
        rtlblafflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLblAfVer")
    {
        rtlblafver = value;
        rtlblafver.value_namespace = name_space;
        rtlblafver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locLbl")
    {
        loclbl = value;
        loclbl.value_namespace = name_space;
        loclbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxLblHoldDownDelTs")
    {
        pfxlblholddowndelts = value;
        pfxlblholddowndelts.value_namespace = name_space;
        pfxlblholddowndelts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtLblAfFlags")
    {
        rtlblafflags.yfilter = yfilter;
    }
    if(value_path == "rtLblAfVer")
    {
        rtlblafver.yfilter = yfilter;
    }
    if(value_path == "locLbl")
    {
        loclbl.yfilter = yfilter;
    }
    if(value_path == "pfxLblHoldDownDelTs")
    {
        pfxlblholddowndelts.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtLblAfFlags" || name == "rtLblAfVer" || name == "locLbl" || name == "pfxLblHoldDownDelTs" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "LblRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"},
    numimported{YType::uint16, "numImported"},
    importedlst{YType::str, "importedLst"},
    importedsrc{YType::str, "importedSrc"},
    origimportedsrc{YType::str, "origImportedSrc"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| numimported.is_set
	|| importedlst.is_set
	|| importedsrc.is_set
	|| origimportedsrc.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| ydk::is_set(numimported.yfilter)
	|| ydk::is_set(importedlst.yfilter)
	|| ydk::is_set(importedsrc.yfilter)
	|| ydk::is_set(origimportedsrc.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());
    if (numimported.is_set || is_set(numimported.yfilter)) leaf_name_data.push_back(numimported.get_name_leafdata());
    if (importedlst.is_set || is_set(importedlst.yfilter)) leaf_name_data.push_back(importedlst.get_name_leafdata());
    if (importedsrc.is_set || is_set(importedsrc.yfilter)) leaf_name_data.push_back(importedsrc.get_name_leafdata());
    if (origimportedsrc.is_set || is_set(origimportedsrc.yfilter)) leaf_name_data.push_back(origimportedsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seg_items != nullptr)
    {
        _children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        _children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        _children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        _children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        _children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        _children["pmsi-items"] = pmsi_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numImported")
    {
        numimported = value;
        numimported.value_namespace = name_space;
        numimported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedLst")
    {
        importedlst = value;
        importedlst.value_namespace = name_space;
        importedlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedSrc")
    {
        importedsrc = value;
        importedsrc.value_namespace = name_space;
        importedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc = value;
        origimportedsrc.value_namespace = name_space;
        origimportedsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
    if(value_path == "numImported")
    {
        numimported.yfilter = yfilter;
    }
    if(value_path == "importedLst")
    {
        importedlst.yfilter = yfilter;
    }
    if(value_path == "importedSrc")
    {
        importedsrc.yfilter = yfilter;
    }
    if(value_path == "origImportedSrc")
    {
        origimportedsrc.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId" || name == "numImported" || name == "importedLst" || name == "importedSrc" || name == "origImportedSrc")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList>();
        ent_->parent = this;
        asseg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asseg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asn_items != nullptr)
    {
        _children["asn-items"] = asn_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        ent_->parent = this;
        asitem_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asitem_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto ent_ = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList>();
        ent_->parent = this;
        regcomm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regcomm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    return _children;
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}


}
}



#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_0.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpAllGraceful::ClearBgpAllGraceful()
{

    yang_name = "clear-bgp-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAllGraceful::~ClearBgpAllGraceful()
{
}

bool ClearBgpAllGraceful::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool ClearBgpAllGraceful::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpAllGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-all-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAllGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAllGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAllGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAllGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAllGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAllGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpAllGraceful>();
}

std::string ClearBgpAllGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAllGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAllGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAllGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAllGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpAll::ClearBgpAll()
{

    yang_name = "clear-bgp-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAll::~ClearBgpAll()
{
}

bool ClearBgpAll::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool ClearBgpAll::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAll::clone_ptr() const
{
    return std::make_shared<ClearBgpAll>();
}

std::string ClearBgpAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAll::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpIpAddrGraceful::ClearBgpIpAddrGraceful()
    :
    input(std::make_shared<ClearBgpIpAddrGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpIpAddrGraceful::~ClearBgpIpAddrGraceful()
{
}

bool ClearBgpIpAddrGraceful::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpIpAddrGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpIpAddrGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpIpAddrGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpIpAddrGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpIpAddrGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpIpAddrGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpIpAddrGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpIpAddrGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpIpAddrGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpIpAddrGraceful>();
}

std::string ClearBgpIpAddrGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpIpAddrGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpIpAddrGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpIpAddrGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpIpAddrGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpIpAddrGraceful::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-ip-addr-graceful"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpIpAddrGraceful::Input::~Input()
{
}

bool ClearBgpIpAddrGraceful::Input::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set;
}

bool ClearBgpIpAddrGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpIpAddrGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpIpAddrGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpIpAddrGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpIpAddrGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpIpAddrGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpIpAddrGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpIpAddrGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpIpAddrGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpIpAddrLongLivedStale::ClearBgpIpAddrLongLivedStale()
    :
    input(std::make_shared<ClearBgpIpAddrLongLivedStale::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpIpAddrLongLivedStale::~ClearBgpIpAddrLongLivedStale()
{
}

bool ClearBgpIpAddrLongLivedStale::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpIpAddrLongLivedStale::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpIpAddrLongLivedStale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr-long-lived-stale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpIpAddrLongLivedStale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpIpAddrLongLivedStale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpIpAddrLongLivedStale::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpIpAddrLongLivedStale::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpIpAddrLongLivedStale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpIpAddrLongLivedStale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpIpAddrLongLivedStale::clone_ptr() const
{
    return std::make_shared<ClearBgpIpAddrLongLivedStale>();
}

std::string ClearBgpIpAddrLongLivedStale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpIpAddrLongLivedStale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpIpAddrLongLivedStale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpIpAddrLongLivedStale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpIpAddrLongLivedStale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpIpAddrLongLivedStale::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-ip-addr-long-lived-stale"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpIpAddrLongLivedStale::Input::~Input()
{
}

bool ClearBgpIpAddrLongLivedStale::Input::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set;
}

bool ClearBgpIpAddrLongLivedStale::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpIpAddrLongLivedStale::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr-long-lived-stale/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpIpAddrLongLivedStale::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpIpAddrLongLivedStale::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpIpAddrLongLivedStale::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpIpAddrLongLivedStale::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpIpAddrLongLivedStale::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpIpAddrLongLivedStale::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpIpAddrLongLivedStale::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpIpAddr::ClearBgpIpAddr()
    :
    input(std::make_shared<ClearBgpIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpIpAddr::~ClearBgpIpAddr()
{
}

bool ClearBgpIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpIpAddr>();
}

std::string ClearBgpIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpIpAddr::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpIpAddr::Input::~Input()
{
}

bool ClearBgpIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set;
}

bool ClearBgpIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoftInPrefixFilter::ClearBgpAfiSafiAllSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpAfiSafiAllSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoftInPrefixFilter::~ClearBgpAfiSafiAllSoftInPrefixFilter()
{
}

bool ClearBgpAfiSafiAllSoftInPrefixFilter::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAllSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAllSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAllSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAllSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoftInPrefixFilter>();
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAllSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAllSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoftInPrefixFilter::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-all-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpAfiSafiAllSoftInPrefixFilter::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAllSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAllSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAllSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoftIn::ClearBgpAfiSafiAllSoftIn()
    :
    input(std::make_shared<ClearBgpAfiSafiAllSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoftIn::~ClearBgpAfiSafiAllSoftIn()
{
}

bool ClearBgpAfiSafiAllSoftIn::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAllSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAllSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAllSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAllSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAllSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoftIn>();
}

std::string ClearBgpAfiSafiAllSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAllSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAllSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoftIn::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-all-soft-in"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoftIn::Input::~Input()
{
}

bool ClearBgpAfiSafiAllSoftIn::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiAllSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAllSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAllSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAllSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAllSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoftOut::ClearBgpAfiSafiAllSoftOut()
    :
    input(std::make_shared<ClearBgpAfiSafiAllSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoftOut::~ClearBgpAfiSafiAllSoftOut()
{
}

bool ClearBgpAfiSafiAllSoftOut::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAllSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAllSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAllSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAllSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAllSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoftOut>();
}

std::string ClearBgpAfiSafiAllSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAllSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAllSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoftOut::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-all-soft-out"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoftOut::Input::~Input()
{
}

bool ClearBgpAfiSafiAllSoftOut::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiAllSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAllSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAllSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAllSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAllSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoft::ClearBgpAfiSafiAllSoft()
    :
    input(std::make_shared<ClearBgpAfiSafiAllSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoft::~ClearBgpAfiSafiAllSoft()
{
}

bool ClearBgpAfiSafiAllSoft::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAllSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAllSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAllSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAllSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAllSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoft>();
}

std::string ClearBgpAfiSafiAllSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAllSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAllSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAllSoft::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-all-soft"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAllSoft::Input::~Input()
{
}

bool ClearBgpAfiSafiAllSoft::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiAllSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAllSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAllSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAllSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAllSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAllSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAllSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAllSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrLongLivedStale::ClearBgpAfiSafiIpAddrLongLivedStale()
    :
    input(std::make_shared<ClearBgpAfiSafiIpAddrLongLivedStale::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrLongLivedStale::~ClearBgpAfiSafiIpAddrLongLivedStale()
{
}

bool ClearBgpAfiSafiIpAddrLongLivedStale::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiIpAddrLongLivedStale::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiIpAddrLongLivedStale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-long-lived-stale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrLongLivedStale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrLongLivedStale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiIpAddrLongLivedStale::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrLongLivedStale::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiIpAddrLongLivedStale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiIpAddrLongLivedStale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrLongLivedStale::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrLongLivedStale>();
}

std::string ClearBgpAfiSafiIpAddrLongLivedStale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrLongLivedStale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrLongLivedStale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiIpAddrLongLivedStale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiIpAddrLongLivedStale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrLongLivedStale::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-ip-addr-long-lived-stale"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrLongLivedStale::Input::~Input()
{
}

bool ClearBgpAfiSafiIpAddrLongLivedStale::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrLongLivedStale::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiIpAddrLongLivedStale::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-long-lived-stale/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiIpAddrLongLivedStale::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrLongLivedStale::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrLongLivedStale::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrLongLivedStale::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiIpAddrLongLivedStale::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiIpAddrLongLivedStale::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiIpAddrLongLivedStale::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoftInPrefixFilter::ClearBgpAfiSafiIpAddrSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoftInPrefixFilter::~ClearBgpAfiSafiIpAddrSoftInPrefixFilter()
{
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilter::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiIpAddrSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiIpAddrSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoftInPrefixFilter>();
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiIpAddrSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-ip-addr-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoftIn::ClearBgpAfiSafiIpAddrSoftIn()
    :
    input(std::make_shared<ClearBgpAfiSafiIpAddrSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoftIn::~ClearBgpAfiSafiIpAddrSoftIn()
{
}

bool ClearBgpAfiSafiIpAddrSoftIn::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiIpAddrSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiIpAddrSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiIpAddrSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiIpAddrSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiIpAddrSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoftIn>();
}

std::string ClearBgpAfiSafiIpAddrSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiIpAddrSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiIpAddrSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoftIn::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-ip-addr-soft-in"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoftIn::Input::~Input()
{
}

bool ClearBgpAfiSafiIpAddrSoftIn::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiIpAddrSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiIpAddrSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiIpAddrSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiIpAddrSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiIpAddrSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoftOut::ClearBgpAfiSafiIpAddrSoftOut()
    :
    input(std::make_shared<ClearBgpAfiSafiIpAddrSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoftOut::~ClearBgpAfiSafiIpAddrSoftOut()
{
}

bool ClearBgpAfiSafiIpAddrSoftOut::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiIpAddrSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiIpAddrSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiIpAddrSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiIpAddrSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiIpAddrSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoftOut>();
}

std::string ClearBgpAfiSafiIpAddrSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiIpAddrSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiIpAddrSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoftOut::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-ip-addr-soft-out"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoftOut::Input::~Input()
{
}

bool ClearBgpAfiSafiIpAddrSoftOut::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiIpAddrSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiIpAddrSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiIpAddrSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiIpAddrSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiIpAddrSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoft::ClearBgpAfiSafiIpAddrSoft()
    :
    input(std::make_shared<ClearBgpAfiSafiIpAddrSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoft::~ClearBgpAfiSafiIpAddrSoft()
{
}

bool ClearBgpAfiSafiIpAddrSoft::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiIpAddrSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiIpAddrSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiIpAddrSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiIpAddrSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiIpAddrSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoft>();
}

std::string ClearBgpAfiSafiIpAddrSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiIpAddrSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiIpAddrSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiIpAddrSoft::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-ip-addr-soft"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiIpAddrSoft::Input::~Input()
{
}

bool ClearBgpAfiSafiIpAddrSoft::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiIpAddrSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiIpAddrSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiIpAddrSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiIpAddrSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiIpAddrSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiIpAddrSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiIpAddrSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiIpAddrSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoftInPrefixFilter::ClearBgpAfiSafiAsSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpAfiSafiAsSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoftInPrefixFilter::~ClearBgpAfiSafiAsSoftInPrefixFilter()
{
}

bool ClearBgpAfiSafiAsSoftInPrefixFilter::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAsSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAsSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAsSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAsSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoftInPrefixFilter>();
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAsSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAsSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoftInPrefixFilter::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-as-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpAfiSafiAsSoftInPrefixFilter::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAsSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAsSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAsSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoftIn::ClearBgpAfiSafiAsSoftIn()
    :
    input(std::make_shared<ClearBgpAfiSafiAsSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoftIn::~ClearBgpAfiSafiAsSoftIn()
{
}

bool ClearBgpAfiSafiAsSoftIn::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAsSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAsSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAsSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAsSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAsSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoftIn>();
}

std::string ClearBgpAfiSafiAsSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAsSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAsSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoftIn::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-as-soft-in"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoftIn::Input::~Input()
{
}

bool ClearBgpAfiSafiAsSoftIn::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpAfiSafiAsSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAsSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAsSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAsSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAsSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoftOut::ClearBgpAfiSafiAsSoftOut()
    :
    input(std::make_shared<ClearBgpAfiSafiAsSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoftOut::~ClearBgpAfiSafiAsSoftOut()
{
}

bool ClearBgpAfiSafiAsSoftOut::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAsSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAsSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAsSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAsSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAsSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoftOut>();
}

std::string ClearBgpAfiSafiAsSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAsSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAsSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoftOut::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-as-soft-out"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoftOut::Input::~Input()
{
}

bool ClearBgpAfiSafiAsSoftOut::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpAfiSafiAsSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAsSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAsSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAsSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAsSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoft::ClearBgpAfiSafiAsSoft()
    :
    input(std::make_shared<ClearBgpAfiSafiAsSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoft::~ClearBgpAfiSafiAsSoft()
{
}

bool ClearBgpAfiSafiAsSoft::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiAsSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiAsSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiAsSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiAsSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiAsSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoft>();
}

std::string ClearBgpAfiSafiAsSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiAsSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiAsSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiAsSoft::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-as-soft"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiAsSoft::Input::~Input()
{
}

bool ClearBgpAfiSafiAsSoft::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpAfiSafiAsSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiAsSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiAsSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiAsSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiAsSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiAsSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiAsSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiAsSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpAfiSafiDampeningIpPrefix::ClearBgpAfiSafiDampeningIpPrefix()
    :
    input(std::make_shared<ClearBgpAfiSafiDampeningIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-dampening-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiDampeningIpPrefix::~ClearBgpAfiSafiDampeningIpPrefix()
{
}

bool ClearBgpAfiSafiDampeningIpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiDampeningIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiDampeningIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampeningIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiDampeningIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiDampeningIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiDampeningIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiDampeningIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiDampeningIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiDampeningIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpPrefix>();
}

std::string ClearBgpAfiSafiDampeningIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiDampeningIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiDampeningIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiDampeningIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-dampening-ip-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiDampeningIpPrefix::Input::~Input()
{
}

bool ClearBgpAfiSafiDampeningIpPrefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpAfiSafiDampeningIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiDampeningIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampeningIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiDampeningIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiDampeningIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiDampeningIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiDampeningIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiDampeningIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpAfiSafiDampening::ClearBgpAfiSafiDampening()
    :
    input(std::make_shared<ClearBgpAfiSafiDampening::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiDampening::~ClearBgpAfiSafiDampening()
{
}

bool ClearBgpAfiSafiDampening::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiDampening::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiDampening::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiDampening::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampening>();
}

std::string ClearBgpAfiSafiDampening::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampening::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampening::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiDampening::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiDampening::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-dampening"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiDampening::Input::~Input()
{
}

bool ClearBgpAfiSafiDampening::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiDampening::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiDampening::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiDampening::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampening::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiDampening::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiDampening::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiDampening::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiDampening::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiDampening::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoftInPrefixFilter::ClearBgpAfiSafiExternalSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpAfiSafiExternalSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoftInPrefixFilter::~ClearBgpAfiSafiExternalSoftInPrefixFilter()
{
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilter::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiExternalSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiExternalSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiExternalSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoftInPrefixFilter>();
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiExternalSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-external-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoftIn::ClearBgpAfiSafiExternalSoftIn()
    :
    input(std::make_shared<ClearBgpAfiSafiExternalSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoftIn::~ClearBgpAfiSafiExternalSoftIn()
{
}

bool ClearBgpAfiSafiExternalSoftIn::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiExternalSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiExternalSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiExternalSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiExternalSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiExternalSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoftIn>();
}

std::string ClearBgpAfiSafiExternalSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiExternalSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiExternalSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoftIn::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-external-soft-in"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoftIn::Input::~Input()
{
}

bool ClearBgpAfiSafiExternalSoftIn::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiExternalSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiExternalSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiExternalSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiExternalSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiExternalSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoftOut::ClearBgpAfiSafiExternalSoftOut()
    :
    input(std::make_shared<ClearBgpAfiSafiExternalSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoftOut::~ClearBgpAfiSafiExternalSoftOut()
{
}

bool ClearBgpAfiSafiExternalSoftOut::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiExternalSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiExternalSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiExternalSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiExternalSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiExternalSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoftOut>();
}

std::string ClearBgpAfiSafiExternalSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiExternalSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiExternalSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoftOut::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-external-soft-out"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoftOut::Input::~Input()
{
}

bool ClearBgpAfiSafiExternalSoftOut::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiExternalSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiExternalSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiExternalSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiExternalSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiExternalSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoft::ClearBgpAfiSafiExternalSoft()
    :
    input(std::make_shared<ClearBgpAfiSafiExternalSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoft::~ClearBgpAfiSafiExternalSoft()
{
}

bool ClearBgpAfiSafiExternalSoft::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiExternalSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiExternalSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiExternalSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiExternalSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiExternalSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoft>();
}

std::string ClearBgpAfiSafiExternalSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiExternalSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiExternalSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiExternalSoft::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-external-soft"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiExternalSoft::Input::~Input()
{
}

bool ClearBgpAfiSafiExternalSoft::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiExternalSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiExternalSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiExternalSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiExternalSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiExternalSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiExternalSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiExternalSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiExternalSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::~ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-ip-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpAddr::ClearBgpAfiSafiFlapStatisticsIpAddr()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsIpAddr::~ClearBgpAfiSafiFlapStatisticsIpAddr()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiFlapStatisticsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatisticsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddr>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatisticsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatisticsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsIpAddr::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiFlapStatisticsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatisticsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatisticsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpPrefix::ClearBgpAfiSafiFlapStatisticsIpPrefix()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsIpPrefix::~ClearBgpAfiSafiFlapStatisticsIpPrefix()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiFlapStatisticsIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatisticsIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpPrefix>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatisticsIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-ip-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsRegexp::ClearBgpAfiSafiFlapStatisticsRegexp()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsRegexp::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsRegexp::~ClearBgpAfiSafiFlapStatisticsRegexp()
{
}

bool ClearBgpAfiSafiFlapStatisticsRegexp::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsRegexp::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsRegexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsRegexp::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsRegexp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiFlapStatisticsRegexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatisticsRegexp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsRegexp::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsRegexp>();
}

std::string ClearBgpAfiSafiFlapStatisticsRegexp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsRegexp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsRegexp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatisticsRegexp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatisticsRegexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsRegexp::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    regexp_pattern{YType::str, "regexp-pattern"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-regexp"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsRegexp::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsRegexp::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| regexp_pattern.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsRegexp::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(regexp_pattern.yfilter);
}

std::string ClearBgpAfiSafiFlapStatisticsRegexp::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-regexp/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatisticsRegexp::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsRegexp::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.yfilter)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsRegexp::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsRegexp::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiFlapStatisticsRegexp::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern = value;
        regexp_pattern.value_namespace = name_space;
        regexp_pattern.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatisticsRegexp::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatisticsRegexp::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "regexp-pattern")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsRoutePolicy::ClearBgpAfiSafiFlapStatisticsRoutePolicy()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsRoutePolicy::~ClearBgpAfiSafiFlapStatisticsRoutePolicy()
{
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiFlapStatisticsRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatisticsRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsRoutePolicy::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsRoutePolicy>();
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatisticsRoutePolicy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-route-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| route_policy_name.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "route-policy-name")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatistics::ClearBgpAfiSafiFlapStatistics()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatistics::~ClearBgpAfiSafiFlapStatistics()
{
}

bool ClearBgpAfiSafiFlapStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiFlapStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatistics>();
}

std::string ClearBgpAfiSafiFlapStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatistics::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiFlapStatistics::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatistics::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiFlapStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiFlapStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiFlapStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiFlapStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiFlapStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiNexthopPerformanceStatistics::ClearBgpAfiSafiNexthopPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpAfiSafiNexthopPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiNexthopPerformanceStatistics::~ClearBgpAfiSafiNexthopPerformanceStatistics()
{
}

bool ClearBgpAfiSafiNexthopPerformanceStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiNexthopPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiNexthopPerformanceStatistics>();
}

std::string ClearBgpAfiSafiNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiNexthopPerformanceStatistics::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-nexthop-performance-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiNexthopPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpAfiSafiNexthopPerformanceStatistics::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiNexthopPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiNexthopPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-nexthop-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiNexthopPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiNexthopPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiNexthopPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiNexthopPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiNexthopPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiNexthopPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiNexthopPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiNexthopRegistrationIpAddr::ClearBgpAfiSafiNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpAfiSafiNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiNexthopRegistrationIpAddr::~ClearBgpAfiSafiNexthopRegistrationIpAddr()
{
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiNexthopRegistrationIpAddr>();
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiSelfOriginated::ClearBgpAfiSafiSelfOriginated()
    :
    input(std::make_shared<ClearBgpAfiSafiSelfOriginated::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiSelfOriginated::~ClearBgpAfiSafiSelfOriginated()
{
}

bool ClearBgpAfiSafiSelfOriginated::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiSelfOriginated::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiSelfOriginated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-self-originated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiSelfOriginated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiSelfOriginated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiSelfOriginated::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiSelfOriginated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiSelfOriginated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiSelfOriginated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiSelfOriginated::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiSelfOriginated>();
}

std::string ClearBgpAfiSafiSelfOriginated::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiSelfOriginated::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiSelfOriginated::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiSelfOriginated::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiSelfOriginated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiSelfOriginated::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-self-originated"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiSelfOriginated::Input::~Input()
{
}

bool ClearBgpAfiSafiSelfOriginated::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiSelfOriginated::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiSelfOriginated::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-self-originated/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiSelfOriginated::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiSelfOriginated::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiSelfOriginated::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiSelfOriginated::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiSelfOriginated::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiSelfOriginated::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiSelfOriginated::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiShutdown::ClearBgpAfiSafiShutdown()
    :
    input(std::make_shared<ClearBgpAfiSafiShutdown::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiShutdown::~ClearBgpAfiSafiShutdown()
{
}

bool ClearBgpAfiSafiShutdown::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiShutdown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiShutdown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiShutdown>();
}

std::string ClearBgpAfiSafiShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiShutdown::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-shutdown"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiShutdown::Input::~Input()
{
}

bool ClearBgpAfiSafiShutdown::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiShutdown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiShutdown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiShutdown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiShutdown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiShutdown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiShutdown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiShutdown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiShutdown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiShutdown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::~ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-address-family-update-parent"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-address-family-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqAddressFamily::ClearBgpAfiSafiUpdateOutqAddressFamily()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamily::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqAddressFamily::~ClearBgpAfiSafiUpdateOutqAddressFamily()
{
}

bool ClearBgpAfiSafiUpdateOutqAddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamily::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamily>();
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqAddressFamily::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-address-family"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqAddressFamily::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqAddressFamily::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiUpdateOutqAddressFamily::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamily::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamily::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqAddressFamily::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqAddressFamily::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqAddressFamily::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqAddressFamily::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqAddressFamily::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqAddressFamily::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddr::ClearBgpAfiSafiUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddr::~ClearBgpAfiSafiUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::~ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroup::ClearBgpAfiSafiUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroup::~ClearBgpAfiSafiUpdateOutqUpdateGroup()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroup>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpAsGraceful::ClearBgpAsGraceful()
    :
    input(std::make_shared<ClearBgpAsGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAsGraceful::~ClearBgpAsGraceful()
{
}

bool ClearBgpAsGraceful::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAsGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAsGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-as-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAsGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAsGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAsGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAsGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAsGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAsGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAsGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpAsGraceful>();
}

std::string ClearBgpAsGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAsGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAsGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAsGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAsGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAsGraceful::Input::Input()
    :
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-as-graceful"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAsGraceful::Input::~Input()
{
}

bool ClearBgpAsGraceful::Input::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool ClearBgpAsGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpAsGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-as-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAsGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAsGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAsGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAsGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAsGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAsGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpAsGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

ClearBgpAs::ClearBgpAs()
    :
    input(std::make_shared<ClearBgpAs::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpAs::~ClearBgpAs()
{
}

bool ClearBgpAs::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAs::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAs::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpAs::clone_ptr() const
{
    return std::make_shared<ClearBgpAs>();
}

std::string ClearBgpAs::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAs::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAs::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAs::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAs::Input::Input()
    :
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-as"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpAs::Input::~Input()
{
}

bool ClearBgpAs::Input::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool ClearBgpAs::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpAs::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-as/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAs::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAs::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpAs::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpAs::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpAs::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAs::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpAs::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

ClearBgpBestpathIpAddrIpNetmask::ClearBgpBestpathIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpBestpathIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathIpAddrIpNetmask::~ClearBgpBestpathIpAddrIpNetmask()
{
}

bool ClearBgpBestpathIpAddrIpNetmask::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathIpAddrIpNetmask>();
}

std::string ClearBgpBestpathIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathIpAddrIpNetmask::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpBestpathIpAddrIpNetmask::Input::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpBestpathIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpBestpathIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpBestpathIpAddr::ClearBgpBestpathIpAddr()
    :
    input(std::make_shared<ClearBgpBestpathIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathIpAddr::~ClearBgpBestpathIpAddr()
{
}

bool ClearBgpBestpathIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathIpAddr>();
}

std::string ClearBgpBestpathIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathIpAddr::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathIpAddr::Input::~Input()
{
}

bool ClearBgpBestpathIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set;
}

bool ClearBgpBestpathIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpBestpathIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpBestpathIpPrefix::ClearBgpBestpathIpPrefix()
    :
    input(std::make_shared<ClearBgpBestpathIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathIpPrefix::~ClearBgpBestpathIpPrefix()
{
}

bool ClearBgpBestpathIpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathIpPrefix>();
}

std::string ClearBgpBestpathIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathIpPrefix::Input::Input()
    :
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-ip-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathIpPrefix::Input::~Input()
{
}

bool ClearBgpBestpathIpPrefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return ip_prefix.is_set;
}

bool ClearBgpBestpathIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpBestpathIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpBestpathIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpAddrIpNetmask::ClearBgpBestpathAfiSafiIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpAddrIpNetmask::~ClearBgpBestpathAfiSafiIpAddrIpNetmask()
{
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmask::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpAddrIpNetmask>();
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpAddr::ClearBgpBestpathAfiSafiIpAddr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpAddr::~ClearBgpBestpathAfiSafiIpAddr()
{
}

bool ClearBgpBestpathAfiSafiIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpAddr>();
}

std::string ClearBgpBestpathAfiSafiIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpAddr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpBestpathAfiSafiIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpPrefix::ClearBgpBestpathAfiSafiIpPrefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpPrefix::~ClearBgpBestpathAfiSafiIpPrefix()
{
}

bool ClearBgpBestpathAfiSafiIpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpPrefix>();
}

std::string ClearBgpBestpathAfiSafiIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ip-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpPrefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpPrefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::~ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddr::ClearBgpBestpathAfiSafiBridgeDomainIpAddr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddr::~ClearBgpBestpathAfiSafiBridgeDomainIpAddr()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddr>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiBridgeDomainIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::ClearBgpBestpathAfiSafiBridgeDomainIpPrefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::~ClearBgpBestpathAfiSafiBridgeDomainIpPrefix()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpPrefix>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::ClearBgpBestpathAfiSafiRdIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::~ClearBgpBestpathAfiSafiRdIpAddrIpNetmask()
{
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpAddrIpNetmask>();
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| rd.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpAddr::ClearBgpBestpathAfiSafiRdIpAddr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpAddr::~ClearBgpBestpathAfiSafiRdIpAddr()
{
}

bool ClearBgpBestpathAfiSafiRdIpAddr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiRdIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpAddr>();
}

std::string ClearBgpBestpathAfiSafiRdIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ip-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpAddr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpAddr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| rd.is_set
	|| ip_addr.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiRdIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiRdIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpPrefix::ClearBgpBestpathAfiSafiRdIpPrefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpPrefix::~ClearBgpBestpathAfiSafiRdIpPrefix()
{
}

bool ClearBgpBestpathAfiSafiRdIpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiRdIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpPrefix>();
}

std::string ClearBgpBestpathAfiSafiRdIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ip-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpPrefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpPrefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| rd.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiRdIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiRdIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::~ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4Addr::ClearBgpBestpathAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4Addr::~ClearBgpBestpathAfiSafiIpv4Addr()
{
}

bool ClearBgpBestpathAfiSafiIpv4Addr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4Addr>();
}

std::string ClearBgpBestpathAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpv4Addr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4Prefix::ClearBgpBestpathAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4Prefix::~ClearBgpBestpathAfiSafiIpv4Prefix()
{
}

bool ClearBgpBestpathAfiSafiIpv4Prefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4Prefix>();
}

std::string ClearBgpBestpathAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpv4Prefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv4Addr::ClearBgpBestpathAfiSafiRdIpv4Addr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpv4Addr::~ClearBgpBestpathAfiSafiRdIpv4Addr()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4Addr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiRdIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv4Addr>();
}

std::string ClearBgpBestpathAfiSafiRdIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv4Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdIpv4Addr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4Addr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiRdIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiRdIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv4Addr::ClearBgpBestpathAfiSafiVrfIpv4Addr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiVrfIpv4Addr::~ClearBgpBestpathAfiSafiVrfIpv4Addr()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4Addr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrfIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiVrfIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiVrfIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrfIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrfIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4Addr>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrfIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrfIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiVrfIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiNetwork::ClearBgpBestpathAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiNetwork::~ClearBgpBestpathAfiSafiNetwork()
{
}

bool ClearBgpBestpathAfiSafiNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiNetwork>();
}

std::string ClearBgpBestpathAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiNetwork::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpBestpathAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpBestpathAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "network")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdNetwork::ClearBgpBestpathAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdNetwork::~ClearBgpBestpathAfiSafiRdNetwork()
{
}

bool ClearBgpBestpathAfiSafiRdNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdNetwork>();
}

std::string ClearBgpBestpathAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdNetwork::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| rd.is_set
	|| network.is_set;
}

bool ClearBgpBestpathAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "network")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfNetwork::ClearBgpBestpathAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiVrfNetwork::~ClearBgpBestpathAfiSafiVrfNetwork()
{
}

bool ClearBgpBestpathAfiSafiVrfNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfNetwork>();
}

std::string ClearBgpBestpathAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfNetwork::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| vrf_name.is_set
	|| network.is_set;
}

bool ClearBgpBestpathAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name" || name == "network")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRtConstraintNetwork::ClearBgpBestpathAfiSafiRtConstraintNetwork()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRtConstraintNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRtConstraintNetwork::~ClearBgpBestpathAfiSafiRtConstraintNetwork()
{
}

bool ClearBgpBestpathAfiSafiRtConstraintNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRtConstraintNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rt-constraint-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRtConstraintNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRtConstraintNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRtConstraintNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRtConstraintNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiRtConstraintNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRtConstraintNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRtConstraintNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRtConstraintNetwork>();
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRtConstraintNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRtConstraintNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRtConstraintNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rt-constraint-network"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rt_constraint_network.yfilter);
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rt-constraint-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.yfilter)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network = value;
        rt_constraint_network.value_namespace = name_space;
        rt_constraint_network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiRtConstraintNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rt-constraint-network")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4TunnelNetwork::ClearBgpBestpathAfiSafiIpv4TunnelNetwork()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4TunnelNetwork::~ClearBgpBestpathAfiSafiIpv4TunnelNetwork()
{
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-tunnel-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpv4TunnelNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpv4TunnelNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4TunnelNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4TunnelNetwork>();
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpv4TunnelNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ipv4-tunnel-network"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_tunnel_network.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-tunnel-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.yfilter)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network = value;
        ipv4_tunnel_network.value_namespace = name_space;
        ipv4_tunnel_network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-tunnel-network")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::~ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
        ipv6_netmask.value_namespace = name_space;
        ipv6_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv6Addr::ClearBgpBestpathAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv6Addr::~ClearBgpBestpathAfiSafiIpv6Addr()
{
}

bool ClearBgpBestpathAfiSafiIpv6Addr::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv6Addr>();
}

std::string ClearBgpBestpathAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv6Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpv6Addr::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpBestpathAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv6Prefix::ClearBgpBestpathAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv6Prefix::~ClearBgpBestpathAfiSafiIpv6Prefix()
{
}

bool ClearBgpBestpathAfiSafiIpv6Prefix::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv6Prefix>();
}

std::string ClearBgpBestpathAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiIpv6Prefix::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRd::ClearBgpBestpathAfiSafiRd()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRd::~ClearBgpBestpathAfiSafiRd()
{
}

bool ClearBgpBestpathAfiSafiRd::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRd>();
}

std::string ClearBgpBestpathAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRd::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiRd::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRd::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpBestpathAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrf::ClearBgpBestpathAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiVrf::~ClearBgpBestpathAfiSafiVrf()
{
}

bool ClearBgpBestpathAfiSafiVrf::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrf>();
}

std::string ClearBgpBestpathAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrf::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrf::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpBestpathAfiSafi::ClearBgpBestpathAfiSafi()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafi::~ClearBgpBestpathAfiSafi()
{
}

bool ClearBgpBestpathAfiSafi::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearBgpBestpathAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafi>();
}

std::string ClearBgpBestpathAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafi::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearBgpBestpathAfiSafi::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafi::Input::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set;
}

bool ClearBgpBestpathAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpBestpathAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearBgpBestpathAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearBgpBestpathAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearBgpBestpathAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpBestpathAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

const Enum::YLeaf InstanceName::all {0, "all"};

const Enum::YLeaf Vpnv6Safi::flowspec {0, "flowspec"};
const Enum::YLeaf Vpnv6Safi::multicast {1, "multicast"};
const Enum::YLeaf Vpnv6Safi::unicast {2, "unicast"};

const Enum::YLeaf Afi::all {0, "all"};
const Enum::YLeaf Afi::ipv4 {1, "ipv4"};
const Enum::YLeaf Afi::ipv6 {2, "ipv6"};
const Enum::YLeaf Afi::l2vpn {3, "l2vpn"};
const Enum::YLeaf Afi::link_state {4, "link-state"};
const Enum::YLeaf Afi::vpnv4 {5, "vpnv4"};
const Enum::YLeaf Afi::vpnv6 {6, "vpnv6"};

const Enum::YLeaf VrfName::all {0, "all"};

const Enum::YLeaf Ipv4Safi::all {0, "all"};
const Enum::YLeaf Ipv4Safi::flowspec {1, "flowspec"};
const Enum::YLeaf Ipv4Safi::labeled_unicast {2, "labeled-unicast"};
const Enum::YLeaf Ipv4Safi::mdt {3, "mdt"};
const Enum::YLeaf Ipv4Safi::multicast {4, "multicast"};
const Enum::YLeaf Ipv4Safi::mvpn {5, "mvpn"};
const Enum::YLeaf Ipv4Safi::rt_filter {6, "rt-filter"};
const Enum::YLeaf Ipv4Safi::sr_policy {7, "sr-policy"};
const Enum::YLeaf Ipv4Safi::tunnel {8, "tunnel"};
const Enum::YLeaf Ipv4Safi::unicast {9, "unicast"};

const Enum::YLeaf AfiSafiType::all_all {0, "all-all"};
const Enum::YLeaf AfiSafiType::all_evpn {1, "all-evpn"};
const Enum::YLeaf AfiSafiType::all_flowspec {2, "all-flowspec"};
const Enum::YLeaf AfiSafiType::all_labeled_unicast {3, "all-labeled-unicast"};
const Enum::YLeaf AfiSafiType::all_mdt {4, "all-mdt"};
const Enum::YLeaf AfiSafiType::all_mspw {5, "all-mspw"};
const Enum::YLeaf AfiSafiType::all_multicast {6, "all-multicast"};
const Enum::YLeaf AfiSafiType::all_mvpn {7, "all-mvpn"};
const Enum::YLeaf AfiSafiType::all_rt_filter {8, "all-rt-filter"};
const Enum::YLeaf AfiSafiType::all_sr_policy {9, "all-sr-policy"};
const Enum::YLeaf AfiSafiType::all_tunnel {10, "all-tunnel"};
const Enum::YLeaf AfiSafiType::all_unicast {11, "all-unicast"};
const Enum::YLeaf AfiSafiType::all_vpls {12, "all-vpls"};
const Enum::YLeaf AfiSafiType::all_vpws {13, "all-vpws"};
const Enum::YLeaf AfiSafiType::ipv4_all {14, "ipv4-all"};
const Enum::YLeaf AfiSafiType::ipv4_flowspec {15, "ipv4-flowspec"};
const Enum::YLeaf AfiSafiType::ipv4_labeled_unicast {16, "ipv4-labeled-unicast"};
const Enum::YLeaf AfiSafiType::ipv4_mdt {17, "ipv4-mdt"};
const Enum::YLeaf AfiSafiType::ipv4_multicast {18, "ipv4-multicast"};
const Enum::YLeaf AfiSafiType::ipv4_mvpn {19, "ipv4-mvpn"};
const Enum::YLeaf AfiSafiType::ipv4_rt_filter {20, "ipv4-rt-filter"};
const Enum::YLeaf AfiSafiType::ipv4_sr_policy {21, "ipv4-sr-policy"};
const Enum::YLeaf AfiSafiType::ipv4_tunnel {22, "ipv4-tunnel"};
const Enum::YLeaf AfiSafiType::ipv4_unicast {23, "ipv4-unicast"};
const Enum::YLeaf AfiSafiType::ipv6_all {24, "ipv6-all"};
const Enum::YLeaf AfiSafiType::ipv6_flowspec {25, "ipv6-flowspec"};
const Enum::YLeaf AfiSafiType::ipv6_labeled_unicast {26, "ipv6-labeled-unicast"};
const Enum::YLeaf AfiSafiType::ipv6_multicast {27, "ipv6-multicast"};
const Enum::YLeaf AfiSafiType::ipv6_mvpn {28, "ipv6-mvpn"};
const Enum::YLeaf AfiSafiType::ipv6_sr_policy {29, "ipv6-sr-policy"};
const Enum::YLeaf AfiSafiType::ipv6_unicast {30, "ipv6-unicast"};
const Enum::YLeaf AfiSafiType::l2vpn_evpn {31, "l2vpn-evpn"};
const Enum::YLeaf AfiSafiType::l2vpn_mspw {32, "l2vpn-mspw"};
const Enum::YLeaf AfiSafiType::l2vpn_vpls {33, "l2vpn-vpls"};
const Enum::YLeaf AfiSafiType::l2vpn_vpws {34, "l2vpn-vpws"};
const Enum::YLeaf AfiSafiType::link_state {35, "link-state"};
const Enum::YLeaf AfiSafiType::vpnv4_flowspec {36, "vpnv4-flowspec"};
const Enum::YLeaf AfiSafiType::vpnv4_multicast {37, "vpnv4-multicast"};
const Enum::YLeaf AfiSafiType::vpnv4_unicast {38, "vpnv4-unicast"};
const Enum::YLeaf AfiSafiType::vpnv6_flowspec {39, "vpnv6-flowspec"};
const Enum::YLeaf AfiSafiType::vpnv6_multicast {40, "vpnv6-multicast"};
const Enum::YLeaf AfiSafiType::vpnv6_unicast {41, "vpnv6-unicast"};

const Enum::YLeaf Vpnv4Safi::flowspec {0, "flowspec"};
const Enum::YLeaf Vpnv4Safi::multicast {1, "multicast"};
const Enum::YLeaf Vpnv4Safi::unicast {2, "unicast"};

const Enum::YLeaf Ipv6Safi::all {0, "all"};
const Enum::YLeaf Ipv6Safi::flowspec {1, "flowspec"};
const Enum::YLeaf Ipv6Safi::labeled_unicast {2, "labeled-unicast"};
const Enum::YLeaf Ipv6Safi::multicast {3, "multicast"};
const Enum::YLeaf Ipv6Safi::mvpn {4, "mvpn"};
const Enum::YLeaf Ipv6Safi::sr_policy {5, "sr-policy"};
const Enum::YLeaf Ipv6Safi::unicast {6, "unicast"};

const Enum::YLeaf Ipv4Safi_::all {0, "all"};
const Enum::YLeaf Ipv4Safi_::flowspec {1, "flowspec"};
const Enum::YLeaf Ipv4Safi_::labeled_unicast {2, "labeled-unicast"};
const Enum::YLeaf Ipv4Safi_::mdt {3, "mdt"};
const Enum::YLeaf Ipv4Safi_::multicast {4, "multicast"};
const Enum::YLeaf Ipv4Safi_::mvpn {5, "mvpn"};
const Enum::YLeaf Ipv4Safi_::rt_filter {6, "rt-filter"};
const Enum::YLeaf Ipv4Safi_::sr_policy {7, "sr-policy"};
const Enum::YLeaf Ipv4Safi_::tunnel {8, "tunnel"};
const Enum::YLeaf Ipv4Safi_::unicast {9, "unicast"};

const Enum::YLeaf Ipv6Safi_::all {0, "all"};
const Enum::YLeaf Ipv6Safi_::flowspec {1, "flowspec"};
const Enum::YLeaf Ipv6Safi_::labeled_unicast {2, "labeled-unicast"};
const Enum::YLeaf Ipv6Safi_::multicast {3, "multicast"};
const Enum::YLeaf Ipv6Safi_::mvpn {4, "mvpn"};
const Enum::YLeaf Ipv6Safi_::sr_policy {5, "sr-policy"};
const Enum::YLeaf Ipv6Safi_::unicast {6, "unicast"};

const Enum::YLeaf L2vpnSafi::evpn {0, "evpn"};
const Enum::YLeaf L2vpnSafi::mspw {1, "mspw"};
const Enum::YLeaf L2vpnSafi::vpls {2, "vpls"};
const Enum::YLeaf L2vpnSafi::vpws {3, "vpws"};

const Enum::YLeaf LinkStateSafi::link_state {0, "link-state"};

const Enum::YLeaf Vpnv4Safi_::flowspec {0, "flowspec"};
const Enum::YLeaf Vpnv4Safi_::multicast {1, "multicast"};
const Enum::YLeaf Vpnv4Safi_::unicast {2, "unicast"};

const Enum::YLeaf Vpnv6Safi_::flowspec {0, "flowspec"};
const Enum::YLeaf Vpnv6Safi_::multicast {1, "multicast"};
const Enum::YLeaf Vpnv6Safi_::unicast {2, "unicast"};

const Enum::YLeaf L2vpnSafi_::evpn {0, "evpn"};
const Enum::YLeaf L2vpnSafi_::mspw {1, "mspw"};
const Enum::YLeaf L2vpnSafi_::vpls {2, "vpls"};
const Enum::YLeaf L2vpnSafi_::vpws {3, "vpws"};

const Enum::YLeaf LinkStateSafi_::link_state {0, "link-state"};


}
}


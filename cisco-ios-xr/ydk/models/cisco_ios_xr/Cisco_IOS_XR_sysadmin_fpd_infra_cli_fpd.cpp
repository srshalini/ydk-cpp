
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_fpd_infra_cli_fpd.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_fpd_infra_cli_fpd {

Fpd::Fpd()
    :
    config(std::make_shared<Fpd::Config>())
{
    config->parent = this;

    yang_name = "fpd"; yang_parent_name = "Cisco-IOS-XR-sysadmin-fpd-infra-cli-fpd"; is_top_level_class = true; has_list_ancestor = false; 
}

Fpd::~Fpd()
{
}

bool Fpd::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data());
}

bool Fpd::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-fpd-infra-cli-fpd:fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Fpd::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    return _children;
}

void Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Fpd::clone_ptr() const
{
    return std::make_shared<Fpd>();
}

std::string Fpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fpd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Fpd::Config::Config()
    :
    auto_upgrade{YType::enumeration, "auto-upgrade"}
{

    yang_name = "config"; yang_parent_name = "fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

Fpd::Config::~Config()
{
}

bool Fpd::Config::has_data() const
{
    if (is_presence_container) return true;
    return auto_upgrade.is_set;
}

bool Fpd::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_upgrade.yfilter);
}

std::string Fpd::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-fpd-infra-cli-fpd:fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Fpd::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_upgrade.is_set || is_set(auto_upgrade.yfilter)) leaf_name_data.push_back(auto_upgrade.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fpd::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fpd::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Fpd::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-upgrade")
    {
        auto_upgrade = value;
        auto_upgrade.value_namespace = name_space;
        auto_upgrade.value_namespace_prefix = name_space_prefix;
    }
}

void Fpd::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-upgrade")
    {
        auto_upgrade.yfilter = yfilter;
    }
}

bool Fpd::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-upgrade")
        return true;
    return false;
}

const Enum::YLeaf Fpd::Config::AutoUpgrade::enable {0, "enable"};
const Enum::YLeaf Fpd::Config::AutoUpgrade::disable {1, "disable"};


}
}


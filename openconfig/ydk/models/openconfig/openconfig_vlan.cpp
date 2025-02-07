
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_vlan.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_vlan {

Vlans::Vlans()
    :
    vlan(this, {"vlan_id"})
{

    yang_name = "vlans"; yang_parent_name = "openconfig-vlan"; is_top_level_class = true; has_list_ancestor = false; 
}

Vlans::~Vlans()
{
}

bool Vlans::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Vlans::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:vlans";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Vlans::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void Vlans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlans::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Vlans::clone_ptr() const
{
    return std::make_shared<Vlans>();
}

std::string Vlans::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Vlans::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Vlans::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vlans::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Vlans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Vlans::Vlan::Vlan()
    :
    vlan_id{YType::str, "vlan-id"}
        ,
    config(std::make_shared<Vlans::Vlan::Config>())
    , state(std::make_shared<Vlans::Vlan::State>())
    , members(std::make_shared<Vlans::Vlan::Members>())
{
    config->parent = this;
    state->parent = this;
    members->parent = this;

    yang_name = "vlan"; yang_parent_name = "vlans"; is_top_level_class = false; has_list_ancestor = false; 
}

Vlans::Vlan::~Vlan()
{
}

bool Vlans::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool Vlans::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string Vlans::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:vlans/" << get_segment_path();
    return path_buffer.str();
}

std::string Vlans::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_id, "vlan-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Vlans::Vlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Vlans::Vlan::State>();
        }
        return state;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Vlans::Vlan::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(members != nullptr)
    {
        _children["members"] = members;
    }

    return _children;
}

void Vlans::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vlans::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Vlans::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "members" || name == "vlan-id")
        return true;
    return false;
}

Vlans::Vlan::Config::Config()
    :
    vlan_id{YType::uint16, "vlan-id"},
    name{YType::str, "name"},
    status{YType::enumeration, "status"},
    tpid{YType::identityref, "tpid"}
{

    yang_name = "config"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlans::Vlan::Config::~Config()
{
}

bool Vlans::Vlan::Config::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| name.is_set
	|| status.is_set
	|| tpid.is_set;
}

bool Vlans::Vlan::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(tpid.yfilter);
}

std::string Vlans::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::Vlan::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tpid.is_set || is_set(tpid.yfilter)) leaf_name_data.push_back(tpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::Vlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vlans::Vlan::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpid")
    {
        tpid = value;
        tpid.value_namespace = name_space;
        tpid.value_namespace_prefix = name_space_prefix;
    }
}

void Vlans::Vlan::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "tpid")
    {
        tpid.yfilter = yfilter;
    }
}

bool Vlans::Vlan::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "name" || name == "status" || name == "tpid")
        return true;
    return false;
}

Vlans::Vlan::State::State()
    :
    vlan_id{YType::uint16, "vlan-id"},
    name{YType::str, "name"},
    status{YType::enumeration, "status"},
    tpid{YType::identityref, "tpid"}
{

    yang_name = "state"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlans::Vlan::State::~State()
{
}

bool Vlans::Vlan::State::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| name.is_set
	|| status.is_set
	|| tpid.is_set;
}

bool Vlans::Vlan::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(tpid.yfilter);
}

std::string Vlans::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::Vlan::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tpid.is_set || is_set(tpid.yfilter)) leaf_name_data.push_back(tpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::Vlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vlans::Vlan::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpid")
    {
        tpid = value;
        tpid.value_namespace = name_space;
        tpid.value_namespace_prefix = name_space_prefix;
    }
}

void Vlans::Vlan::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "tpid")
    {
        tpid.yfilter = yfilter;
    }
}

bool Vlans::Vlan::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "name" || name == "status" || name == "tpid")
        return true;
    return false;
}

Vlans::Vlan::Members::Members()
    :
    member(this, {})
{

    yang_name = "members"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlans::Vlan::Members::~Members()
{
}

bool Vlans::Vlan::Members::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool Vlans::Vlan::Members::has_operation() const
{
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vlans::Vlan::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::Vlan::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::Vlan::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        auto ent_ = std::make_shared<Vlans::Vlan::Members::Member>();
        ent_->parent = this;
        member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::Vlan::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vlans::Vlan::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlans::Vlan::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlans::Vlan::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

Vlans::Vlan::Members::Member::Member()
    :
    interface_ref(std::make_shared<Vlans::Vlan::Members::Member::InterfaceRef>())
{
    interface_ref->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlans::Vlan::Members::Member::~Member()
{
}

bool Vlans::Vlan::Members::Member::has_data() const
{
    if (is_presence_container) return true;
    return (interface_ref !=  nullptr && interface_ref->has_data());
}

bool Vlans::Vlan::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string Vlans::Vlan::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::Vlan::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::Vlan::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Vlans::Vlan::Members::Member::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::Vlan::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void Vlans::Vlan::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlans::Vlan::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlans::Vlan::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-ref")
        return true;
    return false;
}

Vlans::Vlan::Members::Member::InterfaceRef::InterfaceRef()
    :
    state(std::make_shared<Vlans::Vlan::Members::Member::InterfaceRef::State>())
{
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlans::Vlan::Members::Member::InterfaceRef::~InterfaceRef()
{
}

bool Vlans::Vlan::Members::Member::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool Vlans::Vlan::Members::Member::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Vlans::Vlan::Members::Member::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::Vlan::Members::Member::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::Vlan::Members::Member::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Vlans::Vlan::Members::Member::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::Vlan::Members::Member::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Vlans::Vlan::Members::Member::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vlans::Vlan::Members::Member::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vlans::Vlan::Members::Member::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Vlans::Vlan::Members::Member::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Vlans::Vlan::Members::Member::InterfaceRef::State::~State()
{
}

bool Vlans::Vlan::Members::Member::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Vlans::Vlan::Members::Member::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Vlans::Vlan::Members::Member::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vlans::Vlan::Members::Member::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vlans::Vlan::Members::Member::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vlans::Vlan::Members::Member::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vlans::Vlan::Members::Member::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void Vlans::Vlan::Members::Member::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool Vlans::Vlan::Members::Member::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

const Enum::YLeaf Vlans::Vlan::Config::Status::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf Vlans::Vlan::Config::Status::SUSPENDED {1, "SUSPENDED"};

const Enum::YLeaf Vlans::Vlan::State::Status::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf Vlans::Vlan::State::Status::SUSPENDED {1, "SUSPENDED"};


}
}


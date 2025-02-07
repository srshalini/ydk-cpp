
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ha_eem_policy_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ha_eem_policy_oper {

Eem::Eem()
    :
    dir_user(std::make_shared<Eem::DirUser>())
    , env_variables(std::make_shared<Eem::EnvVariables>())
    , refresh_time(std::make_shared<Eem::RefreshTime>())
    , reg_policies(std::make_shared<Eem::RegPolicies>())
    , avl_policies(std::make_shared<Eem::AvlPolicies>())
{
    dir_user->parent = this;
    env_variables->parent = this;
    refresh_time->parent = this;
    reg_policies->parent = this;
    avl_policies->parent = this;

    yang_name = "eem"; yang_parent_name = "Cisco-IOS-XR-ha-eem-policy-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Eem::~Eem()
{
}

bool Eem::has_data() const
{
    if (is_presence_container) return true;
    return (dir_user !=  nullptr && dir_user->has_data())
	|| (env_variables !=  nullptr && env_variables->has_data())
	|| (refresh_time !=  nullptr && refresh_time->has_data())
	|| (reg_policies !=  nullptr && reg_policies->has_data())
	|| (avl_policies !=  nullptr && avl_policies->has_data());
}

bool Eem::has_operation() const
{
    return is_set(yfilter)
	|| (dir_user !=  nullptr && dir_user->has_operation())
	|| (env_variables !=  nullptr && env_variables->has_operation())
	|| (refresh_time !=  nullptr && refresh_time->has_operation())
	|| (reg_policies !=  nullptr && reg_policies->has_operation())
	|| (avl_policies !=  nullptr && avl_policies->has_operation());
}

std::string Eem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dir-user")
    {
        if(dir_user == nullptr)
        {
            dir_user = std::make_shared<Eem::DirUser>();
        }
        return dir_user;
    }

    if(child_yang_name == "env-variables")
    {
        if(env_variables == nullptr)
        {
            env_variables = std::make_shared<Eem::EnvVariables>();
        }
        return env_variables;
    }

    if(child_yang_name == "refresh-time")
    {
        if(refresh_time == nullptr)
        {
            refresh_time = std::make_shared<Eem::RefreshTime>();
        }
        return refresh_time;
    }

    if(child_yang_name == "reg-policies")
    {
        if(reg_policies == nullptr)
        {
            reg_policies = std::make_shared<Eem::RegPolicies>();
        }
        return reg_policies;
    }

    if(child_yang_name == "avl-policies")
    {
        if(avl_policies == nullptr)
        {
            avl_policies = std::make_shared<Eem::AvlPolicies>();
        }
        return avl_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dir_user != nullptr)
    {
        _children["dir-user"] = dir_user;
    }

    if(env_variables != nullptr)
    {
        _children["env-variables"] = env_variables;
    }

    if(refresh_time != nullptr)
    {
        _children["refresh-time"] = refresh_time;
    }

    if(reg_policies != nullptr)
    {
        _children["reg-policies"] = reg_policies;
    }

    if(avl_policies != nullptr)
    {
        _children["avl-policies"] = avl_policies;
    }

    return _children;
}

void Eem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Eem::clone_ptr() const
{
    return std::make_shared<Eem>();
}

std::string Eem::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Eem::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Eem::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Eem::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Eem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir-user" || name == "env-variables" || name == "refresh-time" || name == "reg-policies" || name == "avl-policies")
        return true;
    return false;
}

Eem::DirUser::DirUser()
    :
    library(std::make_shared<Eem::DirUser::Library>())
    , policy(std::make_shared<Eem::DirUser::Policy>())
{
    library->parent = this;
    policy->parent = this;

    yang_name = "dir-user"; yang_parent_name = "eem"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::DirUser::~DirUser()
{
}

bool Eem::DirUser::has_data() const
{
    if (is_presence_container) return true;
    return (library !=  nullptr && library->has_data())
	|| (policy !=  nullptr && policy->has_data());
}

bool Eem::DirUser::has_operation() const
{
    return is_set(yfilter)
	|| (library !=  nullptr && library->has_operation())
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Eem::DirUser::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::DirUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dir-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::DirUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::DirUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "library")
    {
        if(library == nullptr)
        {
            library = std::make_shared<Eem::DirUser::Library>();
        }
        return library;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Eem::DirUser::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::DirUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(library != nullptr)
    {
        _children["library"] = library;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    return _children;
}

void Eem::DirUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eem::DirUser::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eem::DirUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "library" || name == "policy")
        return true;
    return false;
}

Eem::DirUser::Library::Library()
    :
    policy{YType::str, "policy"},
    library{YType::str, "library"}
{

    yang_name = "library"; yang_parent_name = "dir-user"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::DirUser::Library::~Library()
{
}

bool Eem::DirUser::Library::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set
	|| library.is_set;
}

bool Eem::DirUser::Library::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(library.yfilter);
}

std::string Eem::DirUser::Library::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/dir-user/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::DirUser::Library::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "library";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::DirUser::Library::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (library.is_set || is_set(library.yfilter)) leaf_name_data.push_back(library.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::DirUser::Library::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::DirUser::Library::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eem::DirUser::Library::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "library")
    {
        library = value;
        library.value_namespace = name_space;
        library.value_namespace_prefix = name_space_prefix;
    }
}

void Eem::DirUser::Library::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "library")
    {
        library.yfilter = yfilter;
    }
}

bool Eem::DirUser::Library::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "library")
        return true;
    return false;
}

Eem::DirUser::Policy::Policy()
    :
    policy{YType::str, "policy"},
    library{YType::str, "library"}
{

    yang_name = "policy"; yang_parent_name = "dir-user"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::DirUser::Policy::~Policy()
{
}

bool Eem::DirUser::Policy::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set
	|| library.is_set;
}

bool Eem::DirUser::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(library.yfilter);
}

std::string Eem::DirUser::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/dir-user/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::DirUser::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::DirUser::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (library.is_set || is_set(library.yfilter)) leaf_name_data.push_back(library.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::DirUser::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::DirUser::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eem::DirUser::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "library")
    {
        library = value;
        library.value_namespace = name_space;
        library.value_namespace_prefix = name_space_prefix;
    }
}

void Eem::DirUser::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "library")
    {
        library.yfilter = yfilter;
    }
}

bool Eem::DirUser::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "library")
        return true;
    return false;
}

Eem::EnvVariables::EnvVariables()
    :
    env_variable(this, {"name"})
{

    yang_name = "env-variables"; yang_parent_name = "eem"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::EnvVariables::~EnvVariables()
{
}

bool Eem::EnvVariables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<env_variable.len(); index++)
    {
        if(env_variable[index]->has_data())
            return true;
    }
    return false;
}

bool Eem::EnvVariables::has_operation() const
{
    for (std::size_t index=0; index<env_variable.len(); index++)
    {
        if(env_variable[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eem::EnvVariables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::EnvVariables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-variables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::EnvVariables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::EnvVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-variable")
    {
        auto ent_ = std::make_shared<Eem::EnvVariables::EnvVariable>();
        ent_->parent = this;
        env_variable.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::EnvVariables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : env_variable.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eem::EnvVariables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eem::EnvVariables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eem::EnvVariables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "env-variable")
        return true;
    return false;
}

Eem::EnvVariables::EnvVariable::EnvVariable()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"},
    value_{YType::str, "value"}
{

    yang_name = "env-variable"; yang_parent_name = "env-variables"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::EnvVariables::EnvVariable::~EnvVariable()
{
}

bool Eem::EnvVariables::EnvVariable::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| name_xr.is_set
	|| value_.is_set;
}

bool Eem::EnvVariables::EnvVariable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(name_xr.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Eem::EnvVariables::EnvVariable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/env-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::EnvVariables::EnvVariable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-variable";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::EnvVariables::EnvVariable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.yfilter)) leaf_name_data.push_back(name_xr.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::EnvVariables::EnvVariable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::EnvVariables::EnvVariable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eem::EnvVariables::EnvVariable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
        name_xr.value_namespace = name_space;
        name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Eem::EnvVariables::EnvVariable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "name-xr")
    {
        name_xr.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Eem::EnvVariables::EnvVariable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "name-xr" || name == "value")
        return true;
    return false;
}

Eem::RefreshTime::RefreshTime()
    :
    refreshtime{YType::uint32, "refreshtime"}
{

    yang_name = "refresh-time"; yang_parent_name = "eem"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::RefreshTime::~RefreshTime()
{
}

bool Eem::RefreshTime::has_data() const
{
    if (is_presence_container) return true;
    return refreshtime.is_set;
}

bool Eem::RefreshTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refreshtime.yfilter);
}

std::string Eem::RefreshTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::RefreshTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::RefreshTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refreshtime.is_set || is_set(refreshtime.yfilter)) leaf_name_data.push_back(refreshtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::RefreshTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::RefreshTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eem::RefreshTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refreshtime")
    {
        refreshtime = value;
        refreshtime.value_namespace = name_space;
        refreshtime.value_namespace_prefix = name_space_prefix;
    }
}

void Eem::RefreshTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refreshtime")
    {
        refreshtime.yfilter = yfilter;
    }
}

bool Eem::RefreshTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refreshtime")
        return true;
    return false;
}

Eem::RegPolicies::RegPolicies()
    :
    reg_policy(this, {"name"})
{

    yang_name = "reg-policies"; yang_parent_name = "eem"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::RegPolicies::~RegPolicies()
{
}

bool Eem::RegPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reg_policy.len(); index++)
    {
        if(reg_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eem::RegPolicies::has_operation() const
{
    for (std::size_t index=0; index<reg_policy.len(); index++)
    {
        if(reg_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eem::RegPolicies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::RegPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::RegPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::RegPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-policy")
    {
        auto ent_ = std::make_shared<Eem::RegPolicies::RegPolicy>();
        ent_->parent = this;
        reg_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::RegPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reg_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eem::RegPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eem::RegPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eem::RegPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg-policy")
        return true;
    return false;
}

Eem::RegPolicies::RegPolicy::RegPolicy()
    :
    name{YType::str, "name"},
    type{YType::str, "type"},
    time_created{YType::str, "time-created"},
    policy_name{YType::str, "policy-name"},
    class_{YType::str, "class"},
    event_type{YType::str, "event-type"},
    trap{YType::str, "trap"},
    persist_time{YType::uint32, "persist-time"},
    username{YType::str, "username"},
    description{YType::str, "description"}
{

    yang_name = "reg-policy"; yang_parent_name = "reg-policies"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::RegPolicies::RegPolicy::~RegPolicy()
{
}

bool Eem::RegPolicies::RegPolicy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| time_created.is_set
	|| policy_name.is_set
	|| class_.is_set
	|| event_type.is_set
	|| trap.is_set
	|| persist_time.is_set
	|| username.is_set
	|| description.is_set;
}

bool Eem::RegPolicies::RegPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(time_created.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(trap.yfilter)
	|| ydk::is_set(persist_time.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Eem::RegPolicies::RegPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/reg-policies/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::RegPolicies::RegPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::RegPolicies::RegPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.yfilter)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());
    if (persist_time.is_set || is_set(persist_time.yfilter)) leaf_name_data.push_back(persist_time.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::RegPolicies::RegPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::RegPolicies::RegPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eem::RegPolicies::RegPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-created")
    {
        time_created = value;
        time_created.value_namespace = name_space;
        time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist-time")
    {
        persist_time = value;
        persist_time.value_namespace = name_space;
        persist_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Eem::RegPolicies::RegPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "time-created")
    {
        time_created.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
    if(value_path == "persist-time")
    {
        persist_time.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Eem::RegPolicies::RegPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "time-created" || name == "policy-name" || name == "class" || name == "event-type" || name == "trap" || name == "persist-time" || name == "username" || name == "description")
        return true;
    return false;
}

Eem::AvlPolicies::AvlPolicies()
    :
    avl_policy(this, {"name"})
{

    yang_name = "avl-policies"; yang_parent_name = "eem"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::AvlPolicies::~AvlPolicies()
{
}

bool Eem::AvlPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<avl_policy.len(); index++)
    {
        if(avl_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eem::AvlPolicies::has_operation() const
{
    for (std::size_t index=0; index<avl_policy.len(); index++)
    {
        if(avl_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eem::AvlPolicies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::AvlPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avl-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::AvlPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::AvlPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avl-policy")
    {
        auto ent_ = std::make_shared<Eem::AvlPolicies::AvlPolicy>();
        ent_->parent = this;
        avl_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::AvlPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : avl_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eem::AvlPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eem::AvlPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eem::AvlPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avl-policy")
        return true;
    return false;
}

Eem::AvlPolicies::AvlPolicy::AvlPolicy()
    :
    name{YType::str, "name"},
    type{YType::str, "type"},
    time_created{YType::str, "time-created"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "avl-policy"; yang_parent_name = "avl-policies"; is_top_level_class = false; has_list_ancestor = false; 
}

Eem::AvlPolicies::AvlPolicy::~AvlPolicy()
{
}

bool Eem::AvlPolicies::AvlPolicy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| time_created.is_set
	|| policy_name.is_set;
}

bool Eem::AvlPolicies::AvlPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(time_created.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Eem::AvlPolicies::AvlPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/avl-policies/" << get_segment_path();
    return path_buffer.str();
}

std::string Eem::AvlPolicies::AvlPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avl-policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eem::AvlPolicies::AvlPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.yfilter)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eem::AvlPolicies::AvlPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eem::AvlPolicies::AvlPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eem::AvlPolicies::AvlPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-created")
    {
        time_created = value;
        time_created.value_namespace = name_space;
        time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Eem::AvlPolicies::AvlPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "time-created")
    {
        time_created.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Eem::AvlPolicies::AvlPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "time-created" || name == "policy-name")
        return true;
    return false;
}


}
}


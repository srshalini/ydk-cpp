
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_2.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Bgp()
    :
    instance(this, {"instance_name"})
{

    yang_name = "bgp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Bgp::~Bgp()
{
}

bool Bgp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Bgp::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::get_children() const
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

void Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Bgp::clone_ptr() const
{
    return std::make_shared<Bgp>();
}

std::string Bgp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Bgp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Bgp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Bgp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Bgp::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    instance_as(this, {"as"})
{

    yang_name = "instance"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

Bgp::Instance::~Instance()
{
}

bool Bgp::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_as.len(); index++)
    {
        if(instance_as[index]->has_data())
            return true;
    }
    return instance_name.is_set;
}

bool Bgp::Instance::has_operation() const
{
    for (std::size_t index=0; index<instance_as.len(); index++)
    {
        if(instance_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string Bgp::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-as")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs>();
        ent_->parent = this;
        instance_as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-as" || name == "instance-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::InstanceAs()
    :
    as{YType::uint32, "as"}
        ,
    four_byte_as(this, {"as"})
{

    yang_name = "instance-as"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::~InstanceAs()
{
}

bool Bgp::Instance::InstanceAs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<four_byte_as.len(); index++)
    {
        if(four_byte_as[index]->has_data())
            return true;
    }
    return as.is_set;
}

bool Bgp::Instance::InstanceAs::has_operation() const
{
    for (std::size_t index=0; index<four_byte_as.len(); index++)
    {
        if(four_byte_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter);
}

std::string Bgp::Instance::InstanceAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-as";
    ADD_KEY_TOKEN(as, "as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "four-byte-as")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs>();
        ent_->parent = this;
        four_byte_as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : four_byte_as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::FourByteAs()
    :
    as{YType::uint32, "as"},
    bgp_running{YType::empty, "bgp-running"}
        ,
    vrfs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs>())
    , default_vrf(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf>())
{
    vrfs->parent = this;
    default_vrf->parent = this;

    yang_name = "four-byte-as"; yang_parent_name = "instance-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::~FourByteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| bgp_running.is_set
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(bgp_running.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    ADD_KEY_TOKEN(as, "as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (bgp_running.is_set || is_set(bgp_running.yfilter)) leaf_name_data.push_back(bgp_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-running")
    {
        bgp_running = value;
        bgp_running.value_namespace = name_space;
        bgp_running.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "bgp-running")
    {
        bgp_running.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "default-vrf" || name == "as" || name == "bgp-running")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "four-byte-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::~Vrfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    vrf_global(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal>())
    , vrf_neighbors(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors>())
{
    vrf_global->parent = this;
    vrf_neighbors->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::~Vrf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (vrf_global !=  nullptr && vrf_global->has_data())
	|| (vrf_neighbors !=  nullptr && vrf_neighbors->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (vrf_global !=  nullptr && vrf_global->has_operation())
	|| (vrf_neighbors !=  nullptr && vrf_neighbors->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-global")
    {
        if(vrf_global == nullptr)
        {
            vrf_global = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal>();
        }
        return vrf_global;
    }

    if(child_yang_name == "vrf-neighbors")
    {
        if(vrf_neighbors == nullptr)
        {
            vrf_neighbors = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors>();
        }
        return vrf_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_global != nullptr)
    {
        _children["vrf-global"] = vrf_global;
    }

    if(vrf_neighbors != nullptr)
    {
        _children["vrf-neighbors"] = vrf_neighbors;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-global" || name == "vrf-neighbors" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobal()
    :
    exists{YType::empty, "exists"},
    router_id{YType::str, "router-id"},
    disable_enforce_first_as{YType::empty, "disable-enforce-first-as"},
    best_path_cost_community{YType::empty, "best-path-cost-community"},
    best_path_aigp_ignore{YType::empty, "best-path-aigp-ignore"},
    best_path_as_path_length{YType::empty, "best-path-as-path-length"},
    igp_redist_internal{YType::empty, "igp-redist-internal"},
    multi_path_as_path_ignore_onwards{YType::empty, "multi-path-as-path-ignore-onwards"},
    disable_fast_external_fallover{YType::empty, "disable-fast-external-fallover"},
    unsafe_ebgp_policy{YType::empty, "unsafe-ebgp-policy"},
    default_metric{YType::uint32, "default-metric"},
    default_info_originate{YType::empty, "default-info-originate"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    best_path_confederation_paths{YType::empty, "best-path-confederation-paths"},
    best_path_as_multipath_relax{YType::empty, "best-path-as-multipath-relax"},
    disable_auto_soft_reset{YType::empty, "disable-auto-soft-reset"},
    disable_msg_log{YType::empty, "disable-msg-log"},
    best_path_igp_metric_ignore{YType::empty, "best-path-igp-metric-ignore"},
    next_hop_res_allow_default{YType::empty, "next-hop-res-allow-default"},
    next_hop_mpls_fwd_ibgp{YType::empty, "next-hop-mpls-fwd-ibgp"},
    disable_neighbor_logging{YType::empty, "disable-neighbor-logging"},
    best_path_med_always{YType::empty, "best-path-med-always"},
    best_path_router_id{YType::empty, "best-path-router-id"},
    best_path_med_missing{YType::empty, "best-path-med-missing"},
    local_preference{YType::uint32, "local-preference"}
        ,
    route_distinguisher(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher>())
    , vrf_global_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs>())
    , mpls_activated_interfaces(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces>())
    , global_timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers>())
    , bfd(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd>())
    , send_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes>())
    , receive_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes>())
{
    route_distinguisher->parent = this;
    vrf_global_afs->parent = this;
    mpls_activated_interfaces->parent = this;
    global_timers->parent = this;
    bfd->parent = this;
    send_socket_buffer_sizes->parent = this;
    receive_socket_buffer_sizes->parent = this;

    yang_name = "vrf-global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::~VrfGlobal()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_data() const
{
    if (is_presence_container) return true;
    return exists.is_set
	|| router_id.is_set
	|| disable_enforce_first_as.is_set
	|| best_path_cost_community.is_set
	|| best_path_aigp_ignore.is_set
	|| best_path_as_path_length.is_set
	|| igp_redist_internal.is_set
	|| multi_path_as_path_ignore_onwards.is_set
	|| disable_fast_external_fallover.is_set
	|| unsafe_ebgp_policy.is_set
	|| default_metric.is_set
	|| default_info_originate.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| best_path_confederation_paths.is_set
	|| best_path_as_multipath_relax.is_set
	|| disable_auto_soft_reset.is_set
	|| disable_msg_log.is_set
	|| best_path_igp_metric_ignore.is_set
	|| next_hop_res_allow_default.is_set
	|| next_hop_mpls_fwd_ibgp.is_set
	|| disable_neighbor_logging.is_set
	|| best_path_med_always.is_set
	|| best_path_router_id.is_set
	|| best_path_med_missing.is_set
	|| local_preference.is_set
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (vrf_global_afs !=  nullptr && vrf_global_afs->has_data())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_data())
	|| (global_timers !=  nullptr && global_timers->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_data())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exists.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(disable_enforce_first_as.yfilter)
	|| ydk::is_set(best_path_cost_community.yfilter)
	|| ydk::is_set(best_path_aigp_ignore.yfilter)
	|| ydk::is_set(best_path_as_path_length.yfilter)
	|| ydk::is_set(igp_redist_internal.yfilter)
	|| ydk::is_set(multi_path_as_path_ignore_onwards.yfilter)
	|| ydk::is_set(disable_fast_external_fallover.yfilter)
	|| ydk::is_set(unsafe_ebgp_policy.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(rpki_origin_as_validity_signal_ibgp.yfilter)
	|| ydk::is_set(rpki_bestpath_use_origin_as_validity.yfilter)
	|| ydk::is_set(best_path_confederation_paths.yfilter)
	|| ydk::is_set(best_path_as_multipath_relax.yfilter)
	|| ydk::is_set(disable_auto_soft_reset.yfilter)
	|| ydk::is_set(disable_msg_log.yfilter)
	|| ydk::is_set(best_path_igp_metric_ignore.yfilter)
	|| ydk::is_set(next_hop_res_allow_default.yfilter)
	|| ydk::is_set(next_hop_mpls_fwd_ibgp.yfilter)
	|| ydk::is_set(disable_neighbor_logging.yfilter)
	|| ydk::is_set(best_path_med_always.yfilter)
	|| ydk::is_set(best_path_router_id.yfilter)
	|| ydk::is_set(best_path_med_missing.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (vrf_global_afs !=  nullptr && vrf_global_afs->has_operation())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_operation())
	|| (global_timers !=  nullptr && global_timers->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_operation())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exists.is_set || is_set(exists.yfilter)) leaf_name_data.push_back(exists.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (disable_enforce_first_as.is_set || is_set(disable_enforce_first_as.yfilter)) leaf_name_data.push_back(disable_enforce_first_as.get_name_leafdata());
    if (best_path_cost_community.is_set || is_set(best_path_cost_community.yfilter)) leaf_name_data.push_back(best_path_cost_community.get_name_leafdata());
    if (best_path_aigp_ignore.is_set || is_set(best_path_aigp_ignore.yfilter)) leaf_name_data.push_back(best_path_aigp_ignore.get_name_leafdata());
    if (best_path_as_path_length.is_set || is_set(best_path_as_path_length.yfilter)) leaf_name_data.push_back(best_path_as_path_length.get_name_leafdata());
    if (igp_redist_internal.is_set || is_set(igp_redist_internal.yfilter)) leaf_name_data.push_back(igp_redist_internal.get_name_leafdata());
    if (multi_path_as_path_ignore_onwards.is_set || is_set(multi_path_as_path_ignore_onwards.yfilter)) leaf_name_data.push_back(multi_path_as_path_ignore_onwards.get_name_leafdata());
    if (disable_fast_external_fallover.is_set || is_set(disable_fast_external_fallover.yfilter)) leaf_name_data.push_back(disable_fast_external_fallover.get_name_leafdata());
    if (unsafe_ebgp_policy.is_set || is_set(unsafe_ebgp_policy.yfilter)) leaf_name_data.push_back(unsafe_ebgp_policy.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.yfilter)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (best_path_confederation_paths.is_set || is_set(best_path_confederation_paths.yfilter)) leaf_name_data.push_back(best_path_confederation_paths.get_name_leafdata());
    if (best_path_as_multipath_relax.is_set || is_set(best_path_as_multipath_relax.yfilter)) leaf_name_data.push_back(best_path_as_multipath_relax.get_name_leafdata());
    if (disable_auto_soft_reset.is_set || is_set(disable_auto_soft_reset.yfilter)) leaf_name_data.push_back(disable_auto_soft_reset.get_name_leafdata());
    if (disable_msg_log.is_set || is_set(disable_msg_log.yfilter)) leaf_name_data.push_back(disable_msg_log.get_name_leafdata());
    if (best_path_igp_metric_ignore.is_set || is_set(best_path_igp_metric_ignore.yfilter)) leaf_name_data.push_back(best_path_igp_metric_ignore.get_name_leafdata());
    if (next_hop_res_allow_default.is_set || is_set(next_hop_res_allow_default.yfilter)) leaf_name_data.push_back(next_hop_res_allow_default.get_name_leafdata());
    if (next_hop_mpls_fwd_ibgp.is_set || is_set(next_hop_mpls_fwd_ibgp.yfilter)) leaf_name_data.push_back(next_hop_mpls_fwd_ibgp.get_name_leafdata());
    if (disable_neighbor_logging.is_set || is_set(disable_neighbor_logging.yfilter)) leaf_name_data.push_back(disable_neighbor_logging.get_name_leafdata());
    if (best_path_med_always.is_set || is_set(best_path_med_always.yfilter)) leaf_name_data.push_back(best_path_med_always.get_name_leafdata());
    if (best_path_router_id.is_set || is_set(best_path_router_id.yfilter)) leaf_name_data.push_back(best_path_router_id.get_name_leafdata());
    if (best_path_med_missing.is_set || is_set(best_path_med_missing.yfilter)) leaf_name_data.push_back(best_path_med_missing.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher == nullptr)
        {
            route_distinguisher = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher>();
        }
        return route_distinguisher;
    }

    if(child_yang_name == "vrf-global-afs")
    {
        if(vrf_global_afs == nullptr)
        {
            vrf_global_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs>();
        }
        return vrf_global_afs;
    }

    if(child_yang_name == "mpls-activated-interfaces")
    {
        if(mpls_activated_interfaces == nullptr)
        {
            mpls_activated_interfaces = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces>();
        }
        return mpls_activated_interfaces;
    }

    if(child_yang_name == "global-timers")
    {
        if(global_timers == nullptr)
        {
            global_timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers>();
        }
        return global_timers;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "send-socket-buffer-sizes")
    {
        if(send_socket_buffer_sizes == nullptr)
        {
            send_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes>();
        }
        return send_socket_buffer_sizes;
    }

    if(child_yang_name == "receive-socket-buffer-sizes")
    {
        if(receive_socket_buffer_sizes == nullptr)
        {
            receive_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes>();
        }
        return receive_socket_buffer_sizes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_distinguisher != nullptr)
    {
        _children["route-distinguisher"] = route_distinguisher;
    }

    if(vrf_global_afs != nullptr)
    {
        _children["vrf-global-afs"] = vrf_global_afs;
    }

    if(mpls_activated_interfaces != nullptr)
    {
        _children["mpls-activated-interfaces"] = mpls_activated_interfaces;
    }

    if(global_timers != nullptr)
    {
        _children["global-timers"] = global_timers;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(send_socket_buffer_sizes != nullptr)
    {
        _children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
    }

    if(receive_socket_buffer_sizes != nullptr)
    {
        _children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exists")
    {
        exists = value;
        exists.value_namespace = name_space;
        exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as = value;
        disable_enforce_first_as.value_namespace = name_space;
        disable_enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community = value;
        best_path_cost_community.value_namespace = name_space;
        best_path_cost_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore = value;
        best_path_aigp_ignore.value_namespace = name_space;
        best_path_aigp_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length = value;
        best_path_as_path_length.value_namespace = name_space;
        best_path_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal = value;
        igp_redist_internal.value_namespace = name_space;
        igp_redist_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards = value;
        multi_path_as_path_ignore_onwards.value_namespace = name_space;
        multi_path_as_path_ignore_onwards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover = value;
        disable_fast_external_fallover.value_namespace = name_space;
        disable_fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsafe-ebgp-policy")
    {
        unsafe_ebgp_policy = value;
        unsafe_ebgp_policy.value_namespace = name_space;
        unsafe_ebgp_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
        rpki_origin_as_validity_signal_ibgp.value_namespace = name_space;
        rpki_origin_as_validity_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
        rpki_bestpath_use_origin_as_validity.value_namespace = name_space;
        rpki_bestpath_use_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths = value;
        best_path_confederation_paths.value_namespace = name_space;
        best_path_confederation_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax = value;
        best_path_as_multipath_relax.value_namespace = name_space;
        best_path_as_multipath_relax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset = value;
        disable_auto_soft_reset.value_namespace = name_space;
        disable_auto_soft_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log = value;
        disable_msg_log.value_namespace = name_space;
        disable_msg_log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-igp-metric-ignore")
    {
        best_path_igp_metric_ignore = value;
        best_path_igp_metric_ignore.value_namespace = name_space;
        best_path_igp_metric_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-res-allow-default")
    {
        next_hop_res_allow_default = value;
        next_hop_res_allow_default.value_namespace = name_space;
        next_hop_res_allow_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-mpls-fwd-ibgp")
    {
        next_hop_mpls_fwd_ibgp = value;
        next_hop_mpls_fwd_ibgp.value_namespace = name_space;
        next_hop_mpls_fwd_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging = value;
        disable_neighbor_logging.value_namespace = name_space;
        disable_neighbor_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always = value;
        best_path_med_always.value_namespace = name_space;
        best_path_med_always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id = value;
        best_path_router_id.value_namespace = name_space;
        best_path_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing = value;
        best_path_med_missing.value_namespace = name_space;
        best_path_med_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exists")
    {
        exists.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community.yfilter = yfilter;
    }
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore.yfilter = yfilter;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length.yfilter = yfilter;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal.yfilter = yfilter;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards.yfilter = yfilter;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "unsafe-ebgp-policy")
    {
        unsafe_ebgp_policy.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths.yfilter = yfilter;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax.yfilter = yfilter;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset.yfilter = yfilter;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log.yfilter = yfilter;
    }
    if(value_path == "best-path-igp-metric-ignore")
    {
        best_path_igp_metric_ignore.yfilter = yfilter;
    }
    if(value_path == "next-hop-res-allow-default")
    {
        next_hop_res_allow_default.yfilter = yfilter;
    }
    if(value_path == "next-hop-mpls-fwd-ibgp")
    {
        next_hop_mpls_fwd_ibgp.yfilter = yfilter;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging.yfilter = yfilter;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always.yfilter = yfilter;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id.yfilter = yfilter;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-distinguisher" || name == "vrf-global-afs" || name == "mpls-activated-interfaces" || name == "global-timers" || name == "bfd" || name == "send-socket-buffer-sizes" || name == "receive-socket-buffer-sizes" || name == "exists" || name == "router-id" || name == "disable-enforce-first-as" || name == "best-path-cost-community" || name == "best-path-aigp-ignore" || name == "best-path-as-path-length" || name == "igp-redist-internal" || name == "multi-path-as-path-ignore-onwards" || name == "disable-fast-external-fallover" || name == "unsafe-ebgp-policy" || name == "default-metric" || name == "default-info-originate" || name == "rpki-origin-as-validity-signal-ibgp" || name == "rpki-bestpath-use-origin-as-validity" || name == "best-path-confederation-paths" || name == "best-path-as-multipath-relax" || name == "disable-auto-soft-reset" || name == "disable-msg-log" || name == "best-path-igp-metric-ignore" || name == "next-hop-res-allow-default" || name == "next-hop-mpls-fwd-ibgp" || name == "disable-neighbor-logging" || name == "best-path-med-always" || name == "best-path-router-id" || name == "best-path-med-missing" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::RouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as_xx{YType::uint32, "as-xx"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"}
{

    yang_name = "route-distinguisher"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::~RouteDistinguisher()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as_xx.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| address_index.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as-xx" || name == "as" || name == "as-index" || name == "address" || name == "address-index")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAfs()
    :
    vrf_global_af(this, {"af_name"})
{

    yang_name = "vrf-global-afs"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::~VrfGlobalAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_global_af.len(); index++)
    {
        if(vrf_global_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_global_af.len(); index++)
    {
        if(vrf_global_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-global-af")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf>();
        ent_->parent = this;
        vrf_global_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_global_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-global-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::VrfGlobalAf()
    :
    af_name{YType::enumeration, "af-name"},
    rt_download{YType::empty, "rt-download"},
    allow_vpn_default_originate{YType::boolean, "allow-vpn-default-originate"},
    rpki_origin_as_validation_enable{YType::empty, "rpki-origin-as-validation-enable"},
    dynamic_med_interval{YType::uint32, "dynamic-med-interval"},
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"},
    attribute_download{YType::empty, "attribute-download"},
    best_external{YType::boolean, "best-external"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    additional_paths_receive{YType::enumeration, "additional-paths-receive"},
    permanent_network{YType::str, "permanent-network"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    srv6_label_allocation_mode{YType::str, "srv6-label-allocation-mode"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    next_hop_resolution_prefix_length_minimum{YType::uint32, "next-hop-resolution-prefix-length-minimum"},
    reset_weight_on_import{YType::boolean, "reset-weight-on-import"},
    additional_paths_send{YType::enumeration, "additional-paths-send"},
    advertise_local_labeled_route_safi_unicast{YType::enumeration, "advertise-local-labeled-route-safi-unicast"},
    disable_as_path_loop_check{YType::empty, "disable-as-path-loop-check"}
        ,
    mvpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn>())
    , ebgp(nullptr) // presence node
    , eibgp(nullptr) // presence node
    , ibgp(nullptr) // presence node
    , aggregate_addresses(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses>())
    , optimal_route_reflector_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups>())
    , dampening(nullptr) // presence node
    , rip_routes(nullptr) // presence node
    , lisp_routes(nullptr) // presence node
    , static_routes(nullptr) // presence node
    , distance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance>())
    , application_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes>())
    , label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode>())
    , eigrp_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes>())
    , sourced_networks(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks>())
    , connected_routes(nullptr) // presence node
    , allocate_label(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel>())
    , additional_paths_selection(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection>())
    , ospf_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes>())
    , mobile_routes(nullptr) // presence node
    , subscriber_routes(nullptr) // presence node
{
    mvpn->parent = this;
    aggregate_addresses->parent = this;
    optimal_route_reflector_groups->parent = this;
    distance->parent = this;
    application_routes->parent = this;
    label_mode->parent = this;
    eigrp_routes->parent = this;
    sourced_networks->parent = this;
    allocate_label->parent = this;
    additional_paths_selection->parent = this;
    ospf_routes->parent = this;

    yang_name = "vrf-global-af"; yang_parent_name = "vrf-global-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::~VrfGlobalAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| rt_download.is_set
	|| allow_vpn_default_originate.is_set
	|| rpki_origin_as_validation_enable.is_set
	|| dynamic_med_interval.is_set
	|| enable.is_set
	|| table_policy.is_set
	|| attribute_download.is_set
	|| best_external.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| additional_paths_receive.is_set
	|| permanent_network.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| srv6_label_allocation_mode.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| next_hop_resolution_prefix_length_minimum.is_set
	|| reset_weight_on_import.is_set
	|| additional_paths_send.is_set
	|| advertise_local_labeled_route_safi_unicast.is_set
	|| disable_as_path_loop_check.is_set
	|| (mvpn !=  nullptr && mvpn->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (eibgp !=  nullptr && eibgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_data())
	|| (optimal_route_reflector_groups !=  nullptr && optimal_route_reflector_groups->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (rip_routes !=  nullptr && rip_routes->has_data())
	|| (lisp_routes !=  nullptr && lisp_routes->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (application_routes !=  nullptr && application_routes->has_data())
	|| (label_mode !=  nullptr && label_mode->has_data())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (allocate_label !=  nullptr && allocate_label->has_data())
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_data())
	|| (ospf_routes !=  nullptr && ospf_routes->has_data())
	|| (mobile_routes !=  nullptr && mobile_routes->has_data())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_download.yfilter)
	|| ydk::is_set(allow_vpn_default_originate.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_enable.yfilter)
	|| ydk::is_set(dynamic_med_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| ydk::is_set(attribute_download.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(rpki_origin_as_validity_signal_ibgp.yfilter)
	|| ydk::is_set(additional_paths_receive.yfilter)
	|| ydk::is_set(permanent_network.yfilter)
	|| ydk::is_set(rpki_bestpath_use_origin_as_validity.yfilter)
	|| ydk::is_set(srv6_label_allocation_mode.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(next_hop_resolution_prefix_length_minimum.yfilter)
	|| ydk::is_set(reset_weight_on_import.yfilter)
	|| ydk::is_set(additional_paths_send.yfilter)
	|| ydk::is_set(advertise_local_labeled_route_safi_unicast.yfilter)
	|| ydk::is_set(disable_as_path_loop_check.yfilter)
	|| (mvpn !=  nullptr && mvpn->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_operation())
	|| (optimal_route_reflector_groups !=  nullptr && optimal_route_reflector_groups->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (rip_routes !=  nullptr && rip_routes->has_operation())
	|| (lisp_routes !=  nullptr && lisp_routes->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (application_routes !=  nullptr && application_routes->has_operation())
	|| (label_mode !=  nullptr && label_mode->has_operation())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (allocate_label !=  nullptr && allocate_label->has_operation())
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_operation())
	|| (ospf_routes !=  nullptr && ospf_routes->has_operation())
	|| (mobile_routes !=  nullptr && mobile_routes->has_operation())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global-af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_download.is_set || is_set(rt_download.yfilter)) leaf_name_data.push_back(rt_download.get_name_leafdata());
    if (allow_vpn_default_originate.is_set || is_set(allow_vpn_default_originate.yfilter)) leaf_name_data.push_back(allow_vpn_default_originate.get_name_leafdata());
    if (rpki_origin_as_validation_enable.is_set || is_set(rpki_origin_as_validation_enable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_enable.get_name_leafdata());
    if (dynamic_med_interval.is_set || is_set(dynamic_med_interval.yfilter)) leaf_name_data.push_back(dynamic_med_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.yfilter)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (additional_paths_receive.is_set || is_set(additional_paths_receive.yfilter)) leaf_name_data.push_back(additional_paths_receive.get_name_leafdata());
    if (permanent_network.is_set || is_set(permanent_network.yfilter)) leaf_name_data.push_back(permanent_network.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.yfilter)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (srv6_label_allocation_mode.is_set || is_set(srv6_label_allocation_mode.yfilter)) leaf_name_data.push_back(srv6_label_allocation_mode.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (next_hop_resolution_prefix_length_minimum.is_set || is_set(next_hop_resolution_prefix_length_minimum.yfilter)) leaf_name_data.push_back(next_hop_resolution_prefix_length_minimum.get_name_leafdata());
    if (reset_weight_on_import.is_set || is_set(reset_weight_on_import.yfilter)) leaf_name_data.push_back(reset_weight_on_import.get_name_leafdata());
    if (additional_paths_send.is_set || is_set(additional_paths_send.yfilter)) leaf_name_data.push_back(additional_paths_send.get_name_leafdata());
    if (advertise_local_labeled_route_safi_unicast.is_set || is_set(advertise_local_labeled_route_safi_unicast.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route_safi_unicast.get_name_leafdata());
    if (disable_as_path_loop_check.is_set || is_set(disable_as_path_loop_check.yfilter)) leaf_name_data.push_back(disable_as_path_loop_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvpn")
    {
        if(mvpn == nullptr)
        {
            mvpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn>();
        }
        return mvpn;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "eibgp")
    {
        if(eibgp == nullptr)
        {
            eibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp>();
        }
        return eibgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "aggregate-addresses")
    {
        if(aggregate_addresses == nullptr)
        {
            aggregate_addresses = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses>();
        }
        return aggregate_addresses;
    }

    if(child_yang_name == "optimal-route-reflector-groups")
    {
        if(optimal_route_reflector_groups == nullptr)
        {
            optimal_route_reflector_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups>();
        }
        return optimal_route_reflector_groups;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "rip-routes")
    {
        if(rip_routes == nullptr)
        {
            rip_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes>();
        }
        return rip_routes;
    }

    if(child_yang_name == "lisp-routes")
    {
        if(lisp_routes == nullptr)
        {
            lisp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes>();
        }
        return lisp_routes;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes>();
        }
        return static_routes;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "application-routes")
    {
        if(application_routes == nullptr)
        {
            application_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes>();
        }
        return application_routes;
    }

    if(child_yang_name == "label-mode")
    {
        if(label_mode == nullptr)
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode>();
        }
        return label_mode;
    }

    if(child_yang_name == "eigrp-routes")
    {
        if(eigrp_routes == nullptr)
        {
            eigrp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes>();
        }
        return eigrp_routes;
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks == nullptr)
        {
            sourced_networks = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks>();
        }
        return sourced_networks;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "allocate-label")
    {
        if(allocate_label == nullptr)
        {
            allocate_label = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel>();
        }
        return allocate_label;
    }

    if(child_yang_name == "additional-paths-selection")
    {
        if(additional_paths_selection == nullptr)
        {
            additional_paths_selection = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection>();
        }
        return additional_paths_selection;
    }

    if(child_yang_name == "ospf-routes")
    {
        if(ospf_routes == nullptr)
        {
            ospf_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes>();
        }
        return ospf_routes;
    }

    if(child_yang_name == "mobile-routes")
    {
        if(mobile_routes == nullptr)
        {
            mobile_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes>();
        }
        return mobile_routes;
    }

    if(child_yang_name == "subscriber-routes")
    {
        if(subscriber_routes == nullptr)
        {
            subscriber_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes>();
        }
        return subscriber_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mvpn != nullptr)
    {
        _children["mvpn"] = mvpn;
    }

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    if(eibgp != nullptr)
    {
        _children["eibgp"] = eibgp;
    }

    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    if(aggregate_addresses != nullptr)
    {
        _children["aggregate-addresses"] = aggregate_addresses;
    }

    if(optimal_route_reflector_groups != nullptr)
    {
        _children["optimal-route-reflector-groups"] = optimal_route_reflector_groups;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(rip_routes != nullptr)
    {
        _children["rip-routes"] = rip_routes;
    }

    if(lisp_routes != nullptr)
    {
        _children["lisp-routes"] = lisp_routes;
    }

    if(static_routes != nullptr)
    {
        _children["static-routes"] = static_routes;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(application_routes != nullptr)
    {
        _children["application-routes"] = application_routes;
    }

    if(label_mode != nullptr)
    {
        _children["label-mode"] = label_mode;
    }

    if(eigrp_routes != nullptr)
    {
        _children["eigrp-routes"] = eigrp_routes;
    }

    if(sourced_networks != nullptr)
    {
        _children["sourced-networks"] = sourced_networks;
    }

    if(connected_routes != nullptr)
    {
        _children["connected-routes"] = connected_routes;
    }

    if(allocate_label != nullptr)
    {
        _children["allocate-label"] = allocate_label;
    }

    if(additional_paths_selection != nullptr)
    {
        _children["additional-paths-selection"] = additional_paths_selection;
    }

    if(ospf_routes != nullptr)
    {
        _children["ospf-routes"] = ospf_routes;
    }

    if(mobile_routes != nullptr)
    {
        _children["mobile-routes"] = mobile_routes;
    }

    if(subscriber_routes != nullptr)
    {
        _children["subscriber-routes"] = subscriber_routes;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-download")
    {
        rt_download = value;
        rt_download.value_namespace = name_space;
        rt_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-vpn-default-originate")
    {
        allow_vpn_default_originate = value;
        allow_vpn_default_originate.value_namespace = name_space;
        allow_vpn_default_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-enable")
    {
        rpki_origin_as_validation_enable = value;
        rpki_origin_as_validation_enable.value_namespace = name_space;
        rpki_origin_as_validation_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval = value;
        dynamic_med_interval.value_namespace = name_space;
        dynamic_med_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
        attribute_download.value_namespace = name_space;
        attribute_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
        rpki_origin_as_validity_signal_ibgp.value_namespace = name_space;
        rpki_origin_as_validity_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive = value;
        additional_paths_receive.value_namespace = name_space;
        additional_paths_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-network")
    {
        permanent_network = value;
        permanent_network.value_namespace = name_space;
        permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
        rpki_bestpath_use_origin_as_validity.value_namespace = name_space;
        rpki_bestpath_use_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-label-allocation-mode")
    {
        srv6_label_allocation_mode = value;
        srv6_label_allocation_mode.value_namespace = name_space;
        srv6_label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum = value;
        next_hop_resolution_prefix_length_minimum.value_namespace = name_space;
        next_hop_resolution_prefix_length_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import = value;
        reset_weight_on_import.value_namespace = name_space;
        reset_weight_on_import.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send = value;
        additional_paths_send.value_namespace = name_space;
        additional_paths_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast = value;
        advertise_local_labeled_route_safi_unicast.value_namespace = name_space;
        advertise_local_labeled_route_safi_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check = value;
        disable_as_path_loop_check.value_namespace = name_space;
        disable_as_path_loop_check.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-download")
    {
        rt_download.yfilter = yfilter;
    }
    if(value_path == "allow-vpn-default-originate")
    {
        allow_vpn_default_originate.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-enable")
    {
        rpki_origin_as_validation_enable.yfilter = yfilter;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
    if(value_path == "attribute-download")
    {
        attribute_download.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive.yfilter = yfilter;
    }
    if(value_path == "permanent-network")
    {
        permanent_network.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "srv6-label-allocation-mode")
    {
        srv6_label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum.yfilter = yfilter;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast.yfilter = yfilter;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvpn" || name == "ebgp" || name == "eibgp" || name == "ibgp" || name == "aggregate-addresses" || name == "optimal-route-reflector-groups" || name == "dampening" || name == "rip-routes" || name == "lisp-routes" || name == "static-routes" || name == "distance" || name == "application-routes" || name == "label-mode" || name == "eigrp-routes" || name == "sourced-networks" || name == "connected-routes" || name == "allocate-label" || name == "additional-paths-selection" || name == "ospf-routes" || name == "mobile-routes" || name == "subscriber-routes" || name == "af-name" || name == "rt-download" || name == "allow-vpn-default-originate" || name == "rpki-origin-as-validation-enable" || name == "dynamic-med-interval" || name == "enable" || name == "table-policy" || name == "attribute-download" || name == "best-external" || name == "rpki-origin-as-validity-signal-ibgp" || name == "additional-paths-receive" || name == "permanent-network" || name == "rpki-bestpath-use-origin-as-validity" || name == "srv6-label-allocation-mode" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "next-hop-resolution-prefix-length-minimum" || name == "reset-weight-on-import" || name == "additional-paths-send" || name == "advertise-local-labeled-route-safi-unicast" || name == "disable-as-path-loop-check")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::Mvpn()
    :
    single_forwarder_selection{YType::enumeration, "single-forwarder-selection"}
{

    yang_name = "mvpn"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::~Mvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_data() const
{
    if (is_presence_container) return true;
    return single_forwarder_selection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(single_forwarder_selection.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (single_forwarder_selection.is_set || is_set(single_forwarder_selection.yfilter)) leaf_name_data.push_back(single_forwarder_selection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "single-forwarder-selection")
    {
        single_forwarder_selection = value;
        single_forwarder_selection.value_namespace = name_space;
        single_forwarder_selection.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "single-forwarder-selection")
    {
        single_forwarder_selection.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "single-forwarder-selection")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::Ebgp()
    :
    paths_value{YType::uint32, "paths-value"},
    unequal_cost{YType::boolean, "unequal-cost"},
    selective{YType::boolean, "selective"},
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"}
{

    yang_name = "ebgp"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::~Ebgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return paths_value.is_set
	|| unequal_cost.is_set
	|| selective.is_set
	|| order_by_igp_metric.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths-value" || name == "unequal-cost" || name == "selective" || name == "order-by-igp-metric")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::Eibgp()
    :
    paths_value{YType::uint32, "paths-value"},
    unequal_cost{YType::boolean, "unequal-cost"},
    selective{YType::boolean, "selective"},
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"}
{

    yang_name = "eibgp"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::~Eibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_data() const
{
    if (is_presence_container) return true;
    return paths_value.is_set
	|| unequal_cost.is_set
	|| selective.is_set
	|| order_by_igp_metric.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths-value" || name == "unequal-cost" || name == "selective" || name == "order-by-igp-metric")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::Ibgp()
    :
    paths_value{YType::uint32, "paths-value"},
    unequal_cost{YType::boolean, "unequal-cost"},
    selective{YType::boolean, "selective"},
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"}
{

    yang_name = "ibgp"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::~Ibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return paths_value.is_set
	|| unequal_cost.is_set
	|| selective.is_set
	|| order_by_igp_metric.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths-value" || name == "unequal-cost" || name == "selective" || name == "order-by-igp-metric")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddresses()
    :
    aggregate_address(this, {"aggregate_addr", "aggregate_prefix"})
{

    yang_name = "aggregate-addresses"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::~AggregateAddresses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-address")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress>();
        ent_->parent = this;
        aggregate_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggregate_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::AggregateAddress()
    :
    aggregate_addr{YType::str, "aggregate-addr"},
    aggregate_prefix{YType::uint16, "aggregate-prefix"},
    generate_set_info{YType::boolean, "generate-set-info"},
    generate_confederation_set_info{YType::boolean, "generate-confederation-set-info"},
    summary_only{YType::boolean, "summary-only"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "aggregate-address"; yang_parent_name = "aggregate-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::~AggregateAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_data() const
{
    if (is_presence_container) return true;
    return aggregate_addr.is_set
	|| aggregate_prefix.is_set
	|| generate_set_info.is_set
	|| generate_confederation_set_info.is_set
	|| summary_only.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_addr.yfilter)
	|| ydk::is_set(aggregate_prefix.yfilter)
	|| ydk::is_set(generate_set_info.yfilter)
	|| ydk::is_set(generate_confederation_set_info.yfilter)
	|| ydk::is_set(summary_only.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address";
    ADD_KEY_TOKEN(aggregate_addr, "aggregate-addr");
    ADD_KEY_TOKEN(aggregate_prefix, "aggregate-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_addr.is_set || is_set(aggregate_addr.yfilter)) leaf_name_data.push_back(aggregate_addr.get_name_leafdata());
    if (aggregate_prefix.is_set || is_set(aggregate_prefix.yfilter)) leaf_name_data.push_back(aggregate_prefix.get_name_leafdata());
    if (generate_set_info.is_set || is_set(generate_set_info.yfilter)) leaf_name_data.push_back(generate_set_info.get_name_leafdata());
    if (generate_confederation_set_info.is_set || is_set(generate_confederation_set_info.yfilter)) leaf_name_data.push_back(generate_confederation_set_info.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.yfilter)) leaf_name_data.push_back(summary_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr = value;
        aggregate_addr.value_namespace = name_space;
        aggregate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix = value;
        aggregate_prefix.value_namespace = name_space;
        aggregate_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info = value;
        generate_set_info.value_namespace = name_space;
        generate_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info = value;
        generate_confederation_set_info.value_namespace = name_space;
        generate_confederation_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
        summary_only.value_namespace = name_space;
        summary_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr.yfilter = yfilter;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix.yfilter = yfilter;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info.yfilter = yfilter;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info.yfilter = yfilter;
    }
    if(value_path == "summary-only")
    {
        summary_only.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-addr" || name == "aggregate-prefix" || name == "generate-set-info" || name == "generate-confederation-set-info" || name == "summary-only" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroups()
    :
    optimal_route_reflector_group(this, {"group_name"})
{

    yang_name = "optimal-route-reflector-groups"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::~OptimalRouteReflectorGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optimal_route_reflector_group.len(); index++)
    {
        if(optimal_route_reflector_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::has_operation() const
{
    for (std::size_t index=0; index<optimal_route_reflector_group.len(); index++)
    {
        if(optimal_route_reflector_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optimal-route-reflector-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optimal-route-reflector-group")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup>();
        ent_->parent = this;
        optimal_route_reflector_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : optimal_route_reflector_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optimal-route-reflector-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::OptimalRouteReflectorGroup()
    :
    group_name{YType::str, "group-name"},
    primary_root_address{YType::str, "primary-root-address"},
    secondary_root_address{YType::str, "secondary-root-address"},
    tertiary_root_address{YType::str, "tertiary-root-address"}
{

    yang_name = "optimal-route-reflector-group"; yang_parent_name = "optimal-route-reflector-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::~OptimalRouteReflectorGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_name.is_set
	|| primary_root_address.is_set
	|| secondary_root_address.is_set
	|| tertiary_root_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(primary_root_address.yfilter)
	|| ydk::is_set(secondary_root_address.yfilter)
	|| ydk::is_set(tertiary_root_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optimal-route-reflector-group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (primary_root_address.is_set || is_set(primary_root_address.yfilter)) leaf_name_data.push_back(primary_root_address.get_name_leafdata());
    if (secondary_root_address.is_set || is_set(secondary_root_address.yfilter)) leaf_name_data.push_back(secondary_root_address.get_name_leafdata());
    if (tertiary_root_address.is_set || is_set(tertiary_root_address.yfilter)) leaf_name_data.push_back(tertiary_root_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-root-address")
    {
        primary_root_address = value;
        primary_root_address.value_namespace = name_space;
        primary_root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-root-address")
    {
        secondary_root_address = value;
        secondary_root_address.value_namespace = name_space;
        secondary_root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tertiary-root-address")
    {
        tertiary_root_address = value;
        tertiary_root_address.value_namespace = name_space;
        tertiary_root_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "primary-root-address")
    {
        primary_root_address.yfilter = yfilter;
    }
    if(value_path == "secondary-root-address")
    {
        secondary_root_address.yfilter = yfilter;
    }
    if(value_path == "tertiary-root-address")
    {
        tertiary_root_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "primary-root-address" || name == "secondary-root-address" || name == "tertiary-root-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::Dampening()
    :
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "dampening"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::~Dampening()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return half_life.is_set
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life" || name == "reuse-threshold" || name == "suppress-threshold" || name == "suppress-time" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::RipRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "rip-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::~RipRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::LispRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "lisp-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::~LispRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::StaticRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "static-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::~StaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::Distance()
    :
    external_routes{YType::uint32, "external-routes"},
    internal_routes{YType::uint32, "internal-routes"},
    local_routes{YType::uint32, "local-routes"}
{

    yang_name = "distance"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::~Distance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| internal_routes.is_set
	|| local_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(internal_routes.yfilter)
	|| ydk::is_set(local_routes.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (internal_routes.is_set || is_set(internal_routes.yfilter)) leaf_name_data.push_back(internal_routes.get_name_leafdata());
    if (local_routes.is_set || is_set(local_routes.yfilter)) leaf_name_data.push_back(local_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-routes")
    {
        internal_routes = value;
        internal_routes.value_namespace = name_space;
        internal_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-routes")
    {
        local_routes = value;
        local_routes.value_namespace = name_space;
        local_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "internal-routes")
    {
        internal_routes.yfilter = yfilter;
    }
    if(value_path == "local-routes")
    {
        local_routes.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "internal-routes" || name == "local-routes")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoutes()
    :
    application_route(this, {"instance_name"})
{

    yang_name = "application-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::~ApplicationRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_route.len(); index++)
    {
        if(application_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::has_operation() const
{
    for (std::size_t index=0; index<application_route.len(); index++)
    {
        if(application_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute>();
        ent_->parent = this;
        application_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::ApplicationRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "application-route"; yang_parent_name = "application-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::~ApplicationRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-route";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "label-mode"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_data() const
{
    if (is_presence_container) return true;
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-allocation-mode" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoutes()
    :
    eigrp_route(this, {"instance_name"})
{

    yang_name = "eigrp-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::~EigrpRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp_route.len(); index++)
    {
        if(eigrp_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_operation() const
{
    for (std::size_t index=0; index<eigrp_route.len(); index++)
    {
        if(eigrp_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute>();
        ent_->parent = this;
        eigrp_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::EigrpRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    redist_type{YType::str, "redist-type"}
{

    yang_name = "eigrp-route"; yang_parent_name = "eigrp-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::~EigrpRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| default_metric.is_set
	|| route_policy_name.is_set
	|| redist_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(redist_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-route";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "route-policy-name" || name == "redist-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetworks()
    :
    sourced_network(this, {"network_addr", "network_prefix"})
{

    yang_name = "sourced-networks"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::~SourcedNetworks()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sourced_network.len(); index++)
    {
        if(sourced_network[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_operation() const
{
    for (std::size_t index=0; index<sourced_network.len(); index++)
    {
        if(sourced_network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sourced-network")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork>();
        ent_->parent = this;
        sourced_network.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sourced_network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourced-network")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::SourcedNetwork()
    :
    network_addr{YType::str, "network-addr"},
    network_prefix{YType::uint16, "network-prefix"},
    backdoor{YType::boolean, "backdoor"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "sourced-network"; yang_parent_name = "sourced-networks"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::~SourcedNetwork()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_data() const
{
    if (is_presence_container) return true;
    return network_addr.is_set
	|| network_prefix.is_set
	|| backdoor.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_addr.yfilter)
	|| ydk::is_set(network_prefix.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-network";
    ADD_KEY_TOKEN(network_addr, "network-addr");
    ADD_KEY_TOKEN(network_prefix, "network-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_addr.is_set || is_set(network_addr.yfilter)) leaf_name_data.push_back(network_addr.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-addr")
    {
        network_addr = value;
        network_addr.value_namespace = name_space;
        network_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-addr")
    {
        network_addr.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addr" || name == "network-prefix" || name == "backdoor" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::ConnectedRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "connected-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::AllocateLabel()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"},
    un_labeled_path{YType::boolean, "un-labeled-path"}
{

    yang_name = "allocate-label"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::~AllocateLabel()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| route_policy_name.is_set
	|| un_labeled_path.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(un_labeled_path.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (un_labeled_path.is_set || is_set(un_labeled_path.yfilter)) leaf_name_data.push_back(un_labeled_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "un-labeled-path")
    {
        un_labeled_path = value;
        un_labeled_path.value_namespace = name_space;
        un_labeled_path.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "un-labeled-path")
    {
        un_labeled_path.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-policy-name" || name == "un-labeled-path")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::AdditionalPathsSelection()
    :
    selection{YType::enumeration, "selection"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "additional-paths-selection"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::~AdditionalPathsSelection()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_data() const
{
    if (is_presence_container) return true;
    return selection.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection.is_set || is_set(selection.yfilter)) leaf_name_data.push_back(selection.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection")
    {
        selection = value;
        selection.value_namespace = name_space;
        selection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection")
    {
        selection.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoutes()
    :
    ospf_route(this, {"instance_name"})
{

    yang_name = "ospf-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::~OspfRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_route.len(); index++)
    {
        if(ospf_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_operation() const
{
    for (std::size_t index=0; index<ospf_route.len(); index++)
    {
        if(ospf_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute>();
        ent_->parent = this;
        ospf_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ospf_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::OspfRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    redist_type{YType::str, "redist-type"}
{

    yang_name = "ospf-route"; yang_parent_name = "ospf-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::~OspfRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| default_metric.is_set
	|| route_policy_name.is_set
	|| redist_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(redist_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-route";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "route-policy-name" || name == "redist-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::MobileRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "mobile-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::~MobileRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::SubscriberRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "subscriber-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::~SubscriberRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterfaces()
    :
    mpls_activated_interface(this, {"interface_name"})
{

    yang_name = "mpls-activated-interfaces"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::~MplsActivatedInterfaces()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpls_activated_interface.len(); index++)
    {
        if(mpls_activated_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<mpls_activated_interface.len(); index++)
    {
        if(mpls_activated_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-activated-interface")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface>();
        ent_->parent = this;
        mpls_activated_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpls_activated_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-activated-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::MplsActivatedInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "mpls-activated-interface"; yang_parent_name = "mpls-activated-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::~MplsActivatedInterface()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::GlobalTimers()
    :
    keepalive{YType::uint32, "keepalive"},
    hold_time{YType::uint32, "hold-time"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "global-timers"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::~GlobalTimers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive.is_set
	|| hold_time.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive" || name == "hold-time" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::~Bfd()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::SendSocketBufferSizes()
    :
    socket_send_size{YType::uint32, "socket-send-size"},
    bgp_send_size{YType::uint32, "bgp-send-size"}
{

    yang_name = "send-socket-buffer-sizes"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::~SendSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_data() const
{
    if (is_presence_container) return true;
    return socket_send_size.is_set
	|| bgp_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_send_size.yfilter)
	|| ydk::is_set(bgp_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());
    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-send-size" || name == "bgp-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::ReceiveSocketBufferSizes()
    :
    socket_receive_size{YType::uint32, "socket-receive-size"},
    bgp_receive_size{YType::uint32, "bgp-receive-size"}
{

    yang_name = "receive-socket-buffer-sizes"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::~ReceiveSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_data() const
{
    if (is_presence_container) return true;
    return socket_receive_size.is_set
	|| bgp_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_receive_size.yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());
    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-receive-size" || name == "bgp-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbors()
    :
    vrf_neighbor(this, {"neighbor_address"})
    , vrf_neighbor_prefix_length(this, {"prefix_length", "neighbor_address"})
{

    yang_name = "vrf-neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::~VrfNeighbors()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_neighbor.len(); index++)
    {
        if(vrf_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_neighbor_prefix_length.len(); index++)
    {
        if(vrf_neighbor_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor.len(); index++)
    {
        if(vrf_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_neighbor_prefix_length.len(); index++)
    {
        if(vrf_neighbor_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor>();
        ent_->parent = this;
        vrf_neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-neighbor-prefix-length")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength>();
        ent_->parent = this;
        vrf_neighbor_prefix_length.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_neighbor_prefix_length.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor" || name == "vrf-neighbor-prefix-length")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    session_group_add_member{YType::str, "session-group-add-member"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    shutdown{YType::boolean, "shutdown"},
    description{YType::str, "description"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    neighbor_graceful_restart{YType::enumeration, "neighbor-graceful-restart"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    max_peers{YType::uint32, "max-peers"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    ttl_security{YType::boolean, "ttl-security"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    remote_as_list{YType::str, "remote-as-list"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    update_source_interface{YType::str, "update-source-interface"}
        ,
    vrf_neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs>())
    , local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress>())
    , bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates>())
    , ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop>())
    , remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs>())
    , local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs>())
    , password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password>())
    , advertisement_interval(nullptr) // presence node
    , neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId>())
    , tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss>())
    , tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos>())
    , update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering>())
    , msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut>())
    , ao_keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain>())
    , receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize>())
    , msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn>())
    , send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize>())
    , timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers>())
    , keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain>())
    , graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance>())
{
    vrf_neighbor_afs->parent = this;
    local_address->parent = this;
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    remote_as->parent = this;
    local_as->parent = this;
    password->parent = this;
    neighbor_cluster_id->parent = this;
    tcpmss->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;
    msg_log_out->parent = this;
    ao_keychain->parent = this;
    receive_buffer_size->parent = this;
    msg_log_in->parent = this;
    send_buffer_size->parent = this;
    timers->parent = this;
    keychain->parent = this;
    graceful_maintenance->parent = this;

    yang_name = "vrf-neighbor"; yang_parent_name = "vrf-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::~VrfNeighbor()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| session_group_add_member.is_set
	|| egress_peer_engineering.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| shutdown.is_set
	|| description.is_set
	|| neighbor_group_add_member.is_set
	|| ebgp_recv_dmz.is_set
	|| neighbor_graceful_restart.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| session_open_mode.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| suppress_all_capabilities.is_set
	|| max_peers.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| additional_paths_send_capability.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| bfd_enable_modes.is_set
	|| ttl_security.is_set
	|| neighbor_graceful_restart_time.is_set
	|| bfd_multiplier.is_set
	|| bfd_minimum_interval.is_set
	|| remote_as_list.is_set
	|| additional_paths_receive_capability.is_set
	|| ignore_connected_check_ebgp.is_set
	|| suppress_four_byte_as_capability.is_set
	|| update_source_interface.is_set
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (ao_keychain !=  nullptr && ao_keychain->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (ao_keychain !=  nullptr && ao_keychain->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor-afs")
    {
        if(vrf_neighbor_afs == nullptr)
        {
            vrf_neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs>();
        }
        return vrf_neighbor_afs;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "ao-keychain")
    {
        if(ao_keychain == nullptr)
        {
            ao_keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain>();
        }
        return ao_keychain;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_neighbor_afs != nullptr)
    {
        _children["vrf-neighbor-afs"] = vrf_neighbor_afs;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(bmp_activates != nullptr)
    {
        _children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(remote_as != nullptr)
    {
        _children["remote-as"] = remote_as;
    }

    if(local_as != nullptr)
    {
        _children["local-as"] = local_as;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(advertisement_interval != nullptr)
    {
        _children["advertisement-interval"] = advertisement_interval;
    }

    if(neighbor_cluster_id != nullptr)
    {
        _children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(tcpmss != nullptr)
    {
        _children["tcpmss"] = tcpmss;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        _children["update-in-filtering"] = update_in_filtering;
    }

    if(msg_log_out != nullptr)
    {
        _children["msg-log-out"] = msg_log_out;
    }

    if(ao_keychain != nullptr)
    {
        _children["ao-keychain"] = ao_keychain;
    }

    if(receive_buffer_size != nullptr)
    {
        _children["receive-buffer-size"] = receive_buffer_size;
    }

    if(msg_log_in != nullptr)
    {
        _children["msg-log-in"] = msg_log_in;
    }

    if(send_buffer_size != nullptr)
    {
        _children["send-buffer-size"] = send_buffer_size;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(keychain != nullptr)
    {
        _children["keychain"] = keychain;
    }

    if(graceful_maintenance != nullptr)
    {
        _children["graceful-maintenance"] = graceful_maintenance;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor-afs" || name == "local-address" || name == "bmp-activates" || name == "ebgp-multihop" || name == "remote-as" || name == "local-as" || name == "password" || name == "advertisement-interval" || name == "neighbor-cluster-id" || name == "tcpmss" || name == "tos" || name == "update-in-filtering" || name == "msg-log-out" || name == "ao-keychain" || name == "receive-buffer-size" || name == "msg-log-in" || name == "send-buffer-size" || name == "timers" || name == "keychain" || name == "graceful-maintenance" || name == "neighbor-address" || name == "internal-vpn-client-ibgp-ce" || name == "session-group-add-member" || name == "egress-peer-engineering" || name == "neighbor-graceful-restart-stalepath-time" || name == "shutdown" || name == "description" || name == "neighbor-group-add-member" || name == "ebgp-recv-dmz" || name == "neighbor-graceful-restart" || name == "enforce-first-as" || name == "idle-watch-time" || name == "session-open-mode" || name == "rpki-origin-as-validation-disable" || name == "ebgp-send-dmz-enable-modes" || name == "suppress-all-capabilities" || name == "max-peers" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "additional-paths-send-capability" || name == "propagate-dmz-link-bandwidth" || name == "bfd-enable-modes" || name == "ttl-security" || name == "neighbor-graceful-restart-time" || name == "bfd-multiplier" || name == "bfd-minimum-interval" || name == "remote-as-list" || name == "additional-paths-receive-capability" || name == "ignore-connected-check-ebgp" || name == "suppress-four-byte-as-capability" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAfs()
    :
    vrf_neighbor_af(this, {"af_name"})
{

    yang_name = "vrf-neighbor-afs"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::~VrfNeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_neighbor_af.len(); index++)
    {
        if(vrf_neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.len(); index++)
    {
        if(vrf_neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor-af")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf>();
        ent_->parent = this;
        vrf_neighbor_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_neighbor_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::VrfNeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    as_override{YType::boolean, "as-override"},
    multipath{YType::empty, "multipath"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    activate{YType::empty, "activate"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    next_hop_self{YType::boolean, "next-hop-self"},
    route_policy_in{YType::str, "route-policy-in"},
    default_weight{YType::uint32, "default-weight"},
    af_group{YType::str, "af-group"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    optimal_route_reflection_group{YType::str, "optimal-route-reflection-group"},
    accept_own{YType::boolean, "accept-own"},
    route_policy_out{YType::str, "route-policy-out"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"}
        ,
    aigp_cost_community(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>())
    , advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>())
    , advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>())
    , maximum_prefixes(nullptr) // presence node
    , remove_private_as_entire_as_path_inbound(nullptr) // presence node
    , advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>())
    , advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn>())
    , advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn>())
    , neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
    , site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>())
    , advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>())
    , advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>())
    , import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import>())
    , default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>())
    , soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>())
    , advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>())
    , advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>())
    , advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>())
    , remove_private_as_entire_as_path(nullptr) // presence node
    , advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>())
{
    aigp_cost_community->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_def_imp_disable_v4->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    site_of_origin->parent = this;
    advertise_v6->parent = this;
    advertise_local_v6->parent = this;
    import->parent = this;
    default_originate->parent = this;
    soft_reconfiguration->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    advertise_v4->parent = this;
    advertise_local_v4->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;

    yang_name = "vrf-neighbor-af"; yang_parent_name = "vrf-neighbor-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::~VrfNeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| send_ext_community_ebgp.is_set
	|| accept_route_legacy_rt.is_set
	|| send_community_ebgp.is_set
	|| next_hop_unchanged.is_set
	|| advertise_local_labeled_route.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| flowspec_validation.is_set
	|| encapsulation_type.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| enforce_multiple_labels.is_set
	|| as_override.is_set
	|| multipath.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| activate.is_set
	|| prefix_orf_policy.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| advertise_orf.is_set
	|| route_reflector_client.is_set
	|| next_hop_self.is_set
	|| route_policy_in.is_set
	|| default_weight.is_set
	|| af_group.is_set
	|| next_hop_unchanged_multipath.is_set
	|| optimal_route_reflection_group.is_set
	|| accept_own.is_set
	|| route_policy_out.is_set
	|| advertise_permanent_network.is_set
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(optimal_route_reflection_group.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (optimal_route_reflection_group.is_set || is_set(optimal_route_reflection_group.yfilter)) leaf_name_data.push_back(optimal_route_reflection_group.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aigp_cost_community != nullptr)
    {
        _children["aigp-cost-community"] = aigp_cost_community;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        _children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        _children["advertise-disable"] = advertise_disable;
    }

    if(maximum_prefixes != nullptr)
    {
        _children["maximum-prefixes"] = maximum_prefixes;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        _children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(advertise_def_imp_disable_v4 != nullptr)
    {
        _children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        _children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        _children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        _children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(site_of_origin != nullptr)
    {
        _children["site-of-origin"] = site_of_origin;
    }

    if(advertise_v6 != nullptr)
    {
        _children["advertise-v6"] = advertise_v6;
    }

    if(advertise_local_v6 != nullptr)
    {
        _children["advertise-local-v6"] = advertise_local_v6;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    if(soft_reconfiguration != nullptr)
    {
        _children["soft-reconfiguration"] = soft_reconfiguration;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        _children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(advertise_v4 != nullptr)
    {
        _children["advertise-v4"] = advertise_v4;
    }

    if(advertise_local_v4 != nullptr)
    {
        _children["advertise-local-v4"] = advertise_local_v4;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        _children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        _children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimal-route-reflection-group")
    {
        optimal_route_reflection_group = value;
        optimal_route_reflection_group.value_namespace = name_space;
        optimal_route_reflection_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "optimal-route-reflection-group")
    {
        optimal_route_reflection_group.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aigp-cost-community" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "maximum-prefixes" || name == "remove-private-as-entire-as-path-inbound" || name == "advertise-def-imp-disable-v4" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "site-of-origin" || name == "advertise-v6" || name == "advertise-local-v6" || name == "import" || name == "default-originate" || name == "soft-reconfiguration" || name == "advertise-vrf-imp-disable-v6" || name == "advertise-v4" || name == "advertise-local-v4" || name == "remove-private-as-entire-as-path" || name == "advertise-vrf-imp-disable-v4" || name == "af-name" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "send-ext-community-ebgp" || name == "accept-route-legacy-rt" || name == "send-community-ebgp" || name == "next-hop-unchanged" || name == "advertise-local-labeled-route" || name == "rpki-origin-as-validation-disable" || name == "flowspec-validation" || name == "encapsulation-type" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "enforce-multiple-labels" || name == "as-override" || name == "multipath" || name == "send-community-ebgp-graceful-shutdown" || name == "activate" || name == "prefix-orf-policy" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "advertise-orf" || name == "route-reflector-client" || name == "next-hop-self" || name == "route-policy-in" || name == "default-weight" || name == "af-group" || name == "next-hop-unchanged-multipath" || name == "optimal-route-reflection-group" || name == "accept-own" || name == "route-policy-out" || name == "advertise-permanent-network")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    enable{YType::boolean, "enable"},
    cost_community_id{YType::uint32, "cost-community-id"},
    transitive{YType::boolean, "transitive"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| cost_community_id.is_set
	|| transitive.is_set
	|| cost_community_poi_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(transitive.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "cost-community-id" || name == "transitive" || name == "cost-community-poi-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    prefix_limit{YType::uint32, "prefix-limit"},
    warning_percentage{YType::uint32, "warning-percentage"},
    warning_only{YType::boolean, "warning-only"},
    restart_time{YType::uint32, "restart-time"},
    discard_extra_paths{YType::boolean, "discard-extra-paths"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix_limit.is_set
	|| warning_percentage.is_set
	|| warning_only.is_set
	|| restart_time.is_set
	|| discard_extra_paths.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(warning_percentage.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "warning-percentage" || name == "warning-only" || name == "restart-time" || name == "discard-extra-paths")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::AdvertiseL2vpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::~AdvertiseL2vpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::AdvertiseLocalL2vpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::~AdvertiseLocalL2vpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_send{YType::uint32, "stale-time-send"},
    stale_time_accept{YType::uint32, "stale-time-accept"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    if (is_presence_container) return true;
    return stale_time_send.is_set
	|| stale_time_accept.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_send.yfilter)
	|| ydk::is_set(stale_time_accept.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());
    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-send" || name == "stale-time-accept")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::SiteOfOrigin()
    :
    type{YType::enumeration, "type"},
    as_xx{YType::uint32, "as-xx"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"}
{

    yang_name = "site-of-origin"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as_xx.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| address_index.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as-xx" || name == "as" || name == "as-index" || name == "address" || name == "address-index")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::Import()
    :
    import_stitching{YType::boolean, "import-stitching"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"}
{

    yang_name = "import"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_data() const
{
    if (is_presence_container) return true;
    return import_stitching.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_stitching.yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-stitching" || name == "import-reoriginate" || name == "import-reoriginate-stitching")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_data() const
{
    if (is_presence_container) return true;
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivates()
    :
    bmp_activate(this, {"server_id"})
{

    yang_name = "bmp-activates"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bmp_activate.len(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.len(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate>();
        ent_->parent = this;
        bmp_activate.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bmp_activate.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_data() const
{
    if (is_presence_container) return true;
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate";
    ADD_KEY_TOKEN(server_id, "server-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    no_prepend{YType::empty, "no-prepend"},
    disable{YType::empty, "disable"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| no_prepend.is_set
	|| disable.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "no-prepend" || name == "disable" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::Password()
    :
    password_disable{YType::boolean, "password-disable"},
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_data() const
{
    if (is_presence_container) return true;
    return password_disable.is_set
	|| password.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password_disable.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-disable" || name == "password")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_data() const
{
    if (is_presence_container) return true;
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_number{YType::uint32, "cluster-id-number"},
    cluster_id_address{YType::str, "cluster-id-address"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_data() const
{
    if (is_presence_container) return true;
    return cluster_id_number.is_set
	|| cluster_id_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_number.yfilter)
	|| ydk::is_set(cluster_id_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());
    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-number" || name == "cluster-id-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::Tcpmss()
    :
    tcpmss_disable{YType::boolean, "tcpmss-disable"},
    mss{YType::uint32, "mss"}
{

    yang_name = "tcpmss"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_data() const
{
    if (is_presence_container) return true;
    return tcpmss_disable.is_set
	|| mss.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter)
	|| ydk::is_set(mss.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());
    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpmss-disable" || name == "mss")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
        ,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_in_filtering_message_buffers != nullptr)
    {
        _children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    number_of_buffers{YType::uint32, "number-of-buffers"},
    non_circular_buffer{YType::boolean, "non-circular-buffer"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    if (is_presence_container) return true;
    return number_of_buffers.is_set
	|| non_circular_buffer.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_buffers.yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());
    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-buffers" || name == "non-circular-buffer")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_data() const
{
    if (is_presence_container) return true;
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::AoKeychain()
    :
    ao_keychain_disable{YType::boolean, "ao-keychain-disable"},
    ao_keychain_name{YType::str, "ao-keychain-name"},
    ao_include_tcp_options{YType::boolean, "ao-include-tcp-options"},
    ao_accept_mismatch_connection{YType::boolean, "ao-accept-mismatch-connection"}
{

    yang_name = "ao-keychain"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::~AoKeychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::has_data() const
{
    if (is_presence_container) return true;
    return ao_keychain_disable.is_set
	|| ao_keychain_name.is_set
	|| ao_include_tcp_options.is_set
	|| ao_accept_mismatch_connection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ao_keychain_disable.yfilter)
	|| ydk::is_set(ao_keychain_name.yfilter)
	|| ydk::is_set(ao_include_tcp_options.yfilter)
	|| ydk::is_set(ao_accept_mismatch_connection.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ao-keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ao_keychain_disable.is_set || is_set(ao_keychain_disable.yfilter)) leaf_name_data.push_back(ao_keychain_disable.get_name_leafdata());
    if (ao_keychain_name.is_set || is_set(ao_keychain_name.yfilter)) leaf_name_data.push_back(ao_keychain_name.get_name_leafdata());
    if (ao_include_tcp_options.is_set || is_set(ao_include_tcp_options.yfilter)) leaf_name_data.push_back(ao_include_tcp_options.get_name_leafdata());
    if (ao_accept_mismatch_connection.is_set || is_set(ao_accept_mismatch_connection.yfilter)) leaf_name_data.push_back(ao_accept_mismatch_connection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ao-keychain-disable")
    {
        ao_keychain_disable = value;
        ao_keychain_disable.value_namespace = name_space;
        ao_keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-keychain-name")
    {
        ao_keychain_name = value;
        ao_keychain_name.value_namespace = name_space;
        ao_keychain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-include-tcp-options")
    {
        ao_include_tcp_options = value;
        ao_include_tcp_options.value_namespace = name_space;
        ao_include_tcp_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-accept-mismatch-connection")
    {
        ao_accept_mismatch_connection = value;
        ao_accept_mismatch_connection.value_namespace = name_space;
        ao_accept_mismatch_connection.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ao-keychain-disable")
    {
        ao_keychain_disable.yfilter = yfilter;
    }
    if(value_path == "ao-keychain-name")
    {
        ao_keychain_name.yfilter = yfilter;
    }
    if(value_path == "ao-include-tcp-options")
    {
        ao_include_tcp_options.yfilter = yfilter;
    }
    if(value_path == "ao-accept-mismatch-connection")
    {
        ao_accept_mismatch_connection.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AoKeychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ao-keychain-disable" || name == "ao-keychain-name" || name == "ao-include-tcp-options" || name == "ao-accept-mismatch-connection")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::ReceiveBufferSize()
    :
    socket_receive_size{YType::uint32, "socket-receive-size"},
    bgp_receive_size{YType::uint32, "bgp-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return socket_receive_size.is_set
	|| bgp_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_receive_size.yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());
    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-receive-size" || name == "bgp-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_data() const
{
    if (is_presence_container) return true;
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::SendBufferSize()
    :
    socket_send_size{YType::uint32, "socket-send-size"},
    bgp_send_size{YType::uint32, "bgp-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return socket_send_size.is_set
	|| bgp_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_send_size.yfilter)
	|| ydk::is_set(bgp_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());
    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-send-size" || name == "bgp-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::Timers()
    :
    keepalive_interval{YType::uint32, "keepalive-interval"},
    hold_time{YType::uint32, "hold-time"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| hold_time.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "hold-time" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_data() const
{
    if (is_presence_container) return true;
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
        ,
    graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
    , graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
{
    graceful_maintenance_local_preference->parent = this;
    graceful_maintenance_as_prepends->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data())
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation())
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_maintenance_local_preference != nullptr)
    {
        _children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    if(graceful_maintenance_as_prepends != nullptr)
    {
        _children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-local-preference" || name == "graceful-maintenance-as-prepends" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    if (is_presence_container) return true;
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"},
    as_prepends{YType::uint32, "as-prepends"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    if (is_presence_container) return true;
    return gshut_prepends_disable.is_set
	|| as_prepends.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter)
	|| ydk::is_set(as_prepends.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());
    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-prepends-disable" || name == "as-prepends")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborPrefixLength()
    :
    prefix_length{YType::uint32, "prefix-length"},
    neighbor_address{YType::str, "neighbor-address"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    session_group_add_member{YType::str, "session-group-add-member"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    shutdown{YType::boolean, "shutdown"},
    description{YType::str, "description"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    neighbor_graceful_restart{YType::enumeration, "neighbor-graceful-restart"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    max_peers{YType::uint32, "max-peers"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    ttl_security{YType::boolean, "ttl-security"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    remote_as_list{YType::str, "remote-as-list"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    update_source_interface{YType::str, "update-source-interface"}
        ,
    vrf_neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs>())
    , local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress>())
    , bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates>())
    , ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop>())
    , remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs>())
    , local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs>())
    , password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password>())
    , advertisement_interval(nullptr) // presence node
    , neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId>())
    , tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss>())
    , tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos>())
    , update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering>())
    , msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut>())
    , ao_keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain>())
    , receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize>())
    , msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn>())
    , send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize>())
    , timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers>())
    , keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain>())
    , graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance>())
{
    vrf_neighbor_afs->parent = this;
    local_address->parent = this;
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    remote_as->parent = this;
    local_as->parent = this;
    password->parent = this;
    neighbor_cluster_id->parent = this;
    tcpmss->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;
    msg_log_out->parent = this;
    ao_keychain->parent = this;
    receive_buffer_size->parent = this;
    msg_log_in->parent = this;
    send_buffer_size->parent = this;
    timers->parent = this;
    keychain->parent = this;
    graceful_maintenance->parent = this;

    yang_name = "vrf-neighbor-prefix-length"; yang_parent_name = "vrf-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::~VrfNeighborPrefixLength()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| neighbor_address.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| session_group_add_member.is_set
	|| egress_peer_engineering.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| shutdown.is_set
	|| description.is_set
	|| neighbor_group_add_member.is_set
	|| ebgp_recv_dmz.is_set
	|| neighbor_graceful_restart.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| session_open_mode.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| suppress_all_capabilities.is_set
	|| max_peers.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| additional_paths_send_capability.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| bfd_enable_modes.is_set
	|| ttl_security.is_set
	|| neighbor_graceful_restart_time.is_set
	|| bfd_multiplier.is_set
	|| bfd_minimum_interval.is_set
	|| remote_as_list.is_set
	|| additional_paths_receive_capability.is_set
	|| ignore_connected_check_ebgp.is_set
	|| suppress_four_byte_as_capability.is_set
	|| update_source_interface.is_set
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (ao_keychain !=  nullptr && ao_keychain->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (ao_keychain !=  nullptr && ao_keychain->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-prefix-length";
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor-afs")
    {
        if(vrf_neighbor_afs == nullptr)
        {
            vrf_neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs>();
        }
        return vrf_neighbor_afs;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password>();
        }
        return password;
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "ao-keychain")
    {
        if(ao_keychain == nullptr)
        {
            ao_keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain>();
        }
        return ao_keychain;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_neighbor_afs != nullptr)
    {
        _children["vrf-neighbor-afs"] = vrf_neighbor_afs;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(bmp_activates != nullptr)
    {
        _children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(remote_as != nullptr)
    {
        _children["remote-as"] = remote_as;
    }

    if(local_as != nullptr)
    {
        _children["local-as"] = local_as;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(advertisement_interval != nullptr)
    {
        _children["advertisement-interval"] = advertisement_interval;
    }

    if(neighbor_cluster_id != nullptr)
    {
        _children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(tcpmss != nullptr)
    {
        _children["tcpmss"] = tcpmss;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        _children["update-in-filtering"] = update_in_filtering;
    }

    if(msg_log_out != nullptr)
    {
        _children["msg-log-out"] = msg_log_out;
    }

    if(ao_keychain != nullptr)
    {
        _children["ao-keychain"] = ao_keychain;
    }

    if(receive_buffer_size != nullptr)
    {
        _children["receive-buffer-size"] = receive_buffer_size;
    }

    if(msg_log_in != nullptr)
    {
        _children["msg-log-in"] = msg_log_in;
    }

    if(send_buffer_size != nullptr)
    {
        _children["send-buffer-size"] = send_buffer_size;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(keychain != nullptr)
    {
        _children["keychain"] = keychain;
    }

    if(graceful_maintenance != nullptr)
    {
        _children["graceful-maintenance"] = graceful_maintenance;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor-afs" || name == "local-address" || name == "bmp-activates" || name == "ebgp-multihop" || name == "remote-as" || name == "local-as" || name == "password" || name == "advertisement-interval" || name == "neighbor-cluster-id" || name == "tcpmss" || name == "tos" || name == "update-in-filtering" || name == "msg-log-out" || name == "ao-keychain" || name == "receive-buffer-size" || name == "msg-log-in" || name == "send-buffer-size" || name == "timers" || name == "keychain" || name == "graceful-maintenance" || name == "prefix-length" || name == "neighbor-address" || name == "internal-vpn-client-ibgp-ce" || name == "session-group-add-member" || name == "egress-peer-engineering" || name == "neighbor-graceful-restart-stalepath-time" || name == "shutdown" || name == "description" || name == "neighbor-group-add-member" || name == "ebgp-recv-dmz" || name == "neighbor-graceful-restart" || name == "enforce-first-as" || name == "idle-watch-time" || name == "session-open-mode" || name == "rpki-origin-as-validation-disable" || name == "ebgp-send-dmz-enable-modes" || name == "suppress-all-capabilities" || name == "max-peers" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "additional-paths-send-capability" || name == "propagate-dmz-link-bandwidth" || name == "bfd-enable-modes" || name == "ttl-security" || name == "neighbor-graceful-restart-time" || name == "bfd-multiplier" || name == "bfd-minimum-interval" || name == "remote-as-list" || name == "additional-paths-receive-capability" || name == "ignore-connected-check-ebgp" || name == "suppress-four-byte-as-capability" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAfs()
    :
    vrf_neighbor_af(this, {"af_name"})
{

    yang_name = "vrf-neighbor-afs"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::~VrfNeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_neighbor_af.len(); index++)
    {
        if(vrf_neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.len(); index++)
    {
        if(vrf_neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor-af")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf>();
        ent_->parent = this;
        vrf_neighbor_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_neighbor_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::VrfNeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    as_override{YType::boolean, "as-override"},
    multipath{YType::empty, "multipath"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    activate{YType::empty, "activate"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    next_hop_self{YType::boolean, "next-hop-self"},
    route_policy_in{YType::str, "route-policy-in"},
    default_weight{YType::uint32, "default-weight"},
    af_group{YType::str, "af-group"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    optimal_route_reflection_group{YType::str, "optimal-route-reflection-group"},
    accept_own{YType::boolean, "accept-own"},
    route_policy_out{YType::str, "route-policy-out"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"}
        ,
    aigp_cost_community(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>())
    , advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>())
    , advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>())
    , maximum_prefixes(nullptr) // presence node
    , remove_private_as_entire_as_path_inbound(nullptr) // presence node
    , advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>())
    , advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn>())
    , advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn>())
    , neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
    , site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>())
    , advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>())
    , advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>())
    , import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import>())
    , default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>())
    , soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>())
    , advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>())
    , advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>())
    , advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>())
    , remove_private_as_entire_as_path(nullptr) // presence node
    , advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>())
{
    aigp_cost_community->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_def_imp_disable_v4->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    site_of_origin->parent = this;
    advertise_v6->parent = this;
    advertise_local_v6->parent = this;
    import->parent = this;
    default_originate->parent = this;
    soft_reconfiguration->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    advertise_v4->parent = this;
    advertise_local_v4->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;

    yang_name = "vrf-neighbor-af"; yang_parent_name = "vrf-neighbor-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::~VrfNeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| send_ext_community_ebgp.is_set
	|| accept_route_legacy_rt.is_set
	|| send_community_ebgp.is_set
	|| next_hop_unchanged.is_set
	|| advertise_local_labeled_route.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| flowspec_validation.is_set
	|| encapsulation_type.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| enforce_multiple_labels.is_set
	|| as_override.is_set
	|| multipath.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| activate.is_set
	|| prefix_orf_policy.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| advertise_orf.is_set
	|| route_reflector_client.is_set
	|| next_hop_self.is_set
	|| route_policy_in.is_set
	|| default_weight.is_set
	|| af_group.is_set
	|| next_hop_unchanged_multipath.is_set
	|| optimal_route_reflection_group.is_set
	|| accept_own.is_set
	|| route_policy_out.is_set
	|| advertise_permanent_network.is_set
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(optimal_route_reflection_group.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (optimal_route_reflection_group.is_set || is_set(optimal_route_reflection_group.yfilter)) leaf_name_data.push_back(optimal_route_reflection_group.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aigp_cost_community != nullptr)
    {
        _children["aigp-cost-community"] = aigp_cost_community;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        _children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        _children["advertise-disable"] = advertise_disable;
    }

    if(maximum_prefixes != nullptr)
    {
        _children["maximum-prefixes"] = maximum_prefixes;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        _children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(advertise_def_imp_disable_v4 != nullptr)
    {
        _children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        _children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        _children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        _children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(site_of_origin != nullptr)
    {
        _children["site-of-origin"] = site_of_origin;
    }

    if(advertise_v6 != nullptr)
    {
        _children["advertise-v6"] = advertise_v6;
    }

    if(advertise_local_v6 != nullptr)
    {
        _children["advertise-local-v6"] = advertise_local_v6;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    if(soft_reconfiguration != nullptr)
    {
        _children["soft-reconfiguration"] = soft_reconfiguration;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        _children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(advertise_v4 != nullptr)
    {
        _children["advertise-v4"] = advertise_v4;
    }

    if(advertise_local_v4 != nullptr)
    {
        _children["advertise-local-v4"] = advertise_local_v4;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        _children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        _children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimal-route-reflection-group")
    {
        optimal_route_reflection_group = value;
        optimal_route_reflection_group.value_namespace = name_space;
        optimal_route_reflection_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "optimal-route-reflection-group")
    {
        optimal_route_reflection_group.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aigp-cost-community" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "maximum-prefixes" || name == "remove-private-as-entire-as-path-inbound" || name == "advertise-def-imp-disable-v4" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "site-of-origin" || name == "advertise-v6" || name == "advertise-local-v6" || name == "import" || name == "default-originate" || name == "soft-reconfiguration" || name == "advertise-vrf-imp-disable-v6" || name == "advertise-v4" || name == "advertise-local-v4" || name == "remove-private-as-entire-as-path" || name == "advertise-vrf-imp-disable-v4" || name == "af-name" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "send-ext-community-ebgp" || name == "accept-route-legacy-rt" || name == "send-community-ebgp" || name == "next-hop-unchanged" || name == "advertise-local-labeled-route" || name == "rpki-origin-as-validation-disable" || name == "flowspec-validation" || name == "encapsulation-type" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "enforce-multiple-labels" || name == "as-override" || name == "multipath" || name == "send-community-ebgp-graceful-shutdown" || name == "activate" || name == "prefix-orf-policy" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "advertise-orf" || name == "route-reflector-client" || name == "next-hop-self" || name == "route-policy-in" || name == "default-weight" || name == "af-group" || name == "next-hop-unchanged-multipath" || name == "optimal-route-reflection-group" || name == "accept-own" || name == "route-policy-out" || name == "advertise-permanent-network")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    enable{YType::boolean, "enable"},
    cost_community_id{YType::uint32, "cost-community-id"},
    transitive{YType::boolean, "transitive"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| cost_community_id.is_set
	|| transitive.is_set
	|| cost_community_poi_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(transitive.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "cost-community-id" || name == "transitive" || name == "cost-community-poi-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    prefix_limit{YType::uint32, "prefix-limit"},
    warning_percentage{YType::uint32, "warning-percentage"},
    warning_only{YType::boolean, "warning-only"},
    restart_time{YType::uint32, "restart-time"},
    discard_extra_paths{YType::boolean, "discard-extra-paths"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix_limit.is_set
	|| warning_percentage.is_set
	|| warning_only.is_set
	|| restart_time.is_set
	|| discard_extra_paths.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(warning_percentage.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "warning-percentage" || name == "warning-only" || name == "restart-time" || name == "discard-extra-paths")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::AdvertiseL2vpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::~AdvertiseL2vpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::AdvertiseLocalL2vpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::~AdvertiseLocalL2vpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_send{YType::uint32, "stale-time-send"},
    stale_time_accept{YType::uint32, "stale-time-accept"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    if (is_presence_container) return true;
    return stale_time_send.is_set
	|| stale_time_accept.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_send.yfilter)
	|| ydk::is_set(stale_time_accept.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());
    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-send" || name == "stale-time-accept")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::SiteOfOrigin()
    :
    type{YType::enumeration, "type"},
    as_xx{YType::uint32, "as-xx"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"}
{

    yang_name = "site-of-origin"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as_xx.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| address_index.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as-xx" || name == "as" || name == "as-index" || name == "address" || name == "address-index")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::Import()
    :
    import_stitching{YType::boolean, "import-stitching"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"}
{

    yang_name = "import"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_data() const
{
    if (is_presence_container) return true;
    return import_stitching.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_stitching.yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-stitching" || name == "import-reoriginate" || name == "import-reoriginate-stitching")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_data() const
{
    if (is_presence_container) return true;
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivates()
    :
    bmp_activate(this, {"server_id"})
{

    yang_name = "bmp-activates"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bmp_activate.len(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.len(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate>();
        ent_->parent = this;
        bmp_activate.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bmp_activate.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_data() const
{
    if (is_presence_container) return true;
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate";
    ADD_KEY_TOKEN(server_id, "server-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    no_prepend{YType::empty, "no-prepend"},
    disable{YType::empty, "disable"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| no_prepend.is_set
	|| disable.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "no-prepend" || name == "disable" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::Password()
    :
    password_disable{YType::boolean, "password-disable"},
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_data() const
{
    if (is_presence_container) return true;
    return password_disable.is_set
	|| password.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password_disable.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-disable" || name == "password")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_data() const
{
    if (is_presence_container) return true;
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_number{YType::uint32, "cluster-id-number"},
    cluster_id_address{YType::str, "cluster-id-address"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_data() const
{
    if (is_presence_container) return true;
    return cluster_id_number.is_set
	|| cluster_id_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_number.yfilter)
	|| ydk::is_set(cluster_id_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());
    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-number" || name == "cluster-id-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::Tcpmss()
    :
    tcpmss_disable{YType::boolean, "tcpmss-disable"},
    mss{YType::uint32, "mss"}
{

    yang_name = "tcpmss"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_data() const
{
    if (is_presence_container) return true;
    return tcpmss_disable.is_set
	|| mss.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter)
	|| ydk::is_set(mss.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());
    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpmss-disable" || name == "mss")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
        ,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_in_filtering_message_buffers != nullptr)
    {
        _children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    number_of_buffers{YType::uint32, "number-of-buffers"},
    non_circular_buffer{YType::boolean, "non-circular-buffer"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    if (is_presence_container) return true;
    return number_of_buffers.is_set
	|| non_circular_buffer.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_buffers.yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());
    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-buffers" || name == "non-circular-buffer")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_data() const
{
    if (is_presence_container) return true;
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::AoKeychain()
    :
    ao_keychain_disable{YType::boolean, "ao-keychain-disable"},
    ao_keychain_name{YType::str, "ao-keychain-name"},
    ao_include_tcp_options{YType::boolean, "ao-include-tcp-options"},
    ao_accept_mismatch_connection{YType::boolean, "ao-accept-mismatch-connection"}
{

    yang_name = "ao-keychain"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::~AoKeychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::has_data() const
{
    if (is_presence_container) return true;
    return ao_keychain_disable.is_set
	|| ao_keychain_name.is_set
	|| ao_include_tcp_options.is_set
	|| ao_accept_mismatch_connection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ao_keychain_disable.yfilter)
	|| ydk::is_set(ao_keychain_name.yfilter)
	|| ydk::is_set(ao_include_tcp_options.yfilter)
	|| ydk::is_set(ao_accept_mismatch_connection.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ao-keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ao_keychain_disable.is_set || is_set(ao_keychain_disable.yfilter)) leaf_name_data.push_back(ao_keychain_disable.get_name_leafdata());
    if (ao_keychain_name.is_set || is_set(ao_keychain_name.yfilter)) leaf_name_data.push_back(ao_keychain_name.get_name_leafdata());
    if (ao_include_tcp_options.is_set || is_set(ao_include_tcp_options.yfilter)) leaf_name_data.push_back(ao_include_tcp_options.get_name_leafdata());
    if (ao_accept_mismatch_connection.is_set || is_set(ao_accept_mismatch_connection.yfilter)) leaf_name_data.push_back(ao_accept_mismatch_connection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ao-keychain-disable")
    {
        ao_keychain_disable = value;
        ao_keychain_disable.value_namespace = name_space;
        ao_keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-keychain-name")
    {
        ao_keychain_name = value;
        ao_keychain_name.value_namespace = name_space;
        ao_keychain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-include-tcp-options")
    {
        ao_include_tcp_options = value;
        ao_include_tcp_options.value_namespace = name_space;
        ao_include_tcp_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-accept-mismatch-connection")
    {
        ao_accept_mismatch_connection = value;
        ao_accept_mismatch_connection.value_namespace = name_space;
        ao_accept_mismatch_connection.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ao-keychain-disable")
    {
        ao_keychain_disable.yfilter = yfilter;
    }
    if(value_path == "ao-keychain-name")
    {
        ao_keychain_name.yfilter = yfilter;
    }
    if(value_path == "ao-include-tcp-options")
    {
        ao_include_tcp_options.yfilter = yfilter;
    }
    if(value_path == "ao-accept-mismatch-connection")
    {
        ao_accept_mismatch_connection.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AoKeychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ao-keychain-disable" || name == "ao-keychain-name" || name == "ao-include-tcp-options" || name == "ao-accept-mismatch-connection")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::ReceiveBufferSize()
    :
    socket_receive_size{YType::uint32, "socket-receive-size"},
    bgp_receive_size{YType::uint32, "bgp-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return socket_receive_size.is_set
	|| bgp_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_receive_size.yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());
    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-receive-size" || name == "bgp-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_data() const
{
    if (is_presence_container) return true;
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::SendBufferSize()
    :
    socket_send_size{YType::uint32, "socket-send-size"},
    bgp_send_size{YType::uint32, "bgp-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return socket_send_size.is_set
	|| bgp_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_send_size.yfilter)
	|| ydk::is_set(bgp_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());
    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-send-size" || name == "bgp-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::Timers()
    :
    keepalive_interval{YType::uint32, "keepalive-interval"},
    hold_time{YType::uint32, "hold-time"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| hold_time.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "hold-time" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_data() const
{
    if (is_presence_container) return true;
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
        ,
    graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
    , graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
{
    graceful_maintenance_local_preference->parent = this;
    graceful_maintenance_as_prepends->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data())
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation())
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_maintenance_local_preference != nullptr)
    {
        _children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    if(graceful_maintenance_as_prepends != nullptr)
    {
        _children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-local-preference" || name == "graceful-maintenance-as-prepends" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    if (is_presence_container) return true;
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"},
    as_prepends{YType::uint32, "as-prepends"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    if (is_presence_container) return true;
    return gshut_prepends_disable.is_set
	|| as_prepends.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter)
	|| ydk::is_set(as_prepends.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());
    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-prepends-disable" || name == "as-prepends")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::DefaultVrf()
    :
    bgp_entity(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity>())
    , global(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global>())
{
    bgp_entity->parent = this;
    global->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "four-byte-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::~DefaultVrf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return (bgp_entity !=  nullptr && bgp_entity->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_entity !=  nullptr && bgp_entity->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-entity")
    {
        if(bgp_entity == nullptr)
        {
            bgp_entity = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity>();
        }
        return bgp_entity;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_entity != nullptr)
    {
        _children["bgp-entity"] = bgp_entity;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-entity" || name == "global")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::BgpEntity()
    :
    neighbors(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors>())
    , neighbor_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups>())
    , af_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups>())
    , session_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups>())
{
    neighbors->parent = this;
    neighbor_groups->parent = this;
    af_groups->parent = this;
    session_groups->parent = this;

    yang_name = "bgp-entity"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::~BgpEntity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (neighbor_groups !=  nullptr && neighbor_groups->has_data())
	|| (af_groups !=  nullptr && af_groups->has_data())
	|| (session_groups !=  nullptr && session_groups->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (neighbor_groups !=  nullptr && neighbor_groups->has_operation())
	|| (af_groups !=  nullptr && af_groups->has_operation())
	|| (session_groups !=  nullptr && session_groups->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-entity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "neighbor-groups")
    {
        if(neighbor_groups == nullptr)
        {
            neighbor_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups>();
        }
        return neighbor_groups;
    }

    if(child_yang_name == "af-groups")
    {
        if(af_groups == nullptr)
        {
            af_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups>();
        }
        return af_groups;
    }

    if(child_yang_name == "session-groups")
    {
        if(session_groups == nullptr)
        {
            session_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups>();
        }
        return session_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(neighbor_groups != nullptr)
    {
        _children["neighbor-groups"] = neighbor_groups;
    }

    if(af_groups != nullptr)
    {
        _children["af-groups"] = af_groups;
    }

    if(session_groups != nullptr)
    {
        _children["session-groups"] = session_groups;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "neighbor-groups" || name == "af-groups" || name == "session-groups")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbors()
    :
    neighbor(this, {"neighbor_address"})
    , neighbor_prefix_length(this, {"prefix_length", "neighbor_address"})
{

    yang_name = "neighbors"; yang_parent_name = "bgp-entity"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::~Neighbors()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_prefix_length.len(); index++)
    {
        if(neighbor_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_prefix_length.len(); index++)
    {
        if(neighbor_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "neighbor-prefix-length")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength>();
        ent_->parent = this;
        neighbor_prefix_length.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : neighbor_prefix_length.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "neighbor-prefix-length")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    session_group_add_member{YType::str, "session-group-add-member"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    shutdown{YType::boolean, "shutdown"},
    description{YType::str, "description"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    neighbor_graceful_restart{YType::enumeration, "neighbor-graceful-restart"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    max_peers{YType::uint32, "max-peers"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    ttl_security{YType::boolean, "ttl-security"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    remote_as_list{YType::str, "remote-as-list"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    update_source_interface{YType::str, "update-source-interface"}
        ,
    neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs>())
    , local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress>())
    , bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates>())
    , ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop>())
    , remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs>())
    , local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs>())
    , password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password>())
    , advertisement_interval(nullptr) // presence node
    , neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId>())
    , tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss>())
    , tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos>())
    , update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering>())
    , msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut>())
    , ao_keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AoKeychain>())
    , receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize>())
    , msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn>())
    , send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize>())
    , timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers>())
    , keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain>())
    , graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance>())
{
    neighbor_afs->parent = this;
    local_address->parent = this;
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    remote_as->parent = this;
    local_as->parent = this;
    password->parent = this;
    neighbor_cluster_id->parent = this;
    tcpmss->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;
    msg_log_out->parent = this;
    ao_keychain->parent = this;
    receive_buffer_size->parent = this;
    msg_log_in->parent = this;
    send_buffer_size->parent = this;
    timers->parent = this;
    keychain->parent = this;
    graceful_maintenance->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::~Neighbor()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| session_group_add_member.is_set
	|| egress_peer_engineering.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| shutdown.is_set
	|| description.is_set
	|| neighbor_group_add_member.is_set
	|| ebgp_recv_dmz.is_set
	|| neighbor_graceful_restart.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| session_open_mode.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| suppress_all_capabilities.is_set
	|| max_peers.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| additional_paths_send_capability.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| bfd_enable_modes.is_set
	|| ttl_security.is_set
	|| neighbor_graceful_restart_time.is_set
	|| bfd_multiplier.is_set
	|| bfd_minimum_interval.is_set
	|| remote_as_list.is_set
	|| additional_paths_receive_capability.is_set
	|| ignore_connected_check_ebgp.is_set
	|| suppress_four_byte_as_capability.is_set
	|| update_source_interface.is_set
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (ao_keychain !=  nullptr && ao_keychain->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (ao_keychain !=  nullptr && ao_keychain->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-afs")
    {
        if(neighbor_afs == nullptr)
        {
            neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs>();
        }
        return neighbor_afs;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "ao-keychain")
    {
        if(ao_keychain == nullptr)
        {
            ao_keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AoKeychain>();
        }
        return ao_keychain;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_afs != nullptr)
    {
        _children["neighbor-afs"] = neighbor_afs;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(bmp_activates != nullptr)
    {
        _children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(remote_as != nullptr)
    {
        _children["remote-as"] = remote_as;
    }

    if(local_as != nullptr)
    {
        _children["local-as"] = local_as;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(advertisement_interval != nullptr)
    {
        _children["advertisement-interval"] = advertisement_interval;
    }

    if(neighbor_cluster_id != nullptr)
    {
        _children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(tcpmss != nullptr)
    {
        _children["tcpmss"] = tcpmss;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        _children["update-in-filtering"] = update_in_filtering;
    }

    if(msg_log_out != nullptr)
    {
        _children["msg-log-out"] = msg_log_out;
    }

    if(ao_keychain != nullptr)
    {
        _children["ao-keychain"] = ao_keychain;
    }

    if(receive_buffer_size != nullptr)
    {
        _children["receive-buffer-size"] = receive_buffer_size;
    }

    if(msg_log_in != nullptr)
    {
        _children["msg-log-in"] = msg_log_in;
    }

    if(send_buffer_size != nullptr)
    {
        _children["send-buffer-size"] = send_buffer_size;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(keychain != nullptr)
    {
        _children["keychain"] = keychain;
    }

    if(graceful_maintenance != nullptr)
    {
        _children["graceful-maintenance"] = graceful_maintenance;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-afs" || name == "local-address" || name == "bmp-activates" || name == "ebgp-multihop" || name == "remote-as" || name == "local-as" || name == "password" || name == "advertisement-interval" || name == "neighbor-cluster-id" || name == "tcpmss" || name == "tos" || name == "update-in-filtering" || name == "msg-log-out" || name == "ao-keychain" || name == "receive-buffer-size" || name == "msg-log-in" || name == "send-buffer-size" || name == "timers" || name == "keychain" || name == "graceful-maintenance" || name == "neighbor-address" || name == "internal-vpn-client-ibgp-ce" || name == "session-group-add-member" || name == "egress-peer-engineering" || name == "neighbor-graceful-restart-stalepath-time" || name == "shutdown" || name == "description" || name == "neighbor-group-add-member" || name == "ebgp-recv-dmz" || name == "neighbor-graceful-restart" || name == "enforce-first-as" || name == "idle-watch-time" || name == "session-open-mode" || name == "rpki-origin-as-validation-disable" || name == "ebgp-send-dmz-enable-modes" || name == "suppress-all-capabilities" || name == "max-peers" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "additional-paths-send-capability" || name == "propagate-dmz-link-bandwidth" || name == "bfd-enable-modes" || name == "ttl-security" || name == "neighbor-graceful-restart-time" || name == "bfd-multiplier" || name == "bfd-minimum-interval" || name == "remote-as-list" || name == "additional-paths-receive-capability" || name == "ignore-connected-check-ebgp" || name == "suppress-four-byte-as-capability" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAfs()
    :
    neighbor_af(this, {"af_name"})
{

    yang_name = "neighbor-afs"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::~NeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_af.len(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.len(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-af")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf>();
        ent_->parent = this;
        neighbor_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    as_override{YType::boolean, "as-override"},
    multipath{YType::empty, "multipath"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    activate{YType::empty, "activate"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    next_hop_self{YType::boolean, "next-hop-self"},
    route_policy_in{YType::str, "route-policy-in"},
    default_weight{YType::uint32, "default-weight"},
    af_group{YType::str, "af-group"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    optimal_route_reflection_group{YType::str, "optimal-route-reflection-group"},
    accept_own{YType::boolean, "accept-own"},
    route_policy_out{YType::str, "route-policy-out"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"}
        ,
    aigp_cost_community(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity>())
    , advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>())
    , advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable>())
    , maximum_prefixes(nullptr) // presence node
    , remove_private_as_entire_as_path_inbound(nullptr) // presence node
    , advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>())
    , advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn>())
    , advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn>())
    , neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
    , advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6>())
    , advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6>())
    , import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import>())
    , default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate>())
    , soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration>())
    , advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>())
    , advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4>())
    , advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4>())
    , remove_private_as_entire_as_path(nullptr) // presence node
    , advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>())
{
    aigp_cost_community->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_def_imp_disable_v4->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    advertise_v6->parent = this;
    advertise_local_v6->parent = this;
    import->parent = this;
    default_originate->parent = this;
    soft_reconfiguration->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    advertise_v4->parent = this;
    advertise_local_v4->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;

    yang_name = "neighbor-af"; yang_parent_name = "neighbor-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| l2vpn_signalling.is_set
	|| send_ext_community_ebgp.is_set
	|| accept_route_legacy_rt.is_set
	|| send_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| next_hop_unchanged.is_set
	|| advertise_local_labeled_route.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| flowspec_validation.is_set
	|| encapsulation_type.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| enforce_multiple_labels.is_set
	|| as_override.is_set
	|| multipath.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| activate.is_set
	|| prefix_orf_policy.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| advertise_orf.is_set
	|| route_reflector_client.is_set
	|| next_hop_self.is_set
	|| route_policy_in.is_set
	|| default_weight.is_set
	|| af_group.is_set
	|| next_hop_unchanged_multipath.is_set
	|| optimal_route_reflection_group.is_set
	|| accept_own.is_set
	|| route_policy_out.is_set
	|| advertise_permanent_network.is_set
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(l2vpn_signalling.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(send_multicast_attr.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(optimal_route_reflection_group.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.yfilter)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.yfilter)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (optimal_route_reflection_group.is_set || is_set(optimal_route_reflection_group.yfilter)) leaf_name_data.push_back(optimal_route_reflection_group.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aigp_cost_community != nullptr)
    {
        _children["aigp-cost-community"] = aigp_cost_community;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        _children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        _children["advertise-disable"] = advertise_disable;
    }

    if(maximum_prefixes != nullptr)
    {
        _children["maximum-prefixes"] = maximum_prefixes;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        _children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(advertise_def_imp_disable_v4 != nullptr)
    {
        _children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        _children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        _children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        _children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(advertise_v6 != nullptr)
    {
        _children["advertise-v6"] = advertise_v6;
    }

    if(advertise_local_v6 != nullptr)
    {
        _children["advertise-local-v6"] = advertise_local_v6;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    if(soft_reconfiguration != nullptr)
    {
        _children["soft-reconfiguration"] = soft_reconfiguration;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        _children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(advertise_v4 != nullptr)
    {
        _children["advertise-v4"] = advertise_v4;
    }

    if(advertise_local_v4 != nullptr)
    {
        _children["advertise-local-v4"] = advertise_local_v4;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        _children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        _children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
        l2vpn_signalling.value_namespace = name_space;
        l2vpn_signalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
        send_multicast_attr.value_namespace = name_space;
        send_multicast_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimal-route-reflection-group")
    {
        optimal_route_reflection_group = value;
        optimal_route_reflection_group.value_namespace = name_space;
        optimal_route_reflection_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "optimal-route-reflection-group")
    {
        optimal_route_reflection_group.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aigp-cost-community" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "maximum-prefixes" || name == "remove-private-as-entire-as-path-inbound" || name == "advertise-def-imp-disable-v4" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "advertise-v6" || name == "advertise-local-v6" || name == "import" || name == "default-originate" || name == "soft-reconfiguration" || name == "advertise-vrf-imp-disable-v6" || name == "advertise-v4" || name == "advertise-local-v4" || name == "remove-private-as-entire-as-path" || name == "advertise-vrf-imp-disable-v4" || name == "af-name" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "l2vpn-signalling" || name == "send-ext-community-ebgp" || name == "accept-route-legacy-rt" || name == "send-community-ebgp" || name == "send-multicast-attr" || name == "next-hop-unchanged" || name == "advertise-local-labeled-route" || name == "rpki-origin-as-validation-disable" || name == "flowspec-validation" || name == "encapsulation-type" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "enforce-multiple-labels" || name == "as-override" || name == "multipath" || name == "send-community-ebgp-graceful-shutdown" || name == "activate" || name == "prefix-orf-policy" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "advertise-orf" || name == "route-reflector-client" || name == "next-hop-self" || name == "route-policy-in" || name == "default-weight" || name == "af-group" || name == "next-hop-unchanged-multipath" || name == "optimal-route-reflection-group" || name == "accept-own" || name == "route-policy-out" || name == "advertise-permanent-network")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    enable{YType::boolean, "enable"},
    cost_community_id{YType::uint32, "cost-community-id"},
    transitive{YType::boolean, "transitive"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| cost_community_id.is_set
	|| transitive.is_set
	|| cost_community_poi_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(transitive.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "cost-community-id" || name == "transitive" || name == "cost-community-poi-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    prefix_limit{YType::uint32, "prefix-limit"},
    warning_percentage{YType::uint32, "warning-percentage"},
    warning_only{YType::boolean, "warning-only"},
    restart_time{YType::uint32, "restart-time"},
    discard_extra_paths{YType::boolean, "discard-extra-paths"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix_limit.is_set
	|| warning_percentage.is_set
	|| warning_only.is_set
	|| restart_time.is_set
	|| discard_extra_paths.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(warning_percentage.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "warning-percentage" || name == "warning-only" || name == "restart-time" || name == "discard-extra-paths")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    af_name{YType::enumeration, "af-name"},
    adv_option{YType::enumeration, "adv-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| adv_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "adv-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::AdvertiseL2vpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::~AdvertiseL2vpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::AdvertiseLocalL2vpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::~AdvertiseLocalL2vpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

const Enum::YLeaf BgpSiteOfOrigin::as {0, "as"};
const Enum::YLeaf BgpSiteOfOrigin::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf BgpSiteOfOrigin::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf BgpAsn::as_plain {1, "as-plain"};
const Enum::YLeaf BgpAsn::asdot {2, "asdot"};

const Enum::YLeaf BgpAdvRt::bgp_regular_rt {0, "bgp-regular-rt"};
const Enum::YLeaf BgpAdvRt::bgp_stitching_rt {1, "bgp-stitching-rt"};

const Enum::YLeaf BgpAfEncapsulation::vx_lan {1, "vx-lan"};

const Enum::YLeaf BgpMvpnSfsSelect::all_paths {1, "all-paths"};
const Enum::YLeaf BgpMvpnSfsSelect::highest_ip_address {2, "highest-ip-address"};

const Enum::YLeaf BgpNbrgr::true_ {0, "true"};
const Enum::YLeaf BgpNbrgr::false_ {1, "false"};

const Enum::YLeaf BgpAigpCfgPoi::pre_best_path {1, "pre-best-path"};
const Enum::YLeaf BgpAigpCfgPoi::igp_cost {2, "igp-cost"};

const Enum::YLeaf BgpBfdEnableMode::disable {0, "disable"};
const Enum::YLeaf BgpBfdEnableMode::default_ {1, "default"};
const Enum::YLeaf BgpBfdEnableMode::strict {2, "strict"};

const Enum::YLeaf BgpRpkiTransport::tcp {0, "tcp"};
const Enum::YLeaf BgpRpkiTransport::ssh {1, "ssh"};

const Enum::YLeaf BmpRouteDirection::inbound {1, "inbound"};

const Enum::YLeaf BgpSendMcastAttrCfg::enable {1, "enable"};
const Enum::YLeaf BgpSendMcastAttrCfg::disable {2, "disable"};

const Enum::YLeaf BgpRnhInstallFormat::ext_comm {0, "ext-comm"};
const Enum::YLeaf BgpRnhInstallFormat::ext_comm_only {1, "ext-comm-only"};

const Enum::YLeaf BgpRouteDistinguisher::auto_ {1, "auto"};
const Enum::YLeaf BgpRouteDistinguisher::as {2, "as"};
const Enum::YLeaf BgpRouteDistinguisher::four_byte_as {3, "four-byte-as"};
const Enum::YLeaf BgpRouteDistinguisher::ipv4_address {4, "ipv4-address"};

const Enum::YLeaf BgpOrf::none {0, "none"};
const Enum::YLeaf BgpOrf::receive {1, "receive"};
const Enum::YLeaf BgpOrf::send {2, "send"};
const Enum::YLeaf BgpOrf::both {3, "both"};

const Enum::YLeaf BgpVrfRouteTarget::as {0, "as"};
const Enum::YLeaf BgpVrfRouteTarget::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf BgpVrfRouteTarget::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf BgpEbgpSendDmzEnableMode::disable {0, "disable"};
const Enum::YLeaf BgpEbgpSendDmzEnableMode::default_ {1, "default"};
const Enum::YLeaf BgpEbgpSendDmzEnableMode::cumulative {2, "cumulative"};

const Enum::YLeaf BgpClusterId::number {1, "number"};
const Enum::YLeaf BgpClusterId::ipv4_address {2, "ipv4-address"};

const Enum::YLeaf BgpTcpMode::either {0, "either"};
const Enum::YLeaf BgpTcpMode::active_only {1, "active-only"};
const Enum::YLeaf BgpTcpMode::passive_only {2, "passive-only"};

const Enum::YLeaf BgpAigpCfg::enable {1, "enable"};
const Enum::YLeaf BgpAigpCfg::disable {2, "disable"};

const Enum::YLeaf BmpPolicySelect::post_policy {2, "post-policy"};

const Enum::YLeaf BgpFlowspecValidationCfg::enable {1, "enable"};
const Enum::YLeaf BgpFlowspecValidationCfg::disable {2, "disable"};
const Enum::YLeaf BgpFlowspecValidationCfg::redirect_nexhop_disable {3, "redirect-nexhop-disable"};

const Enum::YLeaf BgpSignal::bgp_disable {1, "bgp-disable"};
const Enum::YLeaf BgpSignal::ldp_disable {2, "ldp-disable"};

const Enum::YLeaf BgpGlobalRouteDistinguisher::as {2, "as"};
const Enum::YLeaf BgpGlobalRouteDistinguisher::four_byte_as {3, "four-byte-as"};
const Enum::YLeaf BgpGlobalRouteDistinguisher::ipv4_address {4, "ipv4-address"};

const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv {1, "bgp-cfg-adv"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_reorg {2, "bgp-cfg-adv-reorg"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_disable {3, "bgp-cfg-adv-disable"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_local {4, "bgp-cfg-adv-local"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_def_vrf_imp_disable {5, "bgp-cfg-adv-def-vrf-imp-disable"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_vrf_re_imp_disable {6, "bgp-cfg-adv-vrf-re-imp-disable"};


}
}


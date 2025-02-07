
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_vrrp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_vrrp_cfg {

Vrrp::Vrrp()
    :
    enable{YType::empty, "enable"}
        ,
    logging(std::make_shared<Vrrp::Logging>())
    , interfaces(std::make_shared<Vrrp::Interfaces>())
{
    logging->parent = this;
    interfaces->parent = this;

    yang_name = "vrrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-vrrp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Vrrp::~Vrrp()
{
}

bool Vrrp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Vrrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Vrrp::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Vrrp::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Vrrp::clone_ptr() const
{
    return std::make_shared<Vrrp>();
}

std::string Vrrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vrrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vrrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vrrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "interfaces" || name == "enable")
        return true;
    return false;
}

Vrrp::Logging::Logging()
    :
    state_change_disable{YType::empty, "state-change-disable"}
{

    yang_name = "logging"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Vrrp::Logging::~Logging()
{
}

bool Vrrp::Logging::has_data() const
{
    if (is_presence_container) return true;
    return state_change_disable.is_set;
}

bool Vrrp::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state_change_disable.yfilter);
}

std::string Vrrp::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_change_disable.is_set || is_set(state_change_disable.yfilter)) leaf_name_data.push_back(state_change_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable = value;
        state_change_disable.value_namespace = name_space;
        state_change_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-change-disable")
    {
        state_change_disable.yfilter = yfilter;
    }
}

bool Vrrp::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-change-disable")
        return true;
    return false;
}

Vrrp::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Vrrp::Interfaces::~Interfaces()
{
}

bool Vrrp::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    mac_refresh{YType::uint32, "mac-refresh"}
        ,
    ipv6(std::make_shared<Vrrp::Interfaces::Interface::Ipv6>())
    , delay(nullptr) // presence node
    , ipv4(std::make_shared<Vrrp::Interfaces::Interface::Ipv4>())
    , bfd(std::make_shared<Vrrp::Interfaces::Interface::Bfd>())
{
    ipv6->parent = this;
    ipv4->parent = this;
    bfd->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Vrrp::Interfaces::Interface::~Interface()
{
}

bool Vrrp::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| mac_refresh.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Vrrp::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Vrrp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Vrrp::Interfaces::Interface::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Vrrp::Interfaces::Interface::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Vrrp::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
        mac_refresh.value_namespace = name_space;
        mac_refresh.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "delay" || name == "ipv4" || name == "bfd" || name == "interface-name" || name == "mac-refresh")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Ipv6()
    :
    version3(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3>())
    , slave_virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters>())
{
    version3->parent = this;
    slave_virtual_routers->parent = this;

    yang_name = "ipv6"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::~Ipv6()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (version3 !=  nullptr && version3->has_data())
	|| (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (version3 !=  nullptr && version3->has_operation())
	|| (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version3")
    {
        if(version3 == nullptr)
        {
            version3 = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3>();
        }
        return version3;
    }

    if(child_yang_name == "slave-virtual-routers")
    {
        if(slave_virtual_routers == nullptr)
        {
            slave_virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters>();
        }
        return slave_virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(version3 != nullptr)
    {
        _children["version3"] = version3;
    }

    if(slave_virtual_routers != nullptr)
    {
        _children["slave-virtual-routers"] = slave_virtual_routers;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version3" || name == "slave-virtual-routers")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::Version3()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters>())
{
    virtual_routers->parent = this;

    yang_name = "version3"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::~Version3()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::has_data() const
{
    if (is_presence_container) return true;
    return (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::has_operation() const
{
    return is_set(yfilter)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters>();
        }
        return virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(virtual_routers != nullptr)
    {
        _children["virtual-routers"] = virtual_routers;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-routers")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouters()
    :
    virtual_router(this, {"vr_id"})
{

    yang_name = "virtual-routers"; yang_parent_name = "version3"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtual_router.len(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.len(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter>();
        ent_->parent = this;
        virtual_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtual_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    vr_id{YType::uint32, "vr-id"},
    bfd{YType::str, "bfd"},
    priority{YType::uint32, "priority"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    preempt{YType::uint32, "preempt"},
    session_name{YType::str, "session-name"}
        ,
    global_ipv6_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses>())
    , tracks(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks>())
    , timer(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer>())
    , tracked_objects(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects>())
    , link_local_ipv6_address(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address>())
{
    global_ipv6_addresses->parent = this;
    tracks->parent = this;
    timer->parent = this;
    tracked_objects->parent = this;
    link_local_ipv6_address->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::has_data() const
{
    if (is_presence_container) return true;
    return vr_id.is_set
	|| bfd.is_set
	|| priority.is_set
	|| accept_mode_disable.is_set
	|| preempt.is_set
	|| session_name.is_set
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data())
	|| (tracks !=  nullptr && tracks->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vr_id.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation())
	|| (tracks !=  nullptr && tracks->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router";
    ADD_KEY_TOKEN(vr_id, "vr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.yfilter)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses == nullptr)
        {
            global_ipv6_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses>();
        }
        return global_ipv6_addresses;
    }

    if(child_yang_name == "tracks")
    {
        if(tracks == nullptr)
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks>();
        }
        return tracks;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address == nullptr)
        {
            link_local_ipv6_address = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address>();
        }
        return link_local_ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global_ipv6_addresses != nullptr)
    {
        _children["global-ipv6-addresses"] = global_ipv6_addresses;
    }

    if(tracks != nullptr)
    {
        _children["tracks"] = tracks;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(tracked_objects != nullptr)
    {
        _children["tracked-objects"] = tracked_objects;
    }

    if(link_local_ipv6_address != nullptr)
    {
        _children["link-local-ipv6-address"] = link_local_ipv6_address;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
        vr_id.value_namespace = name_space;
        vr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vr-id")
    {
        vr_id.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-addresses" || name == "tracks" || name == "timer" || name == "tracked-objects" || name == "link-local-ipv6-address" || name == "vr-id" || name == "bfd" || name == "priority" || name == "accept-mode-disable" || name == "preempt" || name == "session-name")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Addresses()
    :
    global_ipv6_address(this, {"ip_address"})
{

    yang_name = "global-ipv6-addresses"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::~GlobalIpv6Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_ipv6_address.len(); index++)
    {
        if(global_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<global_ipv6_address.len(); index++)
    {
        if(global_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-address")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address>();
        ent_->parent = this;
        global_ipv6_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : global_ipv6_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::~GlobalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Tracks()
    :
    track(this, {"interface_name"})
{

    yang_name = "tracks"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::~Tracks()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track>();
        ent_->parent = this;
        track.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : track.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{

    yang_name = "track"; yang_parent_name = "tracks"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::~Track()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| priority.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::empty, "forced"}
{

    yang_name = "timer"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::~Timer()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::has_data() const
{
    if (is_presence_container) return true;
    return advertisement_time_in_msec.is_set
	|| advertisement_time_in_sec.is_set
	|| forced.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement_time_in_msec.yfilter)
	|| ydk::is_set(advertisement_time_in_sec.yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.yfilter)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.yfilter)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
        advertisement_time_in_msec.value_namespace = name_space;
        advertisement_time_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
        advertisement_time_in_sec.value_namespace = name_space;
        advertisement_time_in_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec.yfilter = yfilter;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-time-in-msec" || name == "advertisement-time-in-sec" || name == "forced")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
    :
    tracked_object(this, {"object_name"})
{

    yang_name = "tracked-objects"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::~TrackedObjects()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        ent_->parent = this;
        tracked_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracked_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object";
    ADD_KEY_TOKEN(object_name, "object-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    ip_address{YType::str, "ip-address"},
    auto_configure{YType::boolean, "auto-configure"}
{

    yang_name = "link-local-ipv6-address"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::~LinkLocalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| auto_configure.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(auto_configure.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (auto_configure.is_set || is_set(auto_configure.yfilter)) leaf_name_data.push_back(auto_configure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-configure")
    {
        auto_configure = value;
        auto_configure.value_namespace = name_space;
        auto_configure.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "auto-configure")
    {
        auto_configure.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "auto-configure")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouters()
    :
    slave_virtual_router(this, {"slave_virtual_router_id"})
{

    yang_name = "slave-virtual-routers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::~SlaveVirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slave_virtual_router.len(); index++)
    {
        if(slave_virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<slave_virtual_router.len(); index++)
    {
        if(slave_virtual_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-virtual-router")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter>();
        ent_->parent = this;
        slave_virtual_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slave_virtual_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-virtual-router")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::SlaveVirtualRouter()
    :
    slave_virtual_router_id{YType::uint32, "slave-virtual-router-id"},
    follow{YType::str, "follow"},
    accept_mode_disable{YType::empty, "accept-mode-disable"}
        ,
    link_local_ipv6_address(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address>())
    , global_ipv6_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses>())
{
    link_local_ipv6_address->parent = this;
    global_ipv6_addresses->parent = this;

    yang_name = "slave-virtual-router"; yang_parent_name = "slave-virtual-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::~SlaveVirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::has_data() const
{
    if (is_presence_container) return true;
    return slave_virtual_router_id.is_set
	|| follow.is_set
	|| accept_mode_disable.is_set
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_data())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_virtual_router_id.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| (link_local_ipv6_address !=  nullptr && link_local_ipv6_address->has_operation())
	|| (global_ipv6_addresses !=  nullptr && global_ipv6_addresses->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-router";
    ADD_KEY_TOKEN(slave_virtual_router_id, "slave-virtual-router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.yfilter)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-local-ipv6-address")
    {
        if(link_local_ipv6_address == nullptr)
        {
            link_local_ipv6_address = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address>();
        }
        return link_local_ipv6_address;
    }

    if(child_yang_name == "global-ipv6-addresses")
    {
        if(global_ipv6_addresses == nullptr)
        {
            global_ipv6_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses>();
        }
        return global_ipv6_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_local_ipv6_address != nullptr)
    {
        _children["link-local-ipv6-address"] = link_local_ipv6_address;
    }

    if(global_ipv6_addresses != nullptr)
    {
        _children["global-ipv6-addresses"] = global_ipv6_addresses;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
        slave_virtual_router_id.value_namespace = name_space;
        slave_virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-local-ipv6-address" || name == "global-ipv6-addresses" || name == "slave-virtual-router-id" || name == "follow" || name == "accept-mode-disable")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::LinkLocalIpv6Address()
    :
    ip_address{YType::str, "ip-address"},
    auto_configure{YType::boolean, "auto-configure"}
{

    yang_name = "link-local-ipv6-address"; yang_parent_name = "slave-virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::~LinkLocalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| auto_configure.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(auto_configure.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (auto_configure.is_set || is_set(auto_configure.yfilter)) leaf_name_data.push_back(auto_configure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-configure")
    {
        auto_configure = value;
        auto_configure.value_namespace = name_space;
        auto_configure.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "auto-configure")
    {
        auto_configure.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "auto-configure")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Addresses()
    :
    global_ipv6_address(this, {"ip_address"})
{

    yang_name = "global-ipv6-addresses"; yang_parent_name = "slave-virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::~GlobalIpv6Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_ipv6_address.len(); index++)
    {
        if(global_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<global_ipv6_address.len(); index++)
    {
        if(global_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-ipv6-address")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address>();
        ent_->parent = this;
        global_ipv6_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : global_ipv6_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ipv6-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::GlobalIpv6Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "global-ipv6-address"; yang_parent_name = "global-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::~GlobalIpv6Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-ipv6-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Delay::Delay()
    :
    min_delay{YType::uint32, "min-delay"},
    reload_delay{YType::uint32, "reload-delay"}
{

    yang_name = "delay"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Vrrp::Interfaces::Interface::Delay::~Delay()
{
}

bool Vrrp::Interfaces::Interface::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min_delay.is_set
	|| reload_delay.is_set;
}

bool Vrrp::Interfaces::Interface::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_delay.yfilter)
	|| ydk::is_set(reload_delay.yfilter);
}

std::string Vrrp::Interfaces::Interface::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (reload_delay.is_set || is_set(reload_delay.yfilter)) leaf_name_data.push_back(reload_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload-delay")
    {
        reload_delay = value;
        reload_delay.value_namespace = name_space;
        reload_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
    if(value_path == "reload-delay")
    {
        reload_delay.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-delay" || name == "reload-delay")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Ipv4()
    :
    version3(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3>())
    , slave_virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters>())
    , version2(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2>())
{
    version3->parent = this;
    slave_virtual_routers->parent = this;
    version2->parent = this;

    yang_name = "ipv4"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::~Ipv4()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (version3 !=  nullptr && version3->has_data())
	|| (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_data())
	|| (version2 !=  nullptr && version2->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (version3 !=  nullptr && version3->has_operation())
	|| (slave_virtual_routers !=  nullptr && slave_virtual_routers->has_operation())
	|| (version2 !=  nullptr && version2->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version3")
    {
        if(version3 == nullptr)
        {
            version3 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3>();
        }
        return version3;
    }

    if(child_yang_name == "slave-virtual-routers")
    {
        if(slave_virtual_routers == nullptr)
        {
            slave_virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters>();
        }
        return slave_virtual_routers;
    }

    if(child_yang_name == "version2")
    {
        if(version2 == nullptr)
        {
            version2 = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2>();
        }
        return version2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(version3 != nullptr)
    {
        _children["version3"] = version3;
    }

    if(slave_virtual_routers != nullptr)
    {
        _children["slave-virtual-routers"] = slave_virtual_routers;
    }

    if(version2 != nullptr)
    {
        _children["version2"] = version2;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version3" || name == "slave-virtual-routers" || name == "version2")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::Version3()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters>())
{
    virtual_routers->parent = this;

    yang_name = "version3"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::~Version3()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::has_data() const
{
    if (is_presence_container) return true;
    return (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::has_operation() const
{
    return is_set(yfilter)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters>();
        }
        return virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(virtual_routers != nullptr)
    {
        _children["virtual-routers"] = virtual_routers;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-routers")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouters()
    :
    virtual_router(this, {"vr_id"})
{

    yang_name = "virtual-routers"; yang_parent_name = "version3"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtual_router.len(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.len(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter>();
        ent_->parent = this;
        virtual_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtual_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    vr_id{YType::uint32, "vr-id"},
    session_name{YType::str, "session-name"},
    bfd{YType::str, "bfd"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    preempt{YType::uint32, "preempt"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    priority{YType::uint32, "priority"}
        ,
    timer(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer>())
    , secondary_ipv4_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>())
    , tracked_objects(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects>())
    , tracks(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks>())
{
    timer->parent = this;
    secondary_ipv4_addresses->parent = this;
    tracked_objects->parent = this;
    tracks->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::has_data() const
{
    if (is_presence_container) return true;
    return vr_id.is_set
	|| session_name.is_set
	|| bfd.is_set
	|| primary_ipv4_address.is_set
	|| preempt.is_set
	|| accept_mode_disable.is_set
	|| priority.is_set
	|| (timer !=  nullptr && timer->has_data())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data())
	|| (tracks !=  nullptr && tracks->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vr_id.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (timer !=  nullptr && timer->has_operation())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation())
	|| (tracks !=  nullptr && tracks->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router";
    ADD_KEY_TOKEN(vr_id, "vr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.yfilter)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects>();
        }
        return tracked_objects;
    }

    if(child_yang_name == "tracks")
    {
        if(tracks == nullptr)
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks>();
        }
        return tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(secondary_ipv4_addresses != nullptr)
    {
        _children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    if(tracked_objects != nullptr)
    {
        _children["tracked-objects"] = tracked_objects;
    }

    if(tracks != nullptr)
    {
        _children["tracks"] = tracks;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
        vr_id.value_namespace = name_space;
        vr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vr-id")
    {
        vr_id.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer" || name == "secondary-ipv4-addresses" || name == "tracked-objects" || name == "tracks" || name == "vr-id" || name == "session-name" || name == "bfd" || name == "primary-ipv4-address" || name == "preempt" || name == "accept-mode-disable" || name == "priority")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::empty, "forced"}
{

    yang_name = "timer"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::~Timer()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::has_data() const
{
    if (is_presence_container) return true;
    return advertisement_time_in_msec.is_set
	|| advertisement_time_in_sec.is_set
	|| forced.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement_time_in_msec.yfilter)
	|| ydk::is_set(advertisement_time_in_sec.yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.yfilter)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.yfilter)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
        advertisement_time_in_msec.value_namespace = name_space;
        advertisement_time_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
        advertisement_time_in_sec.value_namespace = name_space;
        advertisement_time_in_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec.yfilter = yfilter;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-time-in-msec" || name == "advertisement-time-in-sec" || name == "forced")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
    :
    secondary_ipv4_address(this, {"ip_address"})
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_ipv4_address.len(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.len(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        ent_->parent = this;
        secondary_ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary_ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
    :
    tracked_object(this, {"object_name"})
{

    yang_name = "tracked-objects"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::~TrackedObjects()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        ent_->parent = this;
        tracked_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracked_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object";
    ADD_KEY_TOKEN(object_name, "object-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Tracks()
    :
    track(this, {"interface_name"})
{

    yang_name = "tracks"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::~Tracks()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track>();
        ent_->parent = this;
        track.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : track.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{

    yang_name = "track"; yang_parent_name = "tracks"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::~Track()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| priority.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouters()
    :
    slave_virtual_router(this, {"slave_virtual_router_id"})
{

    yang_name = "slave-virtual-routers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::~SlaveVirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slave_virtual_router.len(); index++)
    {
        if(slave_virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<slave_virtual_router.len(); index++)
    {
        if(slave_virtual_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-virtual-router")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter>();
        ent_->parent = this;
        slave_virtual_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slave_virtual_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-virtual-router")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SlaveVirtualRouter()
    :
    slave_virtual_router_id{YType::uint32, "slave-virtual-router-id"},
    follow{YType::str, "follow"},
    accept_mode_disable{YType::empty, "accept-mode-disable"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"}
        ,
    secondary_ipv4_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses>())
{
    secondary_ipv4_addresses->parent = this;

    yang_name = "slave-virtual-router"; yang_parent_name = "slave-virtual-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::~SlaveVirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::has_data() const
{
    if (is_presence_container) return true;
    return slave_virtual_router_id.is_set
	|| follow.is_set
	|| accept_mode_disable.is_set
	|| primary_ipv4_address.is_set
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_virtual_router_id.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-virtual-router";
    ADD_KEY_TOKEN(slave_virtual_router_id, "slave-virtual-router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.yfilter)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secondary_ipv4_addresses != nullptr)
    {
        _children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
        slave_virtual_router_id.value_namespace = name_space;
        slave_virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-addresses" || name == "slave-virtual-router-id" || name == "follow" || name == "accept-mode-disable" || name == "primary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
    :
    secondary_ipv4_address(this, {"ip_address"})
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "slave-virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_ipv4_address.len(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.len(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        ent_->parent = this;
        secondary_ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary_ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::Version2()
    :
    virtual_routers(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters>())
{
    virtual_routers->parent = this;

    yang_name = "version2"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::~Version2()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::has_data() const
{
    if (is_presence_container) return true;
    return (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::has_operation() const
{
    return is_set(yfilter)
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters>();
        }
        return virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(virtual_routers != nullptr)
    {
        _children["virtual-routers"] = virtual_routers;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-routers")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouters()
    :
    virtual_router(this, {"vr_id"})
{

    yang_name = "virtual-routers"; yang_parent_name = "version2"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtual_router.len(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.len(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter>();
        ent_->parent = this;
        virtual_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtual_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    vr_id{YType::uint32, "vr-id"},
    priority{YType::uint32, "priority"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    preempt{YType::uint32, "preempt"},
    text_password{YType::str, "text-password"},
    bfd{YType::str, "bfd"},
    session_name{YType::str, "session-name"},
    accept_mode_disable{YType::empty, "accept-mode-disable"}
        ,
    timer(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer>())
    , secondary_ipv4_addresses(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>())
    , tracks(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks>())
    , tracked_objects(std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects>())
{
    timer->parent = this;
    secondary_ipv4_addresses->parent = this;
    tracks->parent = this;
    tracked_objects->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::has_data() const
{
    if (is_presence_container) return true;
    return vr_id.is_set
	|| priority.is_set
	|| primary_ipv4_address.is_set
	|| preempt.is_set
	|| text_password.is_set
	|| bfd.is_set
	|| session_name.is_set
	|| accept_mode_disable.is_set
	|| (timer !=  nullptr && timer->has_data())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_data())
	|| (tracks !=  nullptr && tracks->has_data())
	|| (tracked_objects !=  nullptr && tracked_objects->has_data());
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vr_id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(text_password.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(accept_mode_disable.yfilter)
	|| (timer !=  nullptr && timer->has_operation())
	|| (secondary_ipv4_addresses !=  nullptr && secondary_ipv4_addresses->has_operation())
	|| (tracks !=  nullptr && tracks->has_operation())
	|| (tracked_objects !=  nullptr && tracked_objects->has_operation());
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router";
    ADD_KEY_TOKEN(vr_id, "vr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vr_id.is_set || is_set(vr_id.yfilter)) leaf_name_data.push_back(vr_id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (text_password.is_set || is_set(text_password.yfilter)) leaf_name_data.push_back(text_password.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (accept_mode_disable.is_set || is_set(accept_mode_disable.yfilter)) leaf_name_data.push_back(accept_mode_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "secondary-ipv4-addresses")
    {
        if(secondary_ipv4_addresses == nullptr)
        {
            secondary_ipv4_addresses = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses>();
        }
        return secondary_ipv4_addresses;
    }

    if(child_yang_name == "tracks")
    {
        if(tracks == nullptr)
        {
            tracks = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks>();
        }
        return tracks;
    }

    if(child_yang_name == "tracked-objects")
    {
        if(tracked_objects == nullptr)
        {
            tracked_objects = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects>();
        }
        return tracked_objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(secondary_ipv4_addresses != nullptr)
    {
        _children["secondary-ipv4-addresses"] = secondary_ipv4_addresses;
    }

    if(tracks != nullptr)
    {
        _children["tracks"] = tracks;
    }

    if(tracked_objects != nullptr)
    {
        _children["tracked-objects"] = tracked_objects;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vr-id")
    {
        vr_id = value;
        vr_id.value_namespace = name_space;
        vr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-password")
    {
        text_password = value;
        text_password.value_namespace = name_space;
        text_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable = value;
        accept_mode_disable.value_namespace = name_space;
        accept_mode_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vr-id")
    {
        vr_id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "text-password")
    {
        text_password.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "accept-mode-disable")
    {
        accept_mode_disable.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer" || name == "secondary-ipv4-addresses" || name == "tracks" || name == "tracked-objects" || name == "vr-id" || name == "priority" || name == "primary-ipv4-address" || name == "preempt" || name == "text-password" || name == "bfd" || name == "session-name" || name == "accept-mode-disable")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::Timer()
    :
    advertisement_time_in_msec{YType::uint32, "advertisement-time-in-msec"},
    advertisement_time_in_sec{YType::uint32, "advertisement-time-in-sec"},
    forced{YType::empty, "forced"}
{

    yang_name = "timer"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::~Timer()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::has_data() const
{
    if (is_presence_container) return true;
    return advertisement_time_in_msec.is_set
	|| advertisement_time_in_sec.is_set
	|| forced.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement_time_in_msec.yfilter)
	|| ydk::is_set(advertisement_time_in_sec.yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_time_in_msec.is_set || is_set(advertisement_time_in_msec.yfilter)) leaf_name_data.push_back(advertisement_time_in_msec.get_name_leafdata());
    if (advertisement_time_in_sec.is_set || is_set(advertisement_time_in_sec.yfilter)) leaf_name_data.push_back(advertisement_time_in_sec.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec = value;
        advertisement_time_in_msec.value_namespace = name_space;
        advertisement_time_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec = value;
        advertisement_time_in_sec.value_namespace = name_space;
        advertisement_time_in_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement-time-in-msec")
    {
        advertisement_time_in_msec.yfilter = yfilter;
    }
    if(value_path == "advertisement-time-in-sec")
    {
        advertisement_time_in_sec.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-time-in-msec" || name == "advertisement-time-in-sec" || name == "forced")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Addresses()
    :
    secondary_ipv4_address(this, {"ip_address"})
{

    yang_name = "secondary-ipv4-addresses"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::~SecondaryIpv4Addresses()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_ipv4_address.len(); index++)
    {
        if(secondary_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<secondary_ipv4_address.len(); index++)
    {
        if(secondary_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-ipv4-address")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address>();
        ent_->parent = this;
        secondary_ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary_ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-ipv4-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::SecondaryIpv4Address()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "secondary-ipv4-address"; yang_parent_name = "secondary-ipv4-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::~SecondaryIpv4Address()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-ipv4-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Tracks()
    :
    track(this, {"interface_name"})
{

    yang_name = "tracks"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::~Tracks()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track>();
        ent_->parent = this;
        track.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : track.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::Track()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint32, "priority"}
{

    yang_name = "track"; yang_parent_name = "tracks"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::~Track()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| priority.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObjects()
    :
    tracked_object(this, {"object_name"})
{

    yang_name = "tracked-objects"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::~TrackedObjects()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.len(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-object")
    {
        auto ent_ = std::make_shared<Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject>();
        ent_->parent = this;
        tracked_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracked_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::TrackedObject()
    :
    object_name{YType::str, "object-name"},
    priority_decrement{YType::uint32, "priority-decrement"}
{

    yang_name = "tracked-object"; yang_parent_name = "tracked-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::~TrackedObject()
{
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| priority_decrement.is_set;
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(priority_decrement.yfilter);
}

std::string Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-object";
    ADD_KEY_TOKEN(object_name, "object-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "priority-decrement")
        return true;
    return false;
}

Vrrp::Interfaces::Interface::Bfd::Bfd()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Vrrp::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Vrrp::Interfaces::Interface::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set;
}

bool Vrrp::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Vrrp::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vrrp::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vrrp::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vrrp::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Vrrp::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier")
        return true;
    return false;
}


}
}


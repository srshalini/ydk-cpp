
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_confd_monitoring.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace tailf_confd_monitoring {

ConfdState::ConfdState()
    :
    version{YType::str, "version"},
    epoll{YType::boolean, "epoll"},
    daemon_status{YType::enumeration, "daemon-status"},
    read_only_mode{YType::empty, "read-only-mode"},
    upgrade_mode{YType::empty, "upgrade-mode"}
        ,
    smp(nullptr) // presence node
    , ha(nullptr) // presence node
    , netconf(nullptr) // presence node
    , cli(nullptr) // presence node
    , webui(nullptr) // presence node
    , snmp(nullptr) // presence node
    , internal(std::make_shared<ConfdState::Internal>())
{
    internal->parent = this;

    yang_name = "confd-state"; yang_parent_name = "tailf-confd-monitoring"; is_top_level_class = true; has_list_ancestor = false; 
}

ConfdState::~ConfdState()
{
}

bool ConfdState::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| epoll.is_set
	|| daemon_status.is_set
	|| read_only_mode.is_set
	|| upgrade_mode.is_set
	|| (smp !=  nullptr && smp->has_data())
	|| (ha !=  nullptr && ha->has_data())
	|| (netconf !=  nullptr && netconf->has_data())
	|| (cli !=  nullptr && cli->has_data())
	|| (webui !=  nullptr && webui->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (internal !=  nullptr && internal->has_data());
}

bool ConfdState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(epoll.yfilter)
	|| ydk::is_set(daemon_status.yfilter)
	|| ydk::is_set(read_only_mode.yfilter)
	|| ydk::is_set(upgrade_mode.yfilter)
	|| (smp !=  nullptr && smp->has_operation())
	|| (ha !=  nullptr && ha->has_operation())
	|| (netconf !=  nullptr && netconf->has_operation())
	|| (cli !=  nullptr && cli->has_operation())
	|| (webui !=  nullptr && webui->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (internal !=  nullptr && internal->has_operation());
}

std::string ConfdState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (epoll.is_set || is_set(epoll.yfilter)) leaf_name_data.push_back(epoll.get_name_leafdata());
    if (daemon_status.is_set || is_set(daemon_status.yfilter)) leaf_name_data.push_back(daemon_status.get_name_leafdata());
    if (read_only_mode.is_set || is_set(read_only_mode.yfilter)) leaf_name_data.push_back(read_only_mode.get_name_leafdata());
    if (upgrade_mode.is_set || is_set(upgrade_mode.yfilter)) leaf_name_data.push_back(upgrade_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "smp")
    {
        if(smp == nullptr)
        {
            smp = std::make_shared<ConfdState::Smp>();
        }
        return smp;
    }

    if(child_yang_name == "ha")
    {
        if(ha == nullptr)
        {
            ha = std::make_shared<ConfdState::Ha>();
        }
        return ha;
    }

    if(child_yang_name == "netconf")
    {
        if(netconf == nullptr)
        {
            netconf = std::make_shared<ConfdState::Netconf>();
        }
        return netconf;
    }

    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<ConfdState::Cli>();
        }
        return cli;
    }

    if(child_yang_name == "webui")
    {
        if(webui == nullptr)
        {
            webui = std::make_shared<ConfdState::Webui>();
        }
        return webui;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<ConfdState::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<ConfdState::Internal>();
        }
        return internal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(smp != nullptr)
    {
        _children["smp"] = smp;
    }

    if(ha != nullptr)
    {
        _children["ha"] = ha;
    }

    if(netconf != nullptr)
    {
        _children["netconf"] = netconf;
    }

    if(cli != nullptr)
    {
        _children["cli"] = cli;
    }

    if(webui != nullptr)
    {
        _children["webui"] = webui;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(internal != nullptr)
    {
        _children["internal"] = internal;
    }

    return _children;
}

void ConfdState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epoll")
    {
        epoll = value;
        epoll.value_namespace = name_space;
        epoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daemon-status")
    {
        daemon_status = value;
        daemon_status.value_namespace = name_space;
        daemon_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only-mode")
    {
        read_only_mode = value;
        read_only_mode.value_namespace = name_space;
        read_only_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgrade-mode")
    {
        upgrade_mode = value;
        upgrade_mode.value_namespace = name_space;
        upgrade_mode.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "epoll")
    {
        epoll.yfilter = yfilter;
    }
    if(value_path == "daemon-status")
    {
        daemon_status.yfilter = yfilter;
    }
    if(value_path == "read-only-mode")
    {
        read_only_mode.yfilter = yfilter;
    }
    if(value_path == "upgrade-mode")
    {
        upgrade_mode.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> ConfdState::clone_ptr() const
{
    return std::make_shared<ConfdState>();
}

std::string ConfdState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ConfdState::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ConfdState::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ConfdState::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ConfdState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "smp" || name == "ha" || name == "netconf" || name == "cli" || name == "webui" || name == "snmp" || name == "internal" || name == "version" || name == "epoll" || name == "daemon-status" || name == "read-only-mode" || name == "upgrade-mode")
        return true;
    return false;
}

ConfdState::Smp::Smp()
    :
    number_of_threads{YType::uint16, "number-of-threads"}
{

    yang_name = "smp"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Smp::~Smp()
{
}

bool ConfdState::Smp::has_data() const
{
    if (is_presence_container) return true;
    return number_of_threads.is_set;
}

bool ConfdState::Smp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_threads.yfilter);
}

std::string ConfdState::Smp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Smp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Smp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_threads.is_set || is_set(number_of_threads.yfilter)) leaf_name_data.push_back(number_of_threads.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Smp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Smp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Smp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-threads")
    {
        number_of_threads = value;
        number_of_threads.value_namespace = name_space;
        number_of_threads.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Smp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-threads")
    {
        number_of_threads.yfilter = yfilter;
    }
}

bool ConfdState::Smp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-threads")
        return true;
    return false;
}

ConfdState::Ha::Ha()
    :
    mode{YType::enumeration, "mode"},
    node_id{YType::str, "node-id"},
    master_node_id{YType::str, "master-node-id"},
    connected_slave{YType::str, "connected-slave"},
    pending_slave{YType::str, "pending-slave"}
{

    yang_name = "ha"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Ha::~Ha()
{
}

bool ConfdState::Ha::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : connected_slave.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pending_slave.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return mode.is_set
	|| node_id.is_set
	|| master_node_id.is_set;
}

bool ConfdState::Ha::has_operation() const
{
    for (auto const & leaf : connected_slave.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pending_slave.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(master_node_id.yfilter)
	|| ydk::is_set(connected_slave.yfilter)
	|| ydk::is_set(pending_slave.yfilter);
}

std::string ConfdState::Ha::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Ha::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Ha::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (master_node_id.is_set || is_set(master_node_id.yfilter)) leaf_name_data.push_back(master_node_id.get_name_leafdata());

    auto connected_slave_name_datas = connected_slave.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), connected_slave_name_datas.begin(), connected_slave_name_datas.end());
    auto pending_slave_name_datas = pending_slave.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pending_slave_name_datas.begin(), pending_slave_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Ha::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Ha::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Ha::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-node-id")
    {
        master_node_id = value;
        master_node_id.value_namespace = name_space;
        master_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-slave")
    {
        connected_slave.append(value);
    }
    if(value_path == "pending-slave")
    {
        pending_slave.append(value);
    }
}

void ConfdState::Ha::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "master-node-id")
    {
        master_node_id.yfilter = yfilter;
    }
    if(value_path == "connected-slave")
    {
        connected_slave.yfilter = yfilter;
    }
    if(value_path == "pending-slave")
    {
        pending_slave.yfilter = yfilter;
    }
}

bool ConfdState::Ha::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "node-id" || name == "master-node-id" || name == "connected-slave" || name == "pending-slave")
        return true;
    return false;
}

ConfdState::Netconf::Netconf()
    :
    listen(std::make_shared<ConfdState::Netconf::Listen>())
{
    listen->parent = this;

    yang_name = "netconf"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Netconf::~Netconf()
{
}

bool ConfdState::Netconf::has_data() const
{
    if (is_presence_container) return true;
    return (listen !=  nullptr && listen->has_data());
}

bool ConfdState::Netconf::has_operation() const
{
    return is_set(yfilter)
	|| (listen !=  nullptr && listen->has_operation());
}

std::string ConfdState::Netconf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Netconf::Listen>();
        }
        return listen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(listen != nullptr)
    {
        _children["listen"] = listen;
    }

    return _children;
}

void ConfdState::Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen")
        return true;
    return false;
}

ConfdState::Netconf::Listen::Listen()
    :
    tcp(this, {})
    , ssh(this, {})
{

    yang_name = "listen"; yang_parent_name = "netconf"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Netconf::Listen::~Listen()
{
}

bool ConfdState::Netconf::Listen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcp.len(); index++)
    {
        if(tcp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ssh.len(); index++)
    {
        if(ssh[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Netconf::Listen::has_operation() const
{
    for (std::size_t index=0; index<tcp.len(); index++)
    {
        if(tcp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ssh.len(); index++)
    {
        if(ssh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Netconf::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/netconf/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Netconf::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        auto ent_ = std::make_shared<ConfdState::Netconf::Listen::Tcp>();
        ent_->parent = this;
        tcp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ssh")
    {
        auto ent_ = std::make_shared<ConfdState::Netconf::Listen::Ssh>();
        ent_->parent = this;
        ssh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Netconf::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ssh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Netconf::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Netconf::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Netconf::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "ssh")
        return true;
    return false;
}

ConfdState::Netconf::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Netconf::Listen::Tcp::~Tcp()
{
}

bool ConfdState::Netconf::Listen::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Netconf::Listen::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Netconf::Listen::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/netconf/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::Listen::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Netconf::Listen::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Netconf::Listen::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Netconf::Listen::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Netconf::Listen::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Netconf::Listen::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Netconf::Listen::Ssh::Ssh()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "ssh"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Netconf::Listen::Ssh::~Ssh()
{
}

bool ConfdState::Netconf::Listen::Ssh::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Netconf::Listen::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Netconf::Listen::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/netconf/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::Listen::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::Listen::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Netconf::Listen::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Netconf::Listen::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Netconf::Listen::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Netconf::Listen::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Netconf::Listen::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Cli::Cli()
    :
    listen(std::make_shared<ConfdState::Cli::Listen>())
{
    listen->parent = this;

    yang_name = "cli"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Cli::~Cli()
{
}

bool ConfdState::Cli::has_data() const
{
    if (is_presence_container) return true;
    return (listen !=  nullptr && listen->has_data());
}

bool ConfdState::Cli::has_operation() const
{
    return is_set(yfilter)
	|| (listen !=  nullptr && listen->has_operation());
}

std::string ConfdState::Cli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Cli::Listen>();
        }
        return listen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(listen != nullptr)
    {
        _children["listen"] = listen;
    }

    return _children;
}

void ConfdState::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen")
        return true;
    return false;
}

ConfdState::Cli::Listen::Listen()
    :
    ssh(this, {})
{

    yang_name = "listen"; yang_parent_name = "cli"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Cli::Listen::~Listen()
{
}

bool ConfdState::Cli::Listen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ssh.len(); index++)
    {
        if(ssh[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Cli::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssh.len(); index++)
    {
        if(ssh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Cli::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/cli/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Cli::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Cli::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Cli::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        auto ent_ = std::make_shared<ConfdState::Cli::Listen::Ssh>();
        ent_->parent = this;
        ssh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Cli::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ssh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Cli::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Cli::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Cli::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssh")
        return true;
    return false;
}

ConfdState::Cli::Listen::Ssh::Ssh()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "ssh"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Cli::Listen::Ssh::~Ssh()
{
}

bool ConfdState::Cli::Listen::Ssh::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Cli::Listen::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Cli::Listen::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/cli/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Cli::Listen::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Cli::Listen::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Cli::Listen::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Cli::Listen::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Cli::Listen::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Cli::Listen::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Cli::Listen::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Webui::Webui()
    :
    listen(std::make_shared<ConfdState::Webui::Listen>())
{
    listen->parent = this;

    yang_name = "webui"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Webui::~Webui()
{
}

bool ConfdState::Webui::has_data() const
{
    if (is_presence_container) return true;
    return (listen !=  nullptr && listen->has_data());
}

bool ConfdState::Webui::has_operation() const
{
    return is_set(yfilter)
	|| (listen !=  nullptr && listen->has_operation());
}

std::string ConfdState::Webui::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webui";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Webui::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Webui::Listen>();
        }
        return listen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Webui::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(listen != nullptr)
    {
        _children["listen"] = listen;
    }

    return _children;
}

void ConfdState::Webui::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Webui::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Webui::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen")
        return true;
    return false;
}

ConfdState::Webui::Listen::Listen()
    :
    tcp(this, {})
    , ssl(this, {})
{

    yang_name = "listen"; yang_parent_name = "webui"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Webui::Listen::~Listen()
{
}

bool ConfdState::Webui::Listen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcp.len(); index++)
    {
        if(tcp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ssl.len(); index++)
    {
        if(ssl[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Webui::Listen::has_operation() const
{
    for (std::size_t index=0; index<tcp.len(); index++)
    {
        if(tcp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ssl.len(); index++)
    {
        if(ssl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Webui::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/webui/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Webui::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        auto ent_ = std::make_shared<ConfdState::Webui::Listen::Tcp>();
        ent_->parent = this;
        tcp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ssl")
    {
        auto ent_ = std::make_shared<ConfdState::Webui::Listen::Ssl>();
        ent_->parent = this;
        ssl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Webui::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ssl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Webui::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Webui::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Webui::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "ssl")
        return true;
    return false;
}

ConfdState::Webui::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Webui::Listen::Tcp::~Tcp()
{
}

bool ConfdState::Webui::Listen::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Webui::Listen::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Webui::Listen::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/webui/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::Listen::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Webui::Listen::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Webui::Listen::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Webui::Listen::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Webui::Listen::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Webui::Listen::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Webui::Listen::Ssl::Ssl()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "ssl"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Webui::Listen::Ssl::~Ssl()
{
}

bool ConfdState::Webui::Listen::Ssl::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Webui::Listen::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Webui::Listen::Ssl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/webui/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::Listen::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::Listen::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Webui::Listen::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Webui::Listen::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Webui::Listen::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Webui::Listen::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Webui::Listen::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Snmp::Snmp()
    :
    mib{YType::str, "mib"},
    engine_id{YType::str, "engine-id"}
        ,
    listen(std::make_shared<ConfdState::Snmp::Listen>())
    , version(std::make_shared<ConfdState::Snmp::Version>())
{
    listen->parent = this;
    version->parent = this;

    yang_name = "snmp"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Snmp::~Snmp()
{
}

bool ConfdState::Snmp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return engine_id.is_set
	|| (listen !=  nullptr && listen->has_data())
	|| (version !=  nullptr && version->has_data());
}

bool ConfdState::Snmp::has_operation() const
{
    for (auto const & leaf : mib.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib.yfilter)
	|| ydk::is_set(engine_id.yfilter)
	|| (listen !=  nullptr && listen->has_operation())
	|| (version !=  nullptr && version->has_operation());
}

std::string ConfdState::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engine_id.is_set || is_set(engine_id.yfilter)) leaf_name_data.push_back(engine_id.get_name_leafdata());

    auto mib_name_datas = mib.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_name_datas.begin(), mib_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Snmp::Listen>();
        }
        return listen;
    }

    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<ConfdState::Snmp::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(listen != nullptr)
    {
        _children["listen"] = listen;
    }

    if(version != nullptr)
    {
        _children["version"] = version;
    }

    return _children;
}

void ConfdState::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib")
    {
        mib.append(value);
    }
    if(value_path == "engine-id")
    {
        engine_id = value;
        engine_id.value_namespace = name_space;
        engine_id.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib")
    {
        mib.yfilter = yfilter;
    }
    if(value_path == "engine-id")
    {
        engine_id.yfilter = yfilter;
    }
}

bool ConfdState::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen" || name == "version" || name == "mib" || name == "engine-id")
        return true;
    return false;
}

ConfdState::Snmp::Listen::Listen()
    :
    udp(this, {})
{

    yang_name = "listen"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Snmp::Listen::~Listen()
{
}

bool ConfdState::Snmp::Listen::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udp.len(); index++)
    {
        if(udp[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Snmp::Listen::has_operation() const
{
    for (std::size_t index=0; index<udp.len(); index++)
    {
        if(udp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Snmp::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Snmp::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        auto ent_ = std::make_shared<ConfdState::Snmp::Listen::Udp>();
        ent_->parent = this;
        udp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Snmp::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Snmp::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Snmp::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Snmp::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

ConfdState::Snmp::Listen::Udp::Udp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Snmp::Listen::Udp::~Udp()
{
}

bool ConfdState::Snmp::Listen::Udp::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Snmp::Listen::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Snmp::Listen::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/snmp/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::Listen::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::Listen::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Snmp::Listen::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Snmp::Listen::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Snmp::Listen::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Snmp::Listen::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Snmp::Listen::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Snmp::Version::Version()
    :
    v1{YType::empty, "v1"},
    v2c{YType::empty, "v2c"},
    v3{YType::empty, "v3"}
{

    yang_name = "version"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Snmp::Version::~Version()
{
}

bool ConfdState::Snmp::Version::has_data() const
{
    if (is_presence_container) return true;
    return v1.is_set
	|| v2c.is_set
	|| v3.is_set;
}

bool ConfdState::Snmp::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v1.yfilter)
	|| ydk::is_set(v2c.yfilter)
	|| ydk::is_set(v3.yfilter);
}

std::string ConfdState::Snmp::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v1.is_set || is_set(v1.yfilter)) leaf_name_data.push_back(v1.get_name_leafdata());
    if (v2c.is_set || is_set(v2c.yfilter)) leaf_name_data.push_back(v2c.get_name_leafdata());
    if (v3.is_set || is_set(v3.yfilter)) leaf_name_data.push_back(v3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Snmp::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Snmp::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Snmp::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v1")
    {
        v1 = value;
        v1.value_namespace = name_space;
        v1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2c")
    {
        v2c = value;
        v2c.value_namespace = name_space;
        v2c.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3")
    {
        v3 = value;
        v3.value_namespace = name_space;
        v3.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Snmp::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v1")
    {
        v1.yfilter = yfilter;
    }
    if(value_path == "v2c")
    {
        v2c.yfilter = yfilter;
    }
    if(value_path == "v3")
    {
        v3.yfilter = yfilter;
    }
}

bool ConfdState::Snmp::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1" || name == "v2c" || name == "v3")
        return true;
    return false;
}

ConfdState::Internal::Internal()
    :
    callpoints(std::make_shared<ConfdState::Internal::Callpoints>())
    , cdb(std::make_shared<ConfdState::Internal::Cdb>())
{
    callpoints->parent = this;
    cdb->parent = this;

    yang_name = "internal"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::~Internal()
{
}

bool ConfdState::Internal::has_data() const
{
    if (is_presence_container) return true;
    return (callpoints !=  nullptr && callpoints->has_data())
	|| (cdb !=  nullptr && cdb->has_data());
}

bool ConfdState::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (callpoints !=  nullptr && callpoints->has_operation())
	|| (cdb !=  nullptr && cdb->has_operation());
}

std::string ConfdState::Internal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callpoints")
    {
        if(callpoints == nullptr)
        {
            callpoints = std::make_shared<ConfdState::Internal::Callpoints>();
        }
        return callpoints;
    }

    if(child_yang_name == "cdb")
    {
        if(cdb == nullptr)
        {
            cdb = std::make_shared<ConfdState::Internal::Cdb>();
        }
        return cdb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(callpoints != nullptr)
    {
        _children["callpoints"] = callpoints;
    }

    if(cdb != nullptr)
    {
        _children["cdb"] = cdb;
    }

    return _children;
}

void ConfdState::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callpoints" || name == "cdb")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoints()
    :
    callpoint(this, {"id"})
    , validationpoint(this, {"id"})
    , actionpoint(this, {"id"})
    , snmp_inform_callback(this, {"id"})
    , snmp_notification_subscription(this, {"id"})
    , error_formatting_callback(this, {"id"})
    , typepoint(this, {"id"})
    , notification_stream_replay(this, {"name"})
    , authentication_callback(nullptr) // presence node
    , authorization_callbacks(nullptr) // presence node
{

    yang_name = "callpoints"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::~Callpoints()
{
}

bool ConfdState::Internal::Callpoints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<callpoint.len(); index++)
    {
        if(callpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<validationpoint.len(); index++)
    {
        if(validationpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<actionpoint.len(); index++)
    {
        if(actionpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<snmp_inform_callback.len(); index++)
    {
        if(snmp_inform_callback[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<snmp_notification_subscription.len(); index++)
    {
        if(snmp_notification_subscription[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<error_formatting_callback.len(); index++)
    {
        if(error_formatting_callback[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<typepoint.len(); index++)
    {
        if(typepoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<notification_stream_replay.len(); index++)
    {
        if(notification_stream_replay[index]->has_data())
            return true;
    }
    return (authentication_callback !=  nullptr && authentication_callback->has_data())
	|| (authorization_callbacks !=  nullptr && authorization_callbacks->has_data());
}

bool ConfdState::Internal::Callpoints::has_operation() const
{
    for (std::size_t index=0; index<callpoint.len(); index++)
    {
        if(callpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<validationpoint.len(); index++)
    {
        if(validationpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<actionpoint.len(); index++)
    {
        if(actionpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<snmp_inform_callback.len(); index++)
    {
        if(snmp_inform_callback[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<snmp_notification_subscription.len(); index++)
    {
        if(snmp_notification_subscription[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<error_formatting_callback.len(); index++)
    {
        if(error_formatting_callback[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<typepoint.len(); index++)
    {
        if(typepoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<notification_stream_replay.len(); index++)
    {
        if(notification_stream_replay[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authentication_callback !=  nullptr && authentication_callback->has_operation())
	|| (authorization_callbacks !=  nullptr && authorization_callbacks->has_operation());
}

std::string ConfdState::Internal::Callpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callpoint")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Callpoint>();
        ent_->parent = this;
        callpoint.append(ent_);
        return ent_;
    }

    if(child_yang_name == "validationpoint")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint>();
        ent_->parent = this;
        validationpoint.append(ent_);
        return ent_;
    }

    if(child_yang_name == "actionpoint")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint>();
        ent_->parent = this;
        actionpoint.append(ent_);
        return ent_;
    }

    if(child_yang_name == "snmp-inform-callback")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback>();
        ent_->parent = this;
        snmp_inform_callback.append(ent_);
        return ent_;
    }

    if(child_yang_name == "snmp-notification-subscription")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription>();
        ent_->parent = this;
        snmp_notification_subscription.append(ent_);
        return ent_;
    }

    if(child_yang_name == "error-formatting-callback")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback>();
        ent_->parent = this;
        error_formatting_callback.append(ent_);
        return ent_;
    }

    if(child_yang_name == "typepoint")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Typepoint>();
        ent_->parent = this;
        typepoint.append(ent_);
        return ent_;
    }

    if(child_yang_name == "notification-stream-replay")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay>();
        ent_->parent = this;
        notification_stream_replay.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication-callback")
    {
        if(authentication_callback == nullptr)
        {
            authentication_callback = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback>();
        }
        return authentication_callback;
    }

    if(child_yang_name == "authorization-callbacks")
    {
        if(authorization_callbacks == nullptr)
        {
            authorization_callbacks = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks>();
        }
        return authorization_callbacks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : callpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : validationpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : actionpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : snmp_inform_callback.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : snmp_notification_subscription.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : error_formatting_callback.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : typepoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : notification_stream_replay.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication_callback != nullptr)
    {
        _children["authentication-callback"] = authentication_callback;
    }

    if(authorization_callbacks != nullptr)
    {
        _children["authorization-callbacks"] = authorization_callbacks;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::Callpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::Callpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callpoint" || name == "validationpoint" || name == "actionpoint" || name == "snmp-inform-callback" || name == "snmp-notification-subscription" || name == "error-formatting-callback" || name == "typepoint" || name == "notification-stream-replay" || name == "authentication-callback" || name == "authorization-callbacks")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Callpoint()
    :
    id{YType::str, "id"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "callpoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::Callpoint::~Callpoint()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Callpoint::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Callpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Callpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callpoint";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Callpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Callpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Callpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "callpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Callpoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Callpoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Callpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Callpoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Callpoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Callpoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "callpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Callpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Callpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Callpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Callpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Callpoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Validationpoint()
    :
    id{YType::str, "id"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "validationpoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::Validationpoint::~Validationpoint()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Validationpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Validationpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validationpoint";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Validationpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Validationpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Validationpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "validationpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Validationpoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Validationpoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Validationpoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "validationpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Validationpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Validationpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Validationpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Actionpoint()
    :
    id{YType::str, "id"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "actionpoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::Actionpoint::~Actionpoint()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Actionpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Actionpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actionpoint";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Actionpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Actionpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Actionpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "actionpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Actionpoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Actionpoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Actionpoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "actionpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Actionpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Actionpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Actionpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::SnmpInformCallback()
    :
    id{YType::str, "id"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "snmp-inform-callback"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::SnmpInformCallback::~SnmpInformCallback()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-inform-callback";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "snmp-inform-callback"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "snmp-inform-callback"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::SnmpNotificationSubscription()
    :
    id{YType::str, "id"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "snmp-notification-subscription"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::~SnmpNotificationSubscription()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-notification-subscription";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "snmp-notification-subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "snmp-notification-subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::ErrorFormattingCallback()
    :
    id{YType::str, "id"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "error-formatting-callback"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::~ErrorFormattingCallback()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-formatting-callback";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "error-formatting-callback"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "error-formatting-callback"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Typepoint()
    :
    id{YType::str, "id"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "typepoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::Typepoint::~Typepoint()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Typepoint::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Typepoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Typepoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "typepoint";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Typepoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Typepoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Typepoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "typepoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Typepoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Typepoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Typepoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Typepoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Typepoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Typepoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "typepoint"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Typepoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Typepoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Typepoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Typepoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::Typepoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::NotificationStreamReplay()
    :
    name{YType::str, "name"},
    replay_support{YType::enumeration, "replay-support"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "notification-stream-replay"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::~NotificationStreamReplay()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return name.is_set
	|| replay_support.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(replay_support.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-stream-replay";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (replay_support.is_set || is_set(replay_support.yfilter)) leaf_name_data.push_back(replay_support.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-support")
    {
        replay_support = value;
        replay_support.value_namespace = name_space;
        replay_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "replay-support")
    {
        replay_support.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "name" || name == "replay-support" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "notification-stream-replay"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "notification-stream-replay"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::AuthenticationCallback()
    :
    enabled{YType::boolean, "enabled"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "authentication-callback"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::~AuthenticationCallback()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-callback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "enabled" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "authentication-callback"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "authentication-callback"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/range/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::AuthorizationCallbacks()
    :
    enabled{YType::boolean, "enabled"},
    path{YType::str, "path"},
    file{YType::str, "file"},
    error{YType::enumeration, "error"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon>())
    , range(this, {})
{
    daemon->parent = this;

    yang_name = "authorization-callbacks"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::~AuthorizationCallbacks()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| path.is_set
	|| file.is_set
	|| error.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(error.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-callbacks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "enabled" || name == "path" || name == "file" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "authorization-callbacks"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Range()
    :
    lower{YType::str, "lower"},
    upper{YType::str, "upper"},
    default_{YType::empty, "default"}
        ,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "authorization-callbacks"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set
	|| default_.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daemon != nullptr)
    {
        _children["daemon"] = daemon;
    }

    return _children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "lower" || name == "upper" || name == "default")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::Daemon()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    error{YType::enumeration, "error"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/range/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "error")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Cdb()
    :
    datastore(this, {"name"})
    , client(this, {})
{

    yang_name = "cdb"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Cdb::~Cdb()
{
}

bool ConfdState::Internal::Cdb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<datastore.len(); index++)
    {
        if(datastore[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Internal::Cdb::has_operation() const
{
    for (std::size_t index=0; index<datastore.len(); index++)
    {
        if(datastore[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Internal::Cdb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datastore")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Cdb::Datastore>();
        ent_->parent = this;
        datastore.append(ent_);
        return ent_;
    }

    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Cdb::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : datastore.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Cdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::Cdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::Cdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datastore" || name == "client")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::Datastore()
    :
    name{YType::enumeration, "name"},
    transaction_id{YType::str, "transaction-id"},
    write_queue{YType::uint32, "write-queue"},
    filename{YType::str, "filename"},
    disk_size{YType::uint64, "disk-size"},
    ram_size{YType::uint64, "ram-size"},
    read_locks{YType::uint32, "read-locks"},
    write_lock_set{YType::boolean, "write-lock-set"},
    subscription_lock_set{YType::boolean, "subscription-lock-set"},
    waiting_for_replication_sync{YType::boolean, "waiting-for-replication-sync"}
        ,
    pending_subscription_sync(nullptr) // presence node
    , pending_notification_queue(this, {})
{

    yang_name = "datastore"; yang_parent_name = "cdb"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Cdb::Datastore::~Datastore()
{
}

bool ConfdState::Internal::Cdb::Datastore::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pending_notification_queue.len(); index++)
    {
        if(pending_notification_queue[index]->has_data())
            return true;
    }
    return name.is_set
	|| transaction_id.is_set
	|| write_queue.is_set
	|| filename.is_set
	|| disk_size.is_set
	|| ram_size.is_set
	|| read_locks.is_set
	|| write_lock_set.is_set
	|| subscription_lock_set.is_set
	|| waiting_for_replication_sync.is_set
	|| (pending_subscription_sync !=  nullptr && pending_subscription_sync->has_data());
}

bool ConfdState::Internal::Cdb::Datastore::has_operation() const
{
    for (std::size_t index=0; index<pending_notification_queue.len(); index++)
    {
        if(pending_notification_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| ydk::is_set(write_queue.yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(disk_size.yfilter)
	|| ydk::is_set(ram_size.yfilter)
	|| ydk::is_set(read_locks.yfilter)
	|| ydk::is_set(write_lock_set.yfilter)
	|| ydk::is_set(subscription_lock_set.yfilter)
	|| ydk::is_set(waiting_for_replication_sync.yfilter)
	|| (pending_subscription_sync !=  nullptr && pending_subscription_sync->has_operation());
}

std::string ConfdState::Internal::Cdb::Datastore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::Datastore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastore";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (write_queue.is_set || is_set(write_queue.yfilter)) leaf_name_data.push_back(write_queue.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (disk_size.is_set || is_set(disk_size.yfilter)) leaf_name_data.push_back(disk_size.get_name_leafdata());
    if (ram_size.is_set || is_set(ram_size.yfilter)) leaf_name_data.push_back(ram_size.get_name_leafdata());
    if (read_locks.is_set || is_set(read_locks.yfilter)) leaf_name_data.push_back(read_locks.get_name_leafdata());
    if (write_lock_set.is_set || is_set(write_lock_set.yfilter)) leaf_name_data.push_back(write_lock_set.get_name_leafdata());
    if (subscription_lock_set.is_set || is_set(subscription_lock_set.yfilter)) leaf_name_data.push_back(subscription_lock_set.get_name_leafdata());
    if (waiting_for_replication_sync.is_set || is_set(waiting_for_replication_sync.yfilter)) leaf_name_data.push_back(waiting_for_replication_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::Datastore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pending-subscription-sync")
    {
        if(pending_subscription_sync == nullptr)
        {
            pending_subscription_sync = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync>();
        }
        return pending_subscription_sync;
    }

    if(child_yang_name == "pending-notification-queue")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue>();
        ent_->parent = this;
        pending_notification_queue.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::Datastore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pending_subscription_sync != nullptr)
    {
        _children["pending-subscription-sync"] = pending_subscription_sync;
    }

    count_ = 0;
    for (auto ent_ : pending_notification_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Cdb::Datastore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-queue")
    {
        write_queue = value;
        write_queue.value_namespace = name_space;
        write_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disk-size")
    {
        disk_size = value;
        disk_size.value_namespace = name_space;
        disk_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ram-size")
    {
        ram_size = value;
        ram_size.value_namespace = name_space;
        ram_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-locks")
    {
        read_locks = value;
        read_locks.value_namespace = name_space;
        read_locks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-lock-set")
    {
        write_lock_set = value;
        write_lock_set.value_namespace = name_space;
        write_lock_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-lock-set")
    {
        subscription_lock_set = value;
        subscription_lock_set.value_namespace = name_space;
        subscription_lock_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-for-replication-sync")
    {
        waiting_for_replication_sync = value;
        waiting_for_replication_sync.value_namespace = name_space;
        waiting_for_replication_sync.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Datastore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
    if(value_path == "write-queue")
    {
        write_queue.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "disk-size")
    {
        disk_size.yfilter = yfilter;
    }
    if(value_path == "ram-size")
    {
        ram_size.yfilter = yfilter;
    }
    if(value_path == "read-locks")
    {
        read_locks.yfilter = yfilter;
    }
    if(value_path == "write-lock-set")
    {
        write_lock_set.yfilter = yfilter;
    }
    if(value_path == "subscription-lock-set")
    {
        subscription_lock_set.yfilter = yfilter;
    }
    if(value_path == "waiting-for-replication-sync")
    {
        waiting_for_replication_sync.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-subscription-sync" || name == "pending-notification-queue" || name == "name" || name == "transaction-id" || name == "write-queue" || name == "filename" || name == "disk-size" || name == "ram-size" || name == "read-locks" || name == "write-lock-set" || name == "subscription-lock-set" || name == "waiting-for-replication-sync")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::PendingSubscriptionSync()
    :
    priority{YType::int32, "priority"},
    time_remaining{YType::str, "time-remaining"}
        ,
    notification(this, {})
{

    yang_name = "pending-subscription-sync"; yang_parent_name = "datastore"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::~PendingSubscriptionSync()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notification.len(); index++)
    {
        if(notification[index]->has_data())
            return true;
    }
    return priority.is_set
	|| time_remaining.is_set;
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_operation() const
{
    for (std::size_t index=0; index<notification.len(); index++)
    {
        if(notification[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_remaining.yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-subscription-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification>();
        ent_->parent = this;
        notification.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notification.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification" || name == "priority" || name == "time-remaining")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::Notification()
    :
    client_name{YType::str, "client-name"},
    subscription_ids{YType::uint32, "subscription-ids"}
{

    yang_name = "notification"; yang_parent_name = "pending-subscription-sync"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::~Notification()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return client_name.is_set;
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::has_operation() const
{
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(subscription_ids.yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    auto subscription_ids_name_datas = subscription_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscription_ids_name_datas.begin(), subscription_ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.append(value);
    }
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-name" || name == "subscription-ids")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::PendingNotificationQueue()
    :
    notification(this, {})
{

    yang_name = "pending-notification-queue"; yang_parent_name = "datastore"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::~PendingNotificationQueue()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notification.len(); index++)
    {
        if(notification[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_operation() const
{
    for (std::size_t index=0; index<notification.len(); index++)
    {
        if(notification[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-notification-queue";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification>();
        ent_->parent = this;
        notification.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notification.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::Notification()
    :
    priority{YType::int32, "priority"},
    client_name{YType::str, "client-name"},
    subscription_ids{YType::uint32, "subscription-ids"}
{

    yang_name = "notification"; yang_parent_name = "pending-notification-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::~Notification()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return priority.is_set
	|| client_name.is_set;
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::has_operation() const
{
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(subscription_ids.yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    auto subscription_ids_name_datas = subscription_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscription_ids_name_datas.begin(), subscription_ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.append(value);
    }
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "client-name" || name == "subscription-ids")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Client::Client()
    :
    name{YType::str, "name"},
    info{YType::str, "info"},
    type{YType::enumeration, "type"},
    datastore{YType::str, "datastore"},
    lock{YType::enumeration, "lock"}
        ,
    subscription(this, {})
{

    yang_name = "client"; yang_parent_name = "cdb"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Cdb::Client::~Client()
{
}

bool ConfdState::Internal::Cdb::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return name.is_set
	|| info.is_set
	|| type.is_set
	|| datastore.is_set
	|| lock.is_set;
}

bool ConfdState::Internal::Cdb::Client::has_operation() const
{
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(info.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(datastore.yfilter)
	|| ydk::is_set(lock.yfilter);
}

std::string ConfdState::Internal::Cdb::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (info.is_set || is_set(info.yfilter)) leaf_name_data.push_back(info.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (datastore.is_set || is_set(datastore.yfilter)) leaf_name_data.push_back(datastore.get_name_leafdata());
    if (lock.is_set || is_set(lock.yfilter)) leaf_name_data.push_back(lock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        auto ent_ = std::make_shared<ConfdState::Internal::Cdb::Client::Subscription>();
        ent_->parent = this;
        subscription.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscription.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ConfdState::Internal::Cdb::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "info")
    {
        info = value;
        info.value_namespace = name_space;
        info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "datastore")
    {
        datastore = value;
        datastore.value_namespace = name_space;
        datastore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock")
    {
        lock = value;
        lock.value_namespace = name_space;
        lock.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "info")
    {
        info.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "datastore")
    {
        datastore.yfilter = yfilter;
    }
    if(value_path == "lock")
    {
        lock.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription" || name == "name" || name == "info" || name == "type" || name == "datastore" || name == "lock")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Client::Subscription::Subscription()
    :
    datastore{YType::enumeration, "datastore"},
    twophase{YType::empty, "twophase"},
    priority{YType::int32, "priority"},
    id{YType::uint32, "id"},
    path{YType::str, "path"},
    error{YType::enumeration, "error"}
{

    yang_name = "subscription"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

ConfdState::Internal::Cdb::Client::Subscription::~Subscription()
{
}

bool ConfdState::Internal::Cdb::Client::Subscription::has_data() const
{
    if (is_presence_container) return true;
    return datastore.is_set
	|| twophase.is_set
	|| priority.is_set
	|| id.is_set
	|| path.is_set
	|| error.is_set;
}

bool ConfdState::Internal::Cdb::Client::Subscription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(datastore.yfilter)
	|| ydk::is_set(twophase.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string ConfdState::Internal::Cdb::Client::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/client/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::Client::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Client::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datastore.is_set || is_set(datastore.yfilter)) leaf_name_data.push_back(datastore.get_name_leafdata());
    if (twophase.is_set || is_set(twophase.yfilter)) leaf_name_data.push_back(twophase.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ConfdState::Internal::Cdb::Client::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ConfdState::Internal::Cdb::Client::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ConfdState::Internal::Cdb::Client::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "datastore")
    {
        datastore = value;
        datastore.value_namespace = name_space;
        datastore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twophase")
    {
        twophase = value;
        twophase.value_namespace = name_space;
        twophase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Client::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "datastore")
    {
        datastore.yfilter = yfilter;
    }
    if(value_path == "twophase")
    {
        twophase.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Client::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datastore" || name == "twophase" || name == "priority" || name == "id" || name == "path" || name == "error")
        return true;
    return false;
}

const Enum::YLeaf ConfdState::DaemonStatus::starting {0, "starting"};
const Enum::YLeaf ConfdState::DaemonStatus::phase0 {1, "phase0"};
const Enum::YLeaf ConfdState::DaemonStatus::phase1 {2, "phase1"};
const Enum::YLeaf ConfdState::DaemonStatus::started {3, "started"};
const Enum::YLeaf ConfdState::DaemonStatus::stopping {4, "stopping"};

const Enum::YLeaf ConfdState::Ha::Mode::none {0, "none"};
const Enum::YLeaf ConfdState::Ha::Mode::slave {1, "slave"};
const Enum::YLeaf ConfdState::Ha::Mode::master {2, "master"};

const Enum::YLeaf ConfdState::Internal::DatastoreName::running {0, "running"};
const Enum::YLeaf ConfdState::Internal::DatastoreName::startup {1, "startup"};
const Enum::YLeaf ConfdState::Internal::DatastoreName::operational {2, "operational"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupport::none {0, "none"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupport::builtin {1, "builtin"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupport::external {2, "external"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::TimeRemaining::infinity {0, "infinity"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::inactive {0, "inactive"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::client {1, "client"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::subscriber {2, "subscriber"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::waiting {3, "waiting"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Datastore::pre_commit_running {9, "pre_commit_running"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::read {0, "read"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::subscription {1, "subscription"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::pending_read {2, "pending-read"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::pending_subscription {3, "pending-subscription"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Subscription::Error::PENDING {0, "PENDING"};


}
}


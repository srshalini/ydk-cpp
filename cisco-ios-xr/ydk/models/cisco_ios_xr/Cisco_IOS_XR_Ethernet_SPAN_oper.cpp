
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_Ethernet_SPAN_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Ethernet_SPAN_oper {

SpanMonitorSession::SpanMonitorSession()
    :
    global(std::make_shared<SpanMonitorSession::Global>())
    , nodes(std::make_shared<SpanMonitorSession::Nodes>())
{
    global->parent = this;
    nodes->parent = this;

    yang_name = "span-monitor-session"; yang_parent_name = "Cisco-IOS-XR-Ethernet-SPAN-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SpanMonitorSession::~SpanMonitorSession()
{
}

bool SpanMonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<SpanMonitorSession::Global>();
        }
        return global;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SpanMonitorSession::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SpanMonitorSession::clone_ptr() const
{
    return std::make_shared<SpanMonitorSession>();
}

std::string SpanMonitorSession::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SpanMonitorSession::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SpanMonitorSession::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SpanMonitorSession::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "nodes")
        return true;
    return false;
}

SpanMonitorSession::Global::Global()
    :
    statistics(std::make_shared<SpanMonitorSession::Global::Statistics>())
    , global_sessions(std::make_shared<SpanMonitorSession::Global::GlobalSessions>())
{
    statistics->parent = this;
    global_sessions->parent = this;

    yang_name = "global"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Global::~Global()
{
}

bool SpanMonitorSession::Global::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data())
	|| (global_sessions !=  nullptr && global_sessions->has_data());
}

bool SpanMonitorSession::Global::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (global_sessions !=  nullptr && global_sessions->has_operation());
}

std::string SpanMonitorSession::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<SpanMonitorSession::Global::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "global-sessions")
    {
        if(global_sessions == nullptr)
        {
            global_sessions = std::make_shared<SpanMonitorSession::Global::GlobalSessions>();
        }
        return global_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(global_sessions != nullptr)
    {
        _children["global-sessions"] = global_sessions;
    }

    return _children;
}

void SpanMonitorSession::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "global-sessions")
        return true;
    return false;
}

SpanMonitorSession::Global::Statistics::Statistics()
    :
    statistic(this, {"session", "interface"})
{

    yang_name = "statistics"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Global::Statistics::~Statistics()
{
}

bool SpanMonitorSession::Global::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Global::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SpanMonitorSession::Global::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Global::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Global::Statistics::Statistic>();
        ent_->parent = this;
        statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SpanMonitorSession::Global::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Global::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Global::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic")
        return true;
    return false;
}

SpanMonitorSession::Global::Statistics::Statistic::Statistic()
    :
    session{YType::str, "session"},
    interface{YType::str, "interface"},
    rx_packets_mirrored{YType::uint64, "rx-packets-mirrored"},
    rx_octets_mirrored{YType::uint64, "rx-octets-mirrored"},
    tx_packets_mirrored{YType::uint64, "tx-packets-mirrored"},
    tx_octets_mirrored{YType::uint64, "tx-octets-mirrored"},
    packets_not_mirrored{YType::uint64, "packets-not-mirrored"},
    octets_not_mirrored{YType::uint64, "octets-not-mirrored"}
{

    yang_name = "statistic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Global::Statistics::Statistic::~Statistic()
{
}

bool SpanMonitorSession::Global::Statistics::Statistic::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| interface.is_set
	|| rx_packets_mirrored.is_set
	|| rx_octets_mirrored.is_set
	|| tx_packets_mirrored.is_set
	|| tx_octets_mirrored.is_set
	|| packets_not_mirrored.is_set
	|| octets_not_mirrored.is_set;
}

bool SpanMonitorSession::Global::Statistics::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(rx_packets_mirrored.yfilter)
	|| ydk::is_set(rx_octets_mirrored.yfilter)
	|| ydk::is_set(tx_packets_mirrored.yfilter)
	|| ydk::is_set(tx_octets_mirrored.yfilter)
	|| ydk::is_set(packets_not_mirrored.yfilter)
	|| ydk::is_set(octets_not_mirrored.yfilter);
}

std::string SpanMonitorSession::Global::Statistics::Statistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Global::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    ADD_KEY_TOKEN(session, "session");
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::Statistics::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (rx_packets_mirrored.is_set || is_set(rx_packets_mirrored.yfilter)) leaf_name_data.push_back(rx_packets_mirrored.get_name_leafdata());
    if (rx_octets_mirrored.is_set || is_set(rx_octets_mirrored.yfilter)) leaf_name_data.push_back(rx_octets_mirrored.get_name_leafdata());
    if (tx_packets_mirrored.is_set || is_set(tx_packets_mirrored.yfilter)) leaf_name_data.push_back(tx_packets_mirrored.get_name_leafdata());
    if (tx_octets_mirrored.is_set || is_set(tx_octets_mirrored.yfilter)) leaf_name_data.push_back(tx_octets_mirrored.get_name_leafdata());
    if (packets_not_mirrored.is_set || is_set(packets_not_mirrored.yfilter)) leaf_name_data.push_back(packets_not_mirrored.get_name_leafdata());
    if (octets_not_mirrored.is_set || is_set(octets_not_mirrored.yfilter)) leaf_name_data.push_back(octets_not_mirrored.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::Statistics::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::Statistics::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packets-mirrored")
    {
        rx_packets_mirrored = value;
        rx_packets_mirrored.value_namespace = name_space;
        rx_packets_mirrored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-octets-mirrored")
    {
        rx_octets_mirrored = value;
        rx_octets_mirrored.value_namespace = name_space;
        rx_octets_mirrored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets-mirrored")
    {
        tx_packets_mirrored = value;
        tx_packets_mirrored.value_namespace = name_space;
        tx_packets_mirrored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-octets-mirrored")
    {
        tx_octets_mirrored = value;
        tx_octets_mirrored.value_namespace = name_space;
        tx_octets_mirrored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-not-mirrored")
    {
        packets_not_mirrored = value;
        packets_not_mirrored.value_namespace = name_space;
        packets_not_mirrored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-not-mirrored")
    {
        octets_not_mirrored = value;
        octets_not_mirrored.value_namespace = name_space;
        octets_not_mirrored.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::Statistics::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "rx-packets-mirrored")
    {
        rx_packets_mirrored.yfilter = yfilter;
    }
    if(value_path == "rx-octets-mirrored")
    {
        rx_octets_mirrored.yfilter = yfilter;
    }
    if(value_path == "tx-packets-mirrored")
    {
        tx_packets_mirrored.yfilter = yfilter;
    }
    if(value_path == "tx-octets-mirrored")
    {
        tx_octets_mirrored.yfilter = yfilter;
    }
    if(value_path == "packets-not-mirrored")
    {
        packets_not_mirrored.yfilter = yfilter;
    }
    if(value_path == "octets-not-mirrored")
    {
        octets_not_mirrored.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::Statistics::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "interface" || name == "rx-packets-mirrored" || name == "rx-octets-mirrored" || name == "tx-packets-mirrored" || name == "tx-octets-mirrored" || name == "packets-not-mirrored" || name == "octets-not-mirrored")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSessions()
    :
    global_session(this, {"session"})
{

    yang_name = "global-sessions"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Global::GlobalSessions::~GlobalSessions()
{
}

bool SpanMonitorSession::Global::GlobalSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_session.len(); index++)
    {
        if(global_session[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Global::GlobalSessions::has_operation() const
{
    for (std::size_t index=0; index<global_session.len(); index++)
    {
        if(global_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Global::GlobalSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-session")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession>();
        ent_->parent = this;
        global_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : global_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Global::GlobalSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Global::GlobalSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-session")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::GlobalSession()
    :
    session{YType::str, "session"},
    name{YType::str, "name"},
    session_class{YType::enumeration, "session-class"},
    id{YType::uint32, "id"},
    destination_error{YType::uint32, "destination-error"},
    destination_interface_name{YType::str, "destination-interface-name"},
    destination_interface_handle{YType::str, "destination-interface-handle"},
    interface_error{YType::uint32, "interface-error"}
        ,
    destination_data(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData>())
    , destination_id(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId>())
    , inject_interface(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface>())
{
    destination_data->parent = this;
    destination_id->parent = this;
    inject_interface->parent = this;

    yang_name = "global-session"; yang_parent_name = "global-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::~GlobalSession()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| name.is_set
	|| session_class.is_set
	|| id.is_set
	|| destination_error.is_set
	|| destination_interface_name.is_set
	|| destination_interface_handle.is_set
	|| interface_error.is_set
	|| (destination_data !=  nullptr && destination_data->has_data())
	|| (destination_id !=  nullptr && destination_id->has_data())
	|| (inject_interface !=  nullptr && inject_interface->has_data());
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(destination_error.yfilter)
	|| ydk::is_set(destination_interface_name.yfilter)
	|| ydk::is_set(destination_interface_handle.yfilter)
	|| ydk::is_set(interface_error.yfilter)
	|| (destination_data !=  nullptr && destination_data->has_operation())
	|| (destination_id !=  nullptr && destination_id->has_operation())
	|| (inject_interface !=  nullptr && inject_interface->has_operation());
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/global-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-session";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (destination_error.is_set || is_set(destination_error.yfilter)) leaf_name_data.push_back(destination_error.get_name_leafdata());
    if (destination_interface_name.is_set || is_set(destination_interface_name.yfilter)) leaf_name_data.push_back(destination_interface_name.get_name_leafdata());
    if (destination_interface_handle.is_set || is_set(destination_interface_handle.yfilter)) leaf_name_data.push_back(destination_interface_handle.get_name_leafdata());
    if (interface_error.is_set || is_set(interface_error.yfilter)) leaf_name_data.push_back(interface_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-data")
    {
        if(destination_data == nullptr)
        {
            destination_data = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData>();
        }
        return destination_data;
    }

    if(child_yang_name == "destination-id")
    {
        if(destination_id == nullptr)
        {
            destination_id = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId>();
        }
        return destination_id;
    }

    if(child_yang_name == "inject-interface")
    {
        if(inject_interface == nullptr)
        {
            inject_interface = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface>();
        }
        return inject_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_data != nullptr)
    {
        _children["destination-data"] = destination_data;
    }

    if(destination_id != nullptr)
    {
        _children["destination-id"] = destination_id;
    }

    if(inject_interface != nullptr)
    {
        _children["inject-interface"] = inject_interface;
    }

    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-error")
    {
        destination_error = value;
        destination_error.value_namespace = name_space;
        destination_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-interface-name")
    {
        destination_interface_name = value;
        destination_interface_name.value_namespace = name_space;
        destination_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-interface-handle")
    {
        destination_interface_handle = value;
        destination_interface_handle.value_namespace = name_space;
        destination_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-error")
    {
        interface_error = value;
        interface_error.value_namespace = name_space;
        interface_error.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "destination-error")
    {
        destination_error.yfilter = yfilter;
    }
    if(value_path == "destination-interface-name")
    {
        destination_interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-interface-handle")
    {
        destination_interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-error")
    {
        interface_error.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-data" || name == "destination-id" || name == "inject-interface" || name == "session" || name == "name" || name == "session-class" || name == "id" || name == "destination-error" || name == "destination-interface-name" || name == "destination-interface-handle" || name == "interface-error")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::DestinationData()
    :
    destination_class{YType::enumeration, "destination-class"},
    invalid_value{YType::uint32, "invalid-value"}
        ,
    interface_data(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData>())
    , pseudowire_data(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData>())
    , next_hop_ipv4_data(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data>())
    , next_hop_ipv6_data(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data>())
{
    interface_data->parent = this;
    pseudowire_data->parent = this;
    next_hop_ipv4_data->parent = this;
    next_hop_ipv6_data->parent = this;

    yang_name = "destination-data"; yang_parent_name = "global-session"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::~DestinationData()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::has_data() const
{
    if (is_presence_container) return true;
    return destination_class.is_set
	|| invalid_value.is_set
	|| (interface_data !=  nullptr && interface_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (next_hop_ipv4_data !=  nullptr && next_hop_ipv4_data->has_data())
	|| (next_hop_ipv6_data !=  nullptr && next_hop_ipv6_data->has_data());
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_class.yfilter)
	|| ydk::is_set(invalid_value.yfilter)
	|| (interface_data !=  nullptr && interface_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (next_hop_ipv4_data !=  nullptr && next_hop_ipv4_data->has_operation())
	|| (next_hop_ipv6_data !=  nullptr && next_hop_ipv6_data->has_operation());
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_class.is_set || is_set(destination_class.yfilter)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.yfilter)) leaf_name_data.push_back(invalid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-data")
    {
        if(interface_data == nullptr)
        {
            interface_data = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData>();
        }
        return interface_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "next-hop-ipv4-data")
    {
        if(next_hop_ipv4_data == nullptr)
        {
            next_hop_ipv4_data = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data>();
        }
        return next_hop_ipv4_data;
    }

    if(child_yang_name == "next-hop-ipv6-data")
    {
        if(next_hop_ipv6_data == nullptr)
        {
            next_hop_ipv6_data = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data>();
        }
        return next_hop_ipv6_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_data != nullptr)
    {
        _children["interface-data"] = interface_data;
    }

    if(pseudowire_data != nullptr)
    {
        _children["pseudowire-data"] = pseudowire_data;
    }

    if(next_hop_ipv4_data != nullptr)
    {
        _children["next-hop-ipv4-data"] = next_hop_ipv4_data;
    }

    if(next_hop_ipv6_data != nullptr)
    {
        _children["next-hop-ipv6-data"] = next_hop_ipv6_data;
    }

    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
        destination_class.value_namespace = name_space;
        destination_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
        invalid_value.value_namespace = name_space;
        invalid_value.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-class")
    {
        destination_class.yfilter = yfilter;
    }
    if(value_path == "invalid-value")
    {
        invalid_value.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-data" || name == "pseudowire-data" || name == "next-hop-ipv4-data" || name == "next-hop-ipv6-data" || name == "destination-class" || name == "invalid-value")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::InterfaceData()
    :
    interface_name{YType::str, "interface-name"},
    interface_state{YType::enumeration, "interface-state"}
{

    yang_name = "interface-data"; yang_parent_name = "destination-data"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::~InterfaceData()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_state.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_state.yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-state")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::PseudowireData()
    :
    pseudowire_name{YType::str, "pseudowire-name"},
    pseudowire_is_up{YType::boolean, "pseudowire-is-up"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "destination-data"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::~PseudowireData()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_name.is_set
	|| pseudowire_is_up.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_name.yfilter)
	|| ydk::is_set(pseudowire_is_up.yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_name.is_set || is_set(pseudowire_name.yfilter)) leaf_name_data.push_back(pseudowire_name.get_name_leafdata());
    if (pseudowire_is_up.is_set || is_set(pseudowire_is_up.yfilter)) leaf_name_data.push_back(pseudowire_is_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-name")
    {
        pseudowire_name = value;
        pseudowire_name.value_namespace = name_space;
        pseudowire_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-is-up")
    {
        pseudowire_is_up = value;
        pseudowire_is_up.value_namespace = name_space;
        pseudowire_is_up.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-name")
    {
        pseudowire_name.yfilter = yfilter;
    }
    if(value_path == "pseudowire-is-up")
    {
        pseudowire_is_up.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-name" || name == "pseudowire-is-up")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::NextHopIpv4Data()
    :
    ipv4_address{YType::str, "ipv4-address"},
    vrf_name{YType::str, "vrf-name"},
    address_is_reachable{YType::boolean, "address-is-reachable"}
{

    yang_name = "next-hop-ipv4-data"; yang_parent_name = "destination-data"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::~NextHopIpv4Data()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| vrf_name.is_set
	|| address_is_reachable.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(address_is_reachable.yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (address_is_reachable.is_set || is_set(address_is_reachable.yfilter)) leaf_name_data.push_back(address_is_reachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-is-reachable")
    {
        address_is_reachable = value;
        address_is_reachable.value_namespace = name_space;
        address_is_reachable.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "address-is-reachable")
    {
        address_is_reachable.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "vrf-name" || name == "address-is-reachable")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::NextHopIpv6Data()
    :
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"},
    address_is_reachable{YType::boolean, "address-is-reachable"}
{

    yang_name = "next-hop-ipv6-data"; yang_parent_name = "destination-data"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::~NextHopIpv6Data()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| vrf_name.is_set
	|| address_is_reachable.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(address_is_reachable.yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (address_is_reachable.is_set || is_set(address_is_reachable.yfilter)) leaf_name_data.push_back(address_is_reachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-is-reachable")
    {
        address_is_reachable = value;
        address_is_reachable.value_namespace = name_space;
        address_is_reachable.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "address-is-reachable")
    {
        address_is_reachable.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "vrf-name" || name == "address-is-reachable")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::DestinationId()
    :
    destination_class{YType::enumeration, "destination-class"},
    interface{YType::str, "interface"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    invalid_value{YType::uint32, "invalid-value"}
        ,
    ipv4_address_and_vrf(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf>())
    , ipv6_address_and_vrf(std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    ipv6_address_and_vrf->parent = this;

    yang_name = "destination-id"; yang_parent_name = "global-session"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::has_data() const
{
    if (is_presence_container) return true;
    return destination_class.is_set
	|| interface.is_set
	|| pseudowire_id.is_set
	|| invalid_value.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_class.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(invalid_value.yfilter)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_class.is_set || is_set(destination_class.yfilter)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.yfilter)) leaf_name_data.push_back(invalid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf == nullptr)
        {
            ipv4_address_and_vrf = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf>();
        }
        return ipv4_address_and_vrf;
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf == nullptr)
        {
            ipv6_address_and_vrf = std::make_shared<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf>();
        }
        return ipv6_address_and_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_address_and_vrf != nullptr)
    {
        _children["ipv4-address-and-vrf"] = ipv4_address_and_vrf;
    }

    if(ipv6_address_and_vrf != nullptr)
    {
        _children["ipv6-address-and-vrf"] = ipv6_address_and_vrf;
    }

    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
        destination_class.value_namespace = name_space;
        destination_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
        invalid_value.value_namespace = name_space;
        invalid_value.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-class")
    {
        destination_class.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "invalid-value")
    {
        invalid_value.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-and-vrf" || name == "ipv6-address-and-vrf" || name == "destination-class" || name == "interface" || name == "pseudowire-id" || name == "invalid-value")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    ipv4_address{YType::str, "ipv4-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::InjectInterface()
    :
    name{YType::str, "name"}
{

    yang_name = "inject-interface"; yang_parent_name = "global-session"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::~InjectInterface()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::InjectInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Nodes()
    :
    node(this, {"node"})
{

    yang_name = "nodes"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Nodes::~Nodes()
{
}

bool SpanMonitorSession::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SpanMonitorSession::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SpanMonitorSession::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Node()
    :
    node{YType::str, "node"}
        ,
    attachments(std::make_shared<SpanMonitorSession::Nodes::Node::Attachments>())
    , hardware_sessions(std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions>())
    , interfaces(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces>())
{
    attachments->parent = this;
    hardware_sessions->parent = this;
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Nodes::Node::~Node()
{
}

bool SpanMonitorSession::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| (attachments !=  nullptr && attachments->has_data())
	|| (hardware_sessions !=  nullptr && hardware_sessions->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool SpanMonitorSession::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (attachments !=  nullptr && attachments->has_operation())
	|| (hardware_sessions !=  nullptr && hardware_sessions->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachments")
    {
        if(attachments == nullptr)
        {
            attachments = std::make_shared<SpanMonitorSession::Nodes::Node::Attachments>();
        }
        return attachments;
    }

    if(child_yang_name == "hardware-sessions")
    {
        if(hardware_sessions == nullptr)
        {
            hardware_sessions = std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions>();
        }
        return hardware_sessions;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attachments != nullptr)
    {
        _children["attachments"] = attachments;
    }

    if(hardware_sessions != nullptr)
    {
        _children["hardware-sessions"] = hardware_sessions;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachments" || name == "hardware-sessions" || name == "interfaces" || name == "node")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Attachments::Attachments()
    :
    attachment(this, {"session", "interface"})
{

    yang_name = "attachments"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Attachments::~Attachments()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attachment.len(); index++)
    {
        if(attachment[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::Node::Attachments::has_operation() const
{
    for (std::size_t index=0; index<attachment.len(); index++)
    {
        if(attachment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Attachments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Attachments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment>();
        ent_->parent = this;
        attachment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Attachments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attachment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::Attachments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Nodes::Node::Attachments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::Attachment()
    :
    session{YType::str, "session"},
    interface{YType::str, "interface"},
    name{YType::str, "name"},
    local_class{YType::enumeration, "local-class"},
    id{YType::uint32, "id"},
    global_class{YType::enumeration, "global-class"},
    session_is_configured{YType::boolean, "session-is-configured"},
    source_interface{YType::str, "source-interface"},
    source_interface_state{YType::enumeration, "source-interface-state"},
    pfi_error{YType::uint32, "pfi-error"},
    dest_pw_type_not_supported{YType::boolean, "dest-pw-type-not-supported"},
    source_interface_is_a_destination{YType::boolean, "source-interface-is-a-destination"},
    destination_interface{YType::str, "destination-interface"},
    traffic_direction{YType::enumeration, "traffic-direction"}
        ,
    traffic_parameters(std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters>())
    , destination_id(std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId>())
{
    traffic_parameters->parent = this;
    destination_id->parent = this;

    yang_name = "attachment"; yang_parent_name = "attachments"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::~Attachment()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| interface.is_set
	|| name.is_set
	|| local_class.is_set
	|| id.is_set
	|| global_class.is_set
	|| session_is_configured.is_set
	|| source_interface.is_set
	|| source_interface_state.is_set
	|| pfi_error.is_set
	|| dest_pw_type_not_supported.is_set
	|| source_interface_is_a_destination.is_set
	|| destination_interface.is_set
	|| traffic_direction.is_set
	|| (traffic_parameters !=  nullptr && traffic_parameters->has_data())
	|| (destination_id !=  nullptr && destination_id->has_data());
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local_class.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(global_class.yfilter)
	|| ydk::is_set(session_is_configured.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_interface_state.yfilter)
	|| ydk::is_set(pfi_error.yfilter)
	|| ydk::is_set(dest_pw_type_not_supported.yfilter)
	|| ydk::is_set(source_interface_is_a_destination.yfilter)
	|| ydk::is_set(destination_interface.yfilter)
	|| ydk::is_set(traffic_direction.yfilter)
	|| (traffic_parameters !=  nullptr && traffic_parameters->has_operation())
	|| (destination_id !=  nullptr && destination_id->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    ADD_KEY_TOKEN(session, "session");
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local_class.is_set || is_set(local_class.yfilter)) leaf_name_data.push_back(local_class.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (global_class.is_set || is_set(global_class.yfilter)) leaf_name_data.push_back(global_class.get_name_leafdata());
    if (session_is_configured.is_set || is_set(session_is_configured.yfilter)) leaf_name_data.push_back(session_is_configured.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_interface_state.is_set || is_set(source_interface_state.yfilter)) leaf_name_data.push_back(source_interface_state.get_name_leafdata());
    if (pfi_error.is_set || is_set(pfi_error.yfilter)) leaf_name_data.push_back(pfi_error.get_name_leafdata());
    if (dest_pw_type_not_supported.is_set || is_set(dest_pw_type_not_supported.yfilter)) leaf_name_data.push_back(dest_pw_type_not_supported.get_name_leafdata());
    if (source_interface_is_a_destination.is_set || is_set(source_interface_is_a_destination.yfilter)) leaf_name_data.push_back(source_interface_is_a_destination.get_name_leafdata());
    if (destination_interface.is_set || is_set(destination_interface.yfilter)) leaf_name_data.push_back(destination_interface.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.yfilter)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-parameters")
    {
        if(traffic_parameters == nullptr)
        {
            traffic_parameters = std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters>();
        }
        return traffic_parameters;
    }

    if(child_yang_name == "destination-id")
    {
        if(destination_id == nullptr)
        {
            destination_id = std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId>();
        }
        return destination_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_parameters != nullptr)
    {
        _children["traffic-parameters"] = traffic_parameters;
    }

    if(destination_id != nullptr)
    {
        _children["destination-id"] = destination_id;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-class")
    {
        local_class = value;
        local_class.value_namespace = name_space;
        local_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-class")
    {
        global_class = value;
        global_class.value_namespace = name_space;
        global_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-is-configured")
    {
        session_is_configured = value;
        session_is_configured.value_namespace = name_space;
        session_is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface-state")
    {
        source_interface_state = value;
        source_interface_state.value_namespace = name_space;
        source_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfi-error")
    {
        pfi_error = value;
        pfi_error.value_namespace = name_space;
        pfi_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-pw-type-not-supported")
    {
        dest_pw_type_not_supported = value;
        dest_pw_type_not_supported.value_namespace = name_space;
        dest_pw_type_not_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface-is-a-destination")
    {
        source_interface_is_a_destination = value;
        source_interface_is_a_destination.value_namespace = name_space;
        source_interface_is_a_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-interface")
    {
        destination_interface = value;
        destination_interface.value_namespace = name_space;
        destination_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
        traffic_direction.value_namespace = name_space;
        traffic_direction.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local-class")
    {
        local_class.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "global-class")
    {
        global_class.yfilter = yfilter;
    }
    if(value_path == "session-is-configured")
    {
        session_is_configured.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-interface-state")
    {
        source_interface_state.yfilter = yfilter;
    }
    if(value_path == "pfi-error")
    {
        pfi_error.yfilter = yfilter;
    }
    if(value_path == "dest-pw-type-not-supported")
    {
        dest_pw_type_not_supported.yfilter = yfilter;
    }
    if(value_path == "source-interface-is-a-destination")
    {
        source_interface_is_a_destination.yfilter = yfilter;
    }
    if(value_path == "destination-interface")
    {
        destination_interface.yfilter = yfilter;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-parameters" || name == "destination-id" || name == "session" || name == "interface" || name == "name" || name == "local-class" || name == "id" || name == "global-class" || name == "session-is-configured" || name == "source-interface" || name == "source-interface-state" || name == "pfi-error" || name == "dest-pw-type-not-supported" || name == "source-interface-is-a-destination" || name == "destination-interface" || name == "traffic-direction")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::TrafficParameters()
    :
    traffic_direction{YType::enumeration, "traffic-direction"},
    port_level{YType::boolean, "port-level"},
    is_acl_enabled{YType::boolean, "is-acl-enabled"},
    mirror_bytes{YType::uint32, "mirror-bytes"},
    mirror_interval{YType::enumeration, "mirror-interval"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "traffic-parameters"; yang_parent_name = "attachment"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::~TrafficParameters()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::has_data() const
{
    if (is_presence_container) return true;
    return traffic_direction.is_set
	|| port_level.is_set
	|| is_acl_enabled.is_set
	|| mirror_bytes.is_set
	|| mirror_interval.is_set
	|| acl_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_direction.yfilter)
	|| ydk::is_set(port_level.yfilter)
	|| ydk::is_set(is_acl_enabled.yfilter)
	|| ydk::is_set(mirror_bytes.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_direction.is_set || is_set(traffic_direction.yfilter)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());
    if (port_level.is_set || is_set(port_level.yfilter)) leaf_name_data.push_back(port_level.get_name_leafdata());
    if (is_acl_enabled.is_set || is_set(is_acl_enabled.yfilter)) leaf_name_data.push_back(is_acl_enabled.get_name_leafdata());
    if (mirror_bytes.is_set || is_set(mirror_bytes.yfilter)) leaf_name_data.push_back(mirror_bytes.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
        traffic_direction.value_namespace = name_space;
        traffic_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level")
    {
        port_level = value;
        port_level.value_namespace = name_space;
        port_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled = value;
        is_acl_enabled.value_namespace = name_space;
        is_acl_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes = value;
        mirror_bytes.value_namespace = name_space;
        mirror_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-direction")
    {
        traffic_direction.yfilter = yfilter;
    }
    if(value_path == "port-level")
    {
        port_level.yfilter = yfilter;
    }
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled.yfilter = yfilter;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-direction" || name == "port-level" || name == "is-acl-enabled" || name == "mirror-bytes" || name == "mirror-interval" || name == "acl-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::DestinationId()
    :
    destination_class{YType::enumeration, "destination-class"},
    interface{YType::str, "interface"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    invalid_value{YType::uint32, "invalid-value"}
        ,
    ipv4_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf>())
    , ipv6_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    ipv6_address_and_vrf->parent = this;

    yang_name = "destination-id"; yang_parent_name = "attachment"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::has_data() const
{
    if (is_presence_container) return true;
    return destination_class.is_set
	|| interface.is_set
	|| pseudowire_id.is_set
	|| invalid_value.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_class.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(invalid_value.yfilter)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_class.is_set || is_set(destination_class.yfilter)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.yfilter)) leaf_name_data.push_back(invalid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf == nullptr)
        {
            ipv4_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf>();
        }
        return ipv4_address_and_vrf;
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf == nullptr)
        {
            ipv6_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf>();
        }
        return ipv6_address_and_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_address_and_vrf != nullptr)
    {
        _children["ipv4-address-and-vrf"] = ipv4_address_and_vrf;
    }

    if(ipv6_address_and_vrf != nullptr)
    {
        _children["ipv6-address-and-vrf"] = ipv6_address_and_vrf;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
        destination_class.value_namespace = name_space;
        destination_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
        invalid_value.value_namespace = name_space;
        invalid_value.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-class")
    {
        destination_class.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "invalid-value")
    {
        invalid_value.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-and-vrf" || name == "ipv6-address-and-vrf" || name == "destination-class" || name == "interface" || name == "pseudowire-id" || name == "invalid-value")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    ipv4_address{YType::str, "ipv4-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSessions()
    :
    hardware_session(this, {})
{

    yang_name = "hardware-sessions"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::HardwareSessions::~HardwareSessions()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_session.len(); index++)
    {
        if(hardware_session[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::has_operation() const
{
    for (std::size_t index=0; index<hardware_session.len(); index++)
    {
        if(hardware_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::HardwareSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::HardwareSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-session")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession>();
        ent_->parent = this;
        hardware_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::HardwareSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-session")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::HardwareSession()
    :
    session_class{YType::enumeration, "session-class"},
    session_id{YType::uint32, "session-id"},
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    session_class_xr{YType::enumeration, "session-class-xr"},
    destination_interface{YType::str, "destination-interface"},
    platform_error{YType::uint32, "platform-error"},
    inject_interface_ifh{YType::str, "inject-interface-ifh"},
    inject_interface_mac{YType::str, "inject-interface-mac"},
    inject_interface_invalid{YType::boolean, "inject-interface-invalid"}
        ,
    destination_id(std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId>())
{
    destination_id->parent = this;

    yang_name = "hardware-session"; yang_parent_name = "hardware-sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::~HardwareSession()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::has_data() const
{
    if (is_presence_container) return true;
    return session_class.is_set
	|| session_id.is_set
	|| id.is_set
	|| name.is_set
	|| session_class_xr.is_set
	|| destination_interface.is_set
	|| platform_error.is_set
	|| inject_interface_ifh.is_set
	|| inject_interface_mac.is_set
	|| inject_interface_invalid.is_set
	|| (destination_id !=  nullptr && destination_id->has_data());
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(session_class_xr.yfilter)
	|| ydk::is_set(destination_interface.yfilter)
	|| ydk::is_set(platform_error.yfilter)
	|| ydk::is_set(inject_interface_ifh.yfilter)
	|| ydk::is_set(inject_interface_mac.yfilter)
	|| ydk::is_set(inject_interface_invalid.yfilter)
	|| (destination_id !=  nullptr && destination_id->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-session";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (session_class_xr.is_set || is_set(session_class_xr.yfilter)) leaf_name_data.push_back(session_class_xr.get_name_leafdata());
    if (destination_interface.is_set || is_set(destination_interface.yfilter)) leaf_name_data.push_back(destination_interface.get_name_leafdata());
    if (platform_error.is_set || is_set(platform_error.yfilter)) leaf_name_data.push_back(platform_error.get_name_leafdata());
    if (inject_interface_ifh.is_set || is_set(inject_interface_ifh.yfilter)) leaf_name_data.push_back(inject_interface_ifh.get_name_leafdata());
    if (inject_interface_mac.is_set || is_set(inject_interface_mac.yfilter)) leaf_name_data.push_back(inject_interface_mac.get_name_leafdata());
    if (inject_interface_invalid.is_set || is_set(inject_interface_invalid.yfilter)) leaf_name_data.push_back(inject_interface_invalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-id")
    {
        if(destination_id == nullptr)
        {
            destination_id = std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId>();
        }
        return destination_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_id != nullptr)
    {
        _children["destination-id"] = destination_id;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "session-class-xr")
    {
        session_class_xr = value;
        session_class_xr.value_namespace = name_space;
        session_class_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-interface")
    {
        destination_interface = value;
        destination_interface.value_namespace = name_space;
        destination_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-error")
    {
        platform_error = value;
        platform_error.value_namespace = name_space;
        platform_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inject-interface-ifh")
    {
        inject_interface_ifh = value;
        inject_interface_ifh.value_namespace = name_space;
        inject_interface_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inject-interface-mac")
    {
        inject_interface_mac = value;
        inject_interface_mac.value_namespace = name_space;
        inject_interface_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inject-interface-invalid")
    {
        inject_interface_invalid = value;
        inject_interface_invalid.value_namespace = name_space;
        inject_interface_invalid.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "session-class-xr")
    {
        session_class_xr.yfilter = yfilter;
    }
    if(value_path == "destination-interface")
    {
        destination_interface.yfilter = yfilter;
    }
    if(value_path == "platform-error")
    {
        platform_error.yfilter = yfilter;
    }
    if(value_path == "inject-interface-ifh")
    {
        inject_interface_ifh.yfilter = yfilter;
    }
    if(value_path == "inject-interface-mac")
    {
        inject_interface_mac.yfilter = yfilter;
    }
    if(value_path == "inject-interface-invalid")
    {
        inject_interface_invalid.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-id" || name == "session-class" || name == "session-id" || name == "id" || name == "name" || name == "session-class-xr" || name == "destination-interface" || name == "platform-error" || name == "inject-interface-ifh" || name == "inject-interface-mac" || name == "inject-interface-invalid")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::DestinationId()
    :
    destination_class{YType::enumeration, "destination-class"},
    interface{YType::str, "interface"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    invalid_value{YType::uint32, "invalid-value"}
        ,
    ipv4_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf>())
    , ipv6_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    ipv6_address_and_vrf->parent = this;

    yang_name = "destination-id"; yang_parent_name = "hardware-session"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::has_data() const
{
    if (is_presence_container) return true;
    return destination_class.is_set
	|| interface.is_set
	|| pseudowire_id.is_set
	|| invalid_value.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_class.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(invalid_value.yfilter)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_class.is_set || is_set(destination_class.yfilter)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.yfilter)) leaf_name_data.push_back(invalid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf == nullptr)
        {
            ipv4_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf>();
        }
        return ipv4_address_and_vrf;
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf == nullptr)
        {
            ipv6_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf>();
        }
        return ipv6_address_and_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_address_and_vrf != nullptr)
    {
        _children["ipv4-address-and-vrf"] = ipv4_address_and_vrf;
    }

    if(ipv6_address_and_vrf != nullptr)
    {
        _children["ipv6-address-and-vrf"] = ipv6_address_and_vrf;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
        destination_class.value_namespace = name_space;
        destination_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
        invalid_value.value_namespace = name_space;
        invalid_value.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-class")
    {
        destination_class.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "invalid-value")
    {
        invalid_value.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-and-vrf" || name == "ipv6-address-and-vrf" || name == "destination-class" || name == "interface" || name == "pseudowire-id" || name == "invalid-value")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    ipv4_address{YType::str, "ipv4-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::~Interfaces()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::get_children() const
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

void SpanMonitorSession::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    source_interface{YType::str, "source-interface"},
    platform_error{YType::uint32, "platform-error"},
    destination_interface{YType::str, "destination-interface"},
    traffic_direction{YType::enumeration, "traffic-direction"}
        ,
    destination_id(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId>())
    , traffic_mirroring_parameters(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters>())
    , attachment(this, {})
{
    destination_id->parent = this;
    traffic_mirroring_parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attachment.len(); index++)
    {
        if(attachment[index]->has_data())
            return true;
    }
    return interface.is_set
	|| source_interface.is_set
	|| platform_error.is_set
	|| destination_interface.is_set
	|| traffic_direction.is_set
	|| (destination_id !=  nullptr && destination_id->has_data())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<attachment.len(); index++)
    {
        if(attachment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(platform_error.yfilter)
	|| ydk::is_set(destination_interface.yfilter)
	|| ydk::is_set(traffic_direction.yfilter)
	|| (destination_id !=  nullptr && destination_id->has_operation())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (platform_error.is_set || is_set(platform_error.yfilter)) leaf_name_data.push_back(platform_error.get_name_leafdata());
    if (destination_interface.is_set || is_set(destination_interface.yfilter)) leaf_name_data.push_back(destination_interface.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.yfilter)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-id")
    {
        if(destination_id == nullptr)
        {
            destination_id = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId>();
        }
        return destination_id;
    }

    if(child_yang_name == "traffic-mirroring-parameters")
    {
        if(traffic_mirroring_parameters == nullptr)
        {
            traffic_mirroring_parameters = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters>();
        }
        return traffic_mirroring_parameters;
    }

    if(child_yang_name == "attachment")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment>();
        ent_->parent = this;
        attachment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_id != nullptr)
    {
        _children["destination-id"] = destination_id;
    }

    if(traffic_mirroring_parameters != nullptr)
    {
        _children["traffic-mirroring-parameters"] = traffic_mirroring_parameters;
    }

    count_ = 0;
    for (auto ent_ : attachment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-error")
    {
        platform_error = value;
        platform_error.value_namespace = name_space;
        platform_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-interface")
    {
        destination_interface = value;
        destination_interface.value_namespace = name_space;
        destination_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
        traffic_direction.value_namespace = name_space;
        traffic_direction.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "platform-error")
    {
        platform_error.yfilter = yfilter;
    }
    if(value_path == "destination-interface")
    {
        destination_interface.yfilter = yfilter;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-id" || name == "traffic-mirroring-parameters" || name == "attachment" || name == "interface" || name == "source-interface" || name == "platform-error" || name == "destination-interface" || name == "traffic-direction")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::DestinationId()
    :
    destination_class{YType::enumeration, "destination-class"},
    interface{YType::str, "interface"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    invalid_value{YType::uint32, "invalid-value"}
        ,
    ipv4_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf>())
    , ipv6_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    ipv6_address_and_vrf->parent = this;

    yang_name = "destination-id"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::has_data() const
{
    if (is_presence_container) return true;
    return destination_class.is_set
	|| interface.is_set
	|| pseudowire_id.is_set
	|| invalid_value.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_class.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(invalid_value.yfilter)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_class.is_set || is_set(destination_class.yfilter)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.yfilter)) leaf_name_data.push_back(invalid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf == nullptr)
        {
            ipv4_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf>();
        }
        return ipv4_address_and_vrf;
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf == nullptr)
        {
            ipv6_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf>();
        }
        return ipv6_address_and_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_address_and_vrf != nullptr)
    {
        _children["ipv4-address-and-vrf"] = ipv4_address_and_vrf;
    }

    if(ipv6_address_and_vrf != nullptr)
    {
        _children["ipv6-address-and-vrf"] = ipv6_address_and_vrf;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
        destination_class.value_namespace = name_space;
        destination_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
        invalid_value.value_namespace = name_space;
        invalid_value.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-class")
    {
        destination_class.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "invalid-value")
    {
        invalid_value.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-and-vrf" || name == "ipv6-address-and-vrf" || name == "destination-class" || name == "interface" || name == "pseudowire-id" || name == "invalid-value")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    ipv4_address{YType::str, "ipv4-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::TrafficMirroringParameters()
    :
    traffic_direction{YType::enumeration, "traffic-direction"},
    port_level{YType::boolean, "port-level"},
    is_acl_enabled{YType::boolean, "is-acl-enabled"},
    mirror_bytes{YType::uint32, "mirror-bytes"},
    mirror_interval{YType::enumeration, "mirror-interval"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "traffic-mirroring-parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::~TrafficMirroringParameters()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::has_data() const
{
    if (is_presence_container) return true;
    return traffic_direction.is_set
	|| port_level.is_set
	|| is_acl_enabled.is_set
	|| mirror_bytes.is_set
	|| mirror_interval.is_set
	|| acl_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_direction.yfilter)
	|| ydk::is_set(port_level.yfilter)
	|| ydk::is_set(is_acl_enabled.yfilter)
	|| ydk::is_set(mirror_bytes.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-mirroring-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_direction.is_set || is_set(traffic_direction.yfilter)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());
    if (port_level.is_set || is_set(port_level.yfilter)) leaf_name_data.push_back(port_level.get_name_leafdata());
    if (is_acl_enabled.is_set || is_set(is_acl_enabled.yfilter)) leaf_name_data.push_back(is_acl_enabled.get_name_leafdata());
    if (mirror_bytes.is_set || is_set(mirror_bytes.yfilter)) leaf_name_data.push_back(mirror_bytes.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
        traffic_direction.value_namespace = name_space;
        traffic_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level")
    {
        port_level = value;
        port_level.value_namespace = name_space;
        port_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled = value;
        is_acl_enabled.value_namespace = name_space;
        is_acl_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes = value;
        mirror_bytes.value_namespace = name_space;
        mirror_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-direction")
    {
        traffic_direction.yfilter = yfilter;
    }
    if(value_path == "port-level")
    {
        port_level.yfilter = yfilter;
    }
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled.yfilter = yfilter;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-direction" || name == "port-level" || name == "is-acl-enabled" || name == "mirror-bytes" || name == "mirror-interval" || name == "acl-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::Attachment()
    :
    class_{YType::enumeration, "class"}
        ,
    destination_id(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId>())
    , traffic_mirroring_parameters(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters>())
{
    destination_id->parent = this;
    traffic_mirroring_parameters->parent = this;

    yang_name = "attachment"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::~Attachment()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::has_data() const
{
    if (is_presence_container) return true;
    return class_.is_set
	|| (destination_id !=  nullptr && destination_id->has_data())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_.yfilter)
	|| (destination_id !=  nullptr && destination_id->has_operation())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-id")
    {
        if(destination_id == nullptr)
        {
            destination_id = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId>();
        }
        return destination_id;
    }

    if(child_yang_name == "traffic-mirroring-parameters")
    {
        if(traffic_mirroring_parameters == nullptr)
        {
            traffic_mirroring_parameters = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters>();
        }
        return traffic_mirroring_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_id != nullptr)
    {
        _children["destination-id"] = destination_id;
    }

    if(traffic_mirroring_parameters != nullptr)
    {
        _children["traffic-mirroring-parameters"] = traffic_mirroring_parameters;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-id" || name == "traffic-mirroring-parameters" || name == "class")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::DestinationId()
    :
    destination_class{YType::enumeration, "destination-class"},
    interface{YType::str, "interface"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    invalid_value{YType::uint32, "invalid-value"}
        ,
    ipv4_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf>())
    , ipv6_address_and_vrf(std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    ipv6_address_and_vrf->parent = this;

    yang_name = "destination-id"; yang_parent_name = "attachment"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::has_data() const
{
    if (is_presence_container) return true;
    return destination_class.is_set
	|| interface.is_set
	|| pseudowire_id.is_set
	|| invalid_value.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_class.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(invalid_value.yfilter)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_class.is_set || is_set(destination_class.yfilter)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.yfilter)) leaf_name_data.push_back(invalid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf == nullptr)
        {
            ipv4_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf>();
        }
        return ipv4_address_and_vrf;
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf == nullptr)
        {
            ipv6_address_and_vrf = std::make_shared<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf>();
        }
        return ipv6_address_and_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_address_and_vrf != nullptr)
    {
        _children["ipv4-address-and-vrf"] = ipv4_address_and_vrf;
    }

    if(ipv6_address_and_vrf != nullptr)
    {
        _children["ipv6-address-and-vrf"] = ipv6_address_and_vrf;
    }

    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
        destination_class.value_namespace = name_space;
        destination_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
        invalid_value.value_namespace = name_space;
        invalid_value.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-class")
    {
        destination_class.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "invalid-value")
    {
        invalid_value.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-and-vrf" || name == "ipv6-address-and-vrf" || name == "destination-class" || name == "interface" || name == "pseudowire-id" || name == "invalid-value")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    ipv4_address{YType::str, "ipv4-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "vrf-name")
        return true;
    return false;
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::TrafficMirroringParameters()
    :
    traffic_direction{YType::enumeration, "traffic-direction"},
    port_level{YType::boolean, "port-level"},
    is_acl_enabled{YType::boolean, "is-acl-enabled"},
    mirror_bytes{YType::uint32, "mirror-bytes"},
    mirror_interval{YType::enumeration, "mirror-interval"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "traffic-mirroring-parameters"; yang_parent_name = "attachment"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::~TrafficMirroringParameters()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::has_data() const
{
    if (is_presence_container) return true;
    return traffic_direction.is_set
	|| port_level.is_set
	|| is_acl_enabled.is_set
	|| mirror_bytes.is_set
	|| mirror_interval.is_set
	|| acl_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_direction.yfilter)
	|| ydk::is_set(port_level.yfilter)
	|| ydk::is_set(is_acl_enabled.yfilter)
	|| ydk::is_set(mirror_bytes.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-mirroring-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_direction.is_set || is_set(traffic_direction.yfilter)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());
    if (port_level.is_set || is_set(port_level.yfilter)) leaf_name_data.push_back(port_level.get_name_leafdata());
    if (is_acl_enabled.is_set || is_set(is_acl_enabled.yfilter)) leaf_name_data.push_back(is_acl_enabled.get_name_leafdata());
    if (mirror_bytes.is_set || is_set(mirror_bytes.yfilter)) leaf_name_data.push_back(mirror_bytes.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
        traffic_direction.value_namespace = name_space;
        traffic_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level")
    {
        port_level = value;
        port_level.value_namespace = name_space;
        port_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled = value;
        is_acl_enabled.value_namespace = name_space;
        is_acl_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes = value;
        mirror_bytes.value_namespace = name_space;
        mirror_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-direction")
    {
        traffic_direction.yfilter = yfilter;
    }
    if(value_path == "port-level")
    {
        port_level.yfilter = yfilter;
    }
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled.yfilter = yfilter;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-direction" || name == "port-level" || name == "is-acl-enabled" || name == "mirror-bytes" || name == "mirror-interval" || name == "acl-name")
        return true;
    return false;
}

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf DestinationClass::interface_class {0, "interface-class"};
const Enum::YLeaf DestinationClass::pseudowire_class {1, "pseudowire-class"};
const Enum::YLeaf DestinationClass::next_hop_ipv4_class {2, "next-hop-ipv4-class"};
const Enum::YLeaf DestinationClass::next_hop_ipv6_class {3, "next-hop-ipv6-class"};
const Enum::YLeaf DestinationClass::invalid_class {255, "invalid-class"};

const Enum::YLeaf SessionClass::ethernet_class {0, "ethernet-class"};
const Enum::YLeaf SessionClass::ipv4_class {1, "ipv4-class"};
const Enum::YLeaf SessionClass::ipv6_class {2, "ipv6-class"};
const Enum::YLeaf SessionClass::mplsipv4_class {3, "mplsipv4-class"};
const Enum::YLeaf SessionClass::mplsipv6_class {4, "mplsipv6-class"};
const Enum::YLeaf SessionClass::invalid_class {65535, "invalid-class"};

const Enum::YLeaf MirrorInterval::mirror_interval_all {0, "mirror-interval-all"};
const Enum::YLeaf MirrorInterval::mirror_interval512 {1, "mirror-interval512"};
const Enum::YLeaf MirrorInterval::mirror_interval1k {2, "mirror-interval1k"};
const Enum::YLeaf MirrorInterval::mirror_interval2k {3, "mirror-interval2k"};
const Enum::YLeaf MirrorInterval::mirror_interval4k {4, "mirror-interval4k"};
const Enum::YLeaf MirrorInterval::mirror_interval8k {5, "mirror-interval8k"};
const Enum::YLeaf MirrorInterval::mirror_interval16k {6, "mirror-interval16k"};

const Enum::YLeaf TrafficDirection::invalid {0, "invalid"};
const Enum::YLeaf TrafficDirection::rx_only {1, "rx-only"};
const Enum::YLeaf TrafficDirection::tx_only {2, "tx-only"};
const Enum::YLeaf TrafficDirection::both {3, "both"};


}
}



#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_tc_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_tc_oper {

TrafficCollector::TrafficCollector()
    :
    external_interfaces(std::make_shared<TrafficCollector::ExternalInterfaces>())
    , summary(std::make_shared<TrafficCollector::Summary>())
    , vrf_table(std::make_shared<TrafficCollector::VrfTable>())
    , afs(std::make_shared<TrafficCollector::Afs>())
{
    external_interfaces->parent = this;
    summary->parent = this;
    vrf_table->parent = this;
    afs->parent = this;

    yang_name = "traffic-collector"; yang_parent_name = "Cisco-IOS-XR-infra-tc-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

TrafficCollector::~TrafficCollector()
{
}

bool TrafficCollector::has_data() const
{
    if (is_presence_container) return true;
    return (external_interfaces !=  nullptr && external_interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data())
	|| (afs !=  nullptr && afs->has_data());
}

bool TrafficCollector::has_operation() const
{
    return is_set(yfilter)
	|| (external_interfaces !=  nullptr && external_interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation())
	|| (afs !=  nullptr && afs->has_operation());
}

std::string TrafficCollector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interfaces")
    {
        if(external_interfaces == nullptr)
        {
            external_interfaces = std::make_shared<TrafficCollector::ExternalInterfaces>();
        }
        return external_interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<TrafficCollector::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<TrafficCollector::VrfTable>();
        }
        return vrf_table;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<TrafficCollector::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(external_interfaces != nullptr)
    {
        _children["external-interfaces"] = external_interfaces;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(vrf_table != nullptr)
    {
        _children["vrf-table"] = vrf_table;
    }

    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
}

void TrafficCollector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> TrafficCollector::clone_ptr() const
{
    return std::make_shared<TrafficCollector>();
}

std::string TrafficCollector::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TrafficCollector::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TrafficCollector::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TrafficCollector::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TrafficCollector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interfaces" || name == "summary" || name == "vrf-table" || name == "afs")
        return true;
    return false;
}

TrafficCollector::ExternalInterfaces::ExternalInterfaces()
    :
    external_interface(this, {"interface_name"})
{

    yang_name = "external-interfaces"; yang_parent_name = "traffic-collector"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::ExternalInterfaces::~ExternalInterfaces()
{
}

bool TrafficCollector::ExternalInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_interface.len(); index++)
    {
        if(external_interface[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::ExternalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<external_interface.len(); index++)
    {
        if(external_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::ExternalInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::ExternalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::ExternalInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::ExternalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interface")
    {
        auto ent_ = std::make_shared<TrafficCollector::ExternalInterfaces::ExternalInterface>();
        ent_->parent = this;
        external_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::ExternalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : external_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::ExternalInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::ExternalInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::ExternalInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interface")
        return true;
    return false;
}

TrafficCollector::ExternalInterfaces::ExternalInterface::ExternalInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_handle{YType::uint32, "interface-handle"},
    vrfid{YType::uint32, "vrfid"},
    is_interface_enabled{YType::boolean, "is-interface-enabled"}
{

    yang_name = "external-interface"; yang_parent_name = "external-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::ExternalInterfaces::ExternalInterface::~ExternalInterface()
{
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_handle.is_set
	|| vrfid.is_set
	|| is_interface_enabled.is_set;
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(is_interface_enabled.yfilter);
}

std::string TrafficCollector::ExternalInterfaces::ExternalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/external-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::ExternalInterfaces::ExternalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::ExternalInterfaces::ExternalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (is_interface_enabled.is_set || is_set(is_interface_enabled.yfilter)) leaf_name_data.push_back(is_interface_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::ExternalInterfaces::ExternalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::ExternalInterfaces::ExternalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::ExternalInterfaces::ExternalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-enabled")
    {
        is_interface_enabled = value;
        is_interface_enabled.value_namespace = name_space;
        is_interface_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::ExternalInterfaces::ExternalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "is-interface-enabled")
    {
        is_interface_enabled.yfilter = yfilter;
    }
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "interface-handle" || name == "vrfid" || name == "is-interface-enabled")
        return true;
    return false;
}

TrafficCollector::Summary::Summary()
    :
    collection_interval{YType::uint8, "collection-interval"},
    collection_timer_is_running{YType::boolean, "collection-timer-is-running"},
    timeout_interval{YType::uint16, "timeout-interval"},
    timeout_timer_is_running{YType::boolean, "timeout-timer-is-running"},
    history_size{YType::uint8, "history-size"}
        ,
    database_statistics_external_interface(std::make_shared<TrafficCollector::Summary::DatabaseStatisticsExternalInterface>())
    , vrf_statistic(this, {})
    , collection_message_statistic(this, {})
    , checkpoint_message_statistic(this, {})
{
    database_statistics_external_interface->parent = this;

    yang_name = "summary"; yang_parent_name = "traffic-collector"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Summary::~Summary()
{
}

bool TrafficCollector::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_statistic.len(); index++)
    {
        if(vrf_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<collection_message_statistic.len(); index++)
    {
        if(collection_message_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<checkpoint_message_statistic.len(); index++)
    {
        if(checkpoint_message_statistic[index]->has_data())
            return true;
    }
    return collection_interval.is_set
	|| collection_timer_is_running.is_set
	|| timeout_interval.is_set
	|| timeout_timer_is_running.is_set
	|| history_size.is_set
	|| (database_statistics_external_interface !=  nullptr && database_statistics_external_interface->has_data());
}

bool TrafficCollector::Summary::has_operation() const
{
    for (std::size_t index=0; index<vrf_statistic.len(); index++)
    {
        if(vrf_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<collection_message_statistic.len(); index++)
    {
        if(collection_message_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<checkpoint_message_statistic.len(); index++)
    {
        if(checkpoint_message_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(collection_interval.yfilter)
	|| ydk::is_set(collection_timer_is_running.yfilter)
	|| ydk::is_set(timeout_interval.yfilter)
	|| ydk::is_set(timeout_timer_is_running.yfilter)
	|| ydk::is_set(history_size.yfilter)
	|| (database_statistics_external_interface !=  nullptr && database_statistics_external_interface->has_operation());
}

std::string TrafficCollector::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collection_interval.is_set || is_set(collection_interval.yfilter)) leaf_name_data.push_back(collection_interval.get_name_leafdata());
    if (collection_timer_is_running.is_set || is_set(collection_timer_is_running.yfilter)) leaf_name_data.push_back(collection_timer_is_running.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.yfilter)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());
    if (timeout_timer_is_running.is_set || is_set(timeout_timer_is_running.yfilter)) leaf_name_data.push_back(timeout_timer_is_running.get_name_leafdata());
    if (history_size.is_set || is_set(history_size.yfilter)) leaf_name_data.push_back(history_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-statistics-external-interface")
    {
        if(database_statistics_external_interface == nullptr)
        {
            database_statistics_external_interface = std::make_shared<TrafficCollector::Summary::DatabaseStatisticsExternalInterface>();
        }
        return database_statistics_external_interface;
    }

    if(child_yang_name == "vrf-statistic")
    {
        auto ent_ = std::make_shared<TrafficCollector::Summary::VrfStatistic>();
        ent_->parent = this;
        vrf_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "collection-message-statistic")
    {
        auto ent_ = std::make_shared<TrafficCollector::Summary::CollectionMessageStatistic>();
        ent_->parent = this;
        collection_message_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "checkpoint-message-statistic")
    {
        auto ent_ = std::make_shared<TrafficCollector::Summary::CheckpointMessageStatistic>();
        ent_->parent = this;
        checkpoint_message_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_statistics_external_interface != nullptr)
    {
        _children["database-statistics-external-interface"] = database_statistics_external_interface;
    }

    count_ = 0;
    for (auto ent_ : vrf_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : collection_message_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : checkpoint_message_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collection-interval")
    {
        collection_interval = value;
        collection_interval.value_namespace = name_space;
        collection_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-timer-is-running")
    {
        collection_timer_is_running = value;
        collection_timer_is_running.value_namespace = name_space;
        collection_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval = value;
        timeout_interval.value_namespace = name_space;
        timeout_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-timer-is-running")
    {
        timeout_timer_is_running = value;
        timeout_timer_is_running.value_namespace = name_space;
        timeout_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-size")
    {
        history_size = value;
        history_size.value_namespace = name_space;
        history_size.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collection-interval")
    {
        collection_interval.yfilter = yfilter;
    }
    if(value_path == "collection-timer-is-running")
    {
        collection_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval.yfilter = yfilter;
    }
    if(value_path == "timeout-timer-is-running")
    {
        timeout_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "history-size")
    {
        history_size.yfilter = yfilter;
    }
}

bool TrafficCollector::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-statistics-external-interface" || name == "vrf-statistic" || name == "collection-message-statistic" || name == "checkpoint-message-statistic" || name == "collection-interval" || name == "collection-timer-is-running" || name == "timeout-interval" || name == "timeout-timer-is-running" || name == "history-size")
        return true;
    return false;
}

TrafficCollector::Summary::DatabaseStatisticsExternalInterface::DatabaseStatisticsExternalInterface()
    :
    number_of_entries{YType::uint32, "number-of-entries"},
    number_of_stale_entries{YType::uint32, "number-of-stale-entries"},
    number_of_add_o_perations{YType::uint64, "number-of-add-o-perations"},
    number_of_delete_o_perations{YType::uint64, "number-of-delete-o-perations"}
{

    yang_name = "database-statistics-external-interface"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Summary::DatabaseStatisticsExternalInterface::~DatabaseStatisticsExternalInterface()
{
}

bool TrafficCollector::Summary::DatabaseStatisticsExternalInterface::has_data() const
{
    if (is_presence_container) return true;
    return number_of_entries.is_set
	|| number_of_stale_entries.is_set
	|| number_of_add_o_perations.is_set
	|| number_of_delete_o_perations.is_set;
}

bool TrafficCollector::Summary::DatabaseStatisticsExternalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_entries.yfilter)
	|| ydk::is_set(number_of_stale_entries.yfilter)
	|| ydk::is_set(number_of_add_o_perations.yfilter)
	|| ydk::is_set(number_of_delete_o_perations.yfilter);
}

std::string TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-statistics-external-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_entries.is_set || is_set(number_of_entries.yfilter)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());
    if (number_of_stale_entries.is_set || is_set(number_of_stale_entries.yfilter)) leaf_name_data.push_back(number_of_stale_entries.get_name_leafdata());
    if (number_of_add_o_perations.is_set || is_set(number_of_add_o_perations.yfilter)) leaf_name_data.push_back(number_of_add_o_perations.get_name_leafdata());
    if (number_of_delete_o_perations.is_set || is_set(number_of_delete_o_perations.yfilter)) leaf_name_data.push_back(number_of_delete_o_perations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Summary::DatabaseStatisticsExternalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
        number_of_entries.value_namespace = name_space;
        number_of_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries = value;
        number_of_stale_entries.value_namespace = name_space;
        number_of_stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations = value;
        number_of_add_o_perations.value_namespace = name_space;
        number_of_add_o_perations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations = value;
        number_of_delete_o_perations.value_namespace = name_space;
        number_of_delete_o_perations.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Summary::DatabaseStatisticsExternalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-entries")
    {
        number_of_entries.yfilter = yfilter;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries.yfilter = yfilter;
    }
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations.yfilter = yfilter;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations.yfilter = yfilter;
    }
}

bool TrafficCollector::Summary::DatabaseStatisticsExternalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-entries" || name == "number-of-stale-entries" || name == "number-of-add-o-perations" || name == "number-of-delete-o-perations")
        return true;
    return false;
}

TrafficCollector::Summary::VrfStatistic::VrfStatistic()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    database_statistics_ipv4(std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4>())
    , database_statistics_tunnel(std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel>())
{
    database_statistics_ipv4->parent = this;
    database_statistics_tunnel->parent = this;

    yang_name = "vrf-statistic"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Summary::VrfStatistic::~VrfStatistic()
{
}

bool TrafficCollector::Summary::VrfStatistic::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (database_statistics_ipv4 !=  nullptr && database_statistics_ipv4->has_data())
	|| (database_statistics_tunnel !=  nullptr && database_statistics_tunnel->has_data());
}

bool TrafficCollector::Summary::VrfStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (database_statistics_ipv4 !=  nullptr && database_statistics_ipv4->has_operation())
	|| (database_statistics_tunnel !=  nullptr && database_statistics_tunnel->has_operation());
}

std::string TrafficCollector::Summary::VrfStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Summary::VrfStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Summary::VrfStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Summary::VrfStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-statistics-ipv4")
    {
        if(database_statistics_ipv4 == nullptr)
        {
            database_statistics_ipv4 = std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4>();
        }
        return database_statistics_ipv4;
    }

    if(child_yang_name == "database-statistics-tunnel")
    {
        if(database_statistics_tunnel == nullptr)
        {
            database_statistics_tunnel = std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel>();
        }
        return database_statistics_tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Summary::VrfStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_statistics_ipv4 != nullptr)
    {
        _children["database-statistics-ipv4"] = database_statistics_ipv4;
    }

    if(database_statistics_tunnel != nullptr)
    {
        _children["database-statistics-tunnel"] = database_statistics_tunnel;
    }

    return _children;
}

void TrafficCollector::Summary::VrfStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Summary::VrfStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool TrafficCollector::Summary::VrfStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-statistics-ipv4" || name == "database-statistics-tunnel" || name == "vrf-name")
        return true;
    return false;
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::DatabaseStatisticsIpv4()
    :
    number_of_entries{YType::uint32, "number-of-entries"},
    number_of_stale_entries{YType::uint32, "number-of-stale-entries"},
    number_of_add_o_perations{YType::uint64, "number-of-add-o-perations"},
    number_of_delete_o_perations{YType::uint64, "number-of-delete-o-perations"}
{

    yang_name = "database-statistics-ipv4"; yang_parent_name = "vrf-statistic"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::~DatabaseStatisticsIpv4()
{
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::has_data() const
{
    if (is_presence_container) return true;
    return number_of_entries.is_set
	|| number_of_stale_entries.is_set
	|| number_of_add_o_perations.is_set
	|| number_of_delete_o_perations.is_set;
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_entries.yfilter)
	|| ydk::is_set(number_of_stale_entries.yfilter)
	|| ydk::is_set(number_of_add_o_perations.yfilter)
	|| ydk::is_set(number_of_delete_o_perations.yfilter);
}

std::string TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/vrf-statistic/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-statistics-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_entries.is_set || is_set(number_of_entries.yfilter)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());
    if (number_of_stale_entries.is_set || is_set(number_of_stale_entries.yfilter)) leaf_name_data.push_back(number_of_stale_entries.get_name_leafdata());
    if (number_of_add_o_perations.is_set || is_set(number_of_add_o_perations.yfilter)) leaf_name_data.push_back(number_of_add_o_perations.get_name_leafdata());
    if (number_of_delete_o_perations.is_set || is_set(number_of_delete_o_perations.yfilter)) leaf_name_data.push_back(number_of_delete_o_perations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
        number_of_entries.value_namespace = name_space;
        number_of_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries = value;
        number_of_stale_entries.value_namespace = name_space;
        number_of_stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations = value;
        number_of_add_o_perations.value_namespace = name_space;
        number_of_add_o_perations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations = value;
        number_of_delete_o_perations.value_namespace = name_space;
        number_of_delete_o_perations.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-entries")
    {
        number_of_entries.yfilter = yfilter;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries.yfilter = yfilter;
    }
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations.yfilter = yfilter;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations.yfilter = yfilter;
    }
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-entries" || name == "number-of-stale-entries" || name == "number-of-add-o-perations" || name == "number-of-delete-o-perations")
        return true;
    return false;
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::DatabaseStatisticsTunnel()
    :
    number_of_entries{YType::uint32, "number-of-entries"},
    number_of_stale_entries{YType::uint32, "number-of-stale-entries"},
    number_of_add_o_perations{YType::uint64, "number-of-add-o-perations"},
    number_of_delete_o_perations{YType::uint64, "number-of-delete-o-perations"}
{

    yang_name = "database-statistics-tunnel"; yang_parent_name = "vrf-statistic"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::~DatabaseStatisticsTunnel()
{
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::has_data() const
{
    if (is_presence_container) return true;
    return number_of_entries.is_set
	|| number_of_stale_entries.is_set
	|| number_of_add_o_perations.is_set
	|| number_of_delete_o_perations.is_set;
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_entries.yfilter)
	|| ydk::is_set(number_of_stale_entries.yfilter)
	|| ydk::is_set(number_of_add_o_perations.yfilter)
	|| ydk::is_set(number_of_delete_o_perations.yfilter);
}

std::string TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/vrf-statistic/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-statistics-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_entries.is_set || is_set(number_of_entries.yfilter)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());
    if (number_of_stale_entries.is_set || is_set(number_of_stale_entries.yfilter)) leaf_name_data.push_back(number_of_stale_entries.get_name_leafdata());
    if (number_of_add_o_perations.is_set || is_set(number_of_add_o_perations.yfilter)) leaf_name_data.push_back(number_of_add_o_perations.get_name_leafdata());
    if (number_of_delete_o_perations.is_set || is_set(number_of_delete_o_perations.yfilter)) leaf_name_data.push_back(number_of_delete_o_perations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
        number_of_entries.value_namespace = name_space;
        number_of_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries = value;
        number_of_stale_entries.value_namespace = name_space;
        number_of_stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations = value;
        number_of_add_o_perations.value_namespace = name_space;
        number_of_add_o_perations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations = value;
        number_of_delete_o_perations.value_namespace = name_space;
        number_of_delete_o_perations.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-entries")
    {
        number_of_entries.yfilter = yfilter;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries.yfilter = yfilter;
    }
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations.yfilter = yfilter;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations.yfilter = yfilter;
    }
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-entries" || name == "number-of-stale-entries" || name == "number-of-add-o-perations" || name == "number-of-delete-o-perations")
        return true;
    return false;
}

TrafficCollector::Summary::CollectionMessageStatistic::CollectionMessageStatistic()
    :
    packet_sent{YType::uint64, "packet-sent"},
    byte_sent{YType::uint64, "byte-sent"},
    packet_received{YType::uint64, "packet-received"},
    byte_received{YType::uint64, "byte-received"},
    maximum_roundtrip_latency{YType::uint32, "maximum-roundtrip-latency"},
    maimum_latency_timestamp{YType::uint64, "maimum-latency-timestamp"}
{

    yang_name = "collection-message-statistic"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Summary::CollectionMessageStatistic::~CollectionMessageStatistic()
{
}

bool TrafficCollector::Summary::CollectionMessageStatistic::has_data() const
{
    if (is_presence_container) return true;
    return packet_sent.is_set
	|| byte_sent.is_set
	|| packet_received.is_set
	|| byte_received.is_set
	|| maximum_roundtrip_latency.is_set
	|| maimum_latency_timestamp.is_set;
}

bool TrafficCollector::Summary::CollectionMessageStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_sent.yfilter)
	|| ydk::is_set(byte_sent.yfilter)
	|| ydk::is_set(packet_received.yfilter)
	|| ydk::is_set(byte_received.yfilter)
	|| ydk::is_set(maximum_roundtrip_latency.yfilter)
	|| ydk::is_set(maimum_latency_timestamp.yfilter);
}

std::string TrafficCollector::Summary::CollectionMessageStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Summary::CollectionMessageStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-message-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Summary::CollectionMessageStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_sent.is_set || is_set(packet_sent.yfilter)) leaf_name_data.push_back(packet_sent.get_name_leafdata());
    if (byte_sent.is_set || is_set(byte_sent.yfilter)) leaf_name_data.push_back(byte_sent.get_name_leafdata());
    if (packet_received.is_set || is_set(packet_received.yfilter)) leaf_name_data.push_back(packet_received.get_name_leafdata());
    if (byte_received.is_set || is_set(byte_received.yfilter)) leaf_name_data.push_back(byte_received.get_name_leafdata());
    if (maximum_roundtrip_latency.is_set || is_set(maximum_roundtrip_latency.yfilter)) leaf_name_data.push_back(maximum_roundtrip_latency.get_name_leafdata());
    if (maimum_latency_timestamp.is_set || is_set(maimum_latency_timestamp.yfilter)) leaf_name_data.push_back(maimum_latency_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Summary::CollectionMessageStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Summary::CollectionMessageStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Summary::CollectionMessageStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-sent")
    {
        packet_sent = value;
        packet_sent.value_namespace = name_space;
        packet_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-sent")
    {
        byte_sent = value;
        byte_sent.value_namespace = name_space;
        byte_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-received")
    {
        packet_received = value;
        packet_received.value_namespace = name_space;
        packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-received")
    {
        byte_received = value;
        byte_received.value_namespace = name_space;
        byte_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-roundtrip-latency")
    {
        maximum_roundtrip_latency = value;
        maximum_roundtrip_latency.value_namespace = name_space;
        maximum_roundtrip_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maimum-latency-timestamp")
    {
        maimum_latency_timestamp = value;
        maimum_latency_timestamp.value_namespace = name_space;
        maimum_latency_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Summary::CollectionMessageStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-sent")
    {
        packet_sent.yfilter = yfilter;
    }
    if(value_path == "byte-sent")
    {
        byte_sent.yfilter = yfilter;
    }
    if(value_path == "packet-received")
    {
        packet_received.yfilter = yfilter;
    }
    if(value_path == "byte-received")
    {
        byte_received.yfilter = yfilter;
    }
    if(value_path == "maximum-roundtrip-latency")
    {
        maximum_roundtrip_latency.yfilter = yfilter;
    }
    if(value_path == "maimum-latency-timestamp")
    {
        maimum_latency_timestamp.yfilter = yfilter;
    }
}

bool TrafficCollector::Summary::CollectionMessageStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-sent" || name == "byte-sent" || name == "packet-received" || name == "byte-received" || name == "maximum-roundtrip-latency" || name == "maimum-latency-timestamp")
        return true;
    return false;
}

TrafficCollector::Summary::CheckpointMessageStatistic::CheckpointMessageStatistic()
    :
    packet_sent{YType::uint64, "packet-sent"},
    byte_sent{YType::uint64, "byte-sent"},
    packet_received{YType::uint64, "packet-received"},
    byte_received{YType::uint64, "byte-received"},
    maximum_roundtrip_latency{YType::uint32, "maximum-roundtrip-latency"},
    maimum_latency_timestamp{YType::uint64, "maimum-latency-timestamp"}
{

    yang_name = "checkpoint-message-statistic"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Summary::CheckpointMessageStatistic::~CheckpointMessageStatistic()
{
}

bool TrafficCollector::Summary::CheckpointMessageStatistic::has_data() const
{
    if (is_presence_container) return true;
    return packet_sent.is_set
	|| byte_sent.is_set
	|| packet_received.is_set
	|| byte_received.is_set
	|| maximum_roundtrip_latency.is_set
	|| maimum_latency_timestamp.is_set;
}

bool TrafficCollector::Summary::CheckpointMessageStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_sent.yfilter)
	|| ydk::is_set(byte_sent.yfilter)
	|| ydk::is_set(packet_received.yfilter)
	|| ydk::is_set(byte_received.yfilter)
	|| ydk::is_set(maximum_roundtrip_latency.yfilter)
	|| ydk::is_set(maimum_latency_timestamp.yfilter);
}

std::string TrafficCollector::Summary::CheckpointMessageStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Summary::CheckpointMessageStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-message-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Summary::CheckpointMessageStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_sent.is_set || is_set(packet_sent.yfilter)) leaf_name_data.push_back(packet_sent.get_name_leafdata());
    if (byte_sent.is_set || is_set(byte_sent.yfilter)) leaf_name_data.push_back(byte_sent.get_name_leafdata());
    if (packet_received.is_set || is_set(packet_received.yfilter)) leaf_name_data.push_back(packet_received.get_name_leafdata());
    if (byte_received.is_set || is_set(byte_received.yfilter)) leaf_name_data.push_back(byte_received.get_name_leafdata());
    if (maximum_roundtrip_latency.is_set || is_set(maximum_roundtrip_latency.yfilter)) leaf_name_data.push_back(maximum_roundtrip_latency.get_name_leafdata());
    if (maimum_latency_timestamp.is_set || is_set(maimum_latency_timestamp.yfilter)) leaf_name_data.push_back(maimum_latency_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Summary::CheckpointMessageStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Summary::CheckpointMessageStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Summary::CheckpointMessageStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-sent")
    {
        packet_sent = value;
        packet_sent.value_namespace = name_space;
        packet_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-sent")
    {
        byte_sent = value;
        byte_sent.value_namespace = name_space;
        byte_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-received")
    {
        packet_received = value;
        packet_received.value_namespace = name_space;
        packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-received")
    {
        byte_received = value;
        byte_received.value_namespace = name_space;
        byte_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-roundtrip-latency")
    {
        maximum_roundtrip_latency = value;
        maximum_roundtrip_latency.value_namespace = name_space;
        maximum_roundtrip_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maimum-latency-timestamp")
    {
        maimum_latency_timestamp = value;
        maimum_latency_timestamp.value_namespace = name_space;
        maimum_latency_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Summary::CheckpointMessageStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-sent")
    {
        packet_sent.yfilter = yfilter;
    }
    if(value_path == "byte-sent")
    {
        byte_sent.yfilter = yfilter;
    }
    if(value_path == "packet-received")
    {
        packet_received.yfilter = yfilter;
    }
    if(value_path == "byte-received")
    {
        byte_received.yfilter = yfilter;
    }
    if(value_path == "maximum-roundtrip-latency")
    {
        maximum_roundtrip_latency.yfilter = yfilter;
    }
    if(value_path == "maimum-latency-timestamp")
    {
        maimum_latency_timestamp.yfilter = yfilter;
    }
}

bool TrafficCollector::Summary::CheckpointMessageStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-sent" || name == "byte-sent" || name == "packet-received" || name == "byte-received" || name == "maximum-roundtrip-latency" || name == "maimum-latency-timestamp")
        return true;
    return false;
}

TrafficCollector::VrfTable::VrfTable()
    :
    default_vrf(std::make_shared<TrafficCollector::VrfTable::DefaultVrf>())
{
    default_vrf->parent = this;

    yang_name = "vrf-table"; yang_parent_name = "traffic-collector"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::VrfTable::~VrfTable()
{
}

bool TrafficCollector::VrfTable::has_data() const
{
    if (is_presence_container) return true;
    return (default_vrf !=  nullptr && default_vrf->has_data());
}

bool TrafficCollector::VrfTable::has_operation() const
{
    return is_set(yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string TrafficCollector::VrfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<TrafficCollector::VrfTable::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    return _children;
}

void TrafficCollector::VrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::VrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::VrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs>())
{
    afs->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "vrf-table"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::VrfTable::DefaultVrf::~DefaultVrf()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return (afs !=  nullptr && afs->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/vrf-table/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::VrfTable::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::VrfTable::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::VrfTable::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::~Afs()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/vrf-table/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    counters(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters>())
{
    counters->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::~Af()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/vrf-table/default-vrf/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "af-name")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Counters()
    :
    prefixes(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes>())
    , tunnels(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels>())
{
    prefixes->parent = this;
    tunnels->parent = this;

    yang_name = "counters"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::~Counters()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    if(tunnels != nullptr)
    {
        _children["tunnels"] = tunnels;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "tunnels")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefixes()
    :
    prefix(this, {})
{

    yang_name = "prefixes"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::~Prefixes()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto ent_ = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix>();
        ent_->parent = this;
        prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::Prefix()
    :
    ipaddr{YType::str, "ipaddr"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"},
    prefix{YType::str, "prefix"},
    label_xr{YType::uint32, "label-xr"},
    ldp_label{YType::uint32, "ldp-label"},
    is_active{YType::boolean, "is-active"}
        ,
    base_counter_statistics(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>())
    , traffic_matrix_counter_statistics(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>())
{
    base_counter_statistics->parent = this;
    traffic_matrix_counter_statistics->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::~Prefix()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return ipaddr.is_set
	|| mask.is_set
	|| label.is_set
	|| prefix.is_set
	|| label_xr.is_set
	|| ldp_label.is_set
	|| is_active.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(label_xr.yfilter)
	|| ydk::is_set(ldp_label.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (label_xr.is_set || is_set(label_xr.yfilter)) leaf_name_data.push_back(label_xr.get_name_leafdata());
    if (ldp_label.is_set || is_set(ldp_label.yfilter)) leaf_name_data.push_back(ldp_label.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics == nullptr)
        {
            base_counter_statistics = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>();
        }
        return base_counter_statistics;
    }

    if(child_yang_name == "traffic-matrix-counter-statistics")
    {
        if(traffic_matrix_counter_statistics == nullptr)
        {
            traffic_matrix_counter_statistics = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>();
        }
        return traffic_matrix_counter_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base_counter_statistics != nullptr)
    {
        _children["base-counter-statistics"] = base_counter_statistics;
    }

    if(traffic_matrix_counter_statistics != nullptr)
    {
        _children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipaddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-xr")
    {
        label_xr = value;
        label_xr.value_namespace = name_space;
        label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label")
    {
        ldp_label = value;
        ldp_label.value_namespace = name_space;
        ldp_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipaddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "label-xr")
    {
        label_xr.yfilter = yfilter;
    }
    if(value_path == "ldp-label")
    {
        ldp_label.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-counter-statistics" || name == "traffic-matrix-counter-statistics" || name == "ipaddr" || name == "mask" || name == "label" || name == "prefix" || name == "label-xr" || name == "ldp-label" || name == "is-active")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"},
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"}
        ,
    count_history(this, {})
{

    yang_name = "base-counter-statistics"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_packets_per_second_switched.is_set
	|| transmit_bytes_per_second_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transmit_packets_per_second_switched.yfilter)
	|| ydk::is_set(transmit_bytes_per_second_switched.yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());
    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count-history")
    {
        auto ent_ = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory>();
        ent_->parent = this;
        count_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : count_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
        transmit_packets_per_second_switched.value_namespace = name_space;
        transmit_packets_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
        transmit_bytes_per_second_switched.value_namespace = name_space;
        transmit_bytes_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count-history" || name == "transmit-packets-per-second-switched" || name == "transmit-bytes-per-second-switched")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    is_valid{YType::boolean, "is-valid"}
{

    yang_name = "count-history"; yang_parent_name = "base-counter-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_data() const
{
    if (is_presence_container) return true;
    return event_start_timestamp.is_set
	|| event_end_timestamp.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| is_valid.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_start_timestamp.yfilter)
	|| ydk::is_set(event_end_timestamp.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(is_valid.yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_start_timestamp.is_set || is_set(event_start_timestamp.yfilter)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (event_end_timestamp.is_set || is_set(event_end_timestamp.yfilter)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
        event_start_timestamp.value_namespace = name_space;
        event_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
        event_end_timestamp.value_namespace = name_space;
        event_end_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-start-timestamp" || name == "event-end-timestamp" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "is-valid")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::TrafficMatrixCounterStatistics()
    :
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"},
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"}
        ,
    count_history(this, {})
{

    yang_name = "traffic-matrix-counter-statistics"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::~TrafficMatrixCounterStatistics()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_packets_per_second_switched.is_set
	|| transmit_bytes_per_second_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transmit_packets_per_second_switched.yfilter)
	|| ydk::is_set(transmit_bytes_per_second_switched.yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-matrix-counter-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());
    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count-history")
    {
        auto ent_ = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory>();
        ent_->parent = this;
        count_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : count_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
        transmit_packets_per_second_switched.value_namespace = name_space;
        transmit_packets_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
        transmit_bytes_per_second_switched.value_namespace = name_space;
        transmit_bytes_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count-history" || name == "transmit-packets-per-second-switched" || name == "transmit-bytes-per-second-switched")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::CountHistory()
    :
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    is_valid{YType::boolean, "is-valid"}
{

    yang_name = "count-history"; yang_parent_name = "traffic-matrix-counter-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_data() const
{
    if (is_presence_container) return true;
    return event_start_timestamp.is_set
	|| event_end_timestamp.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| is_valid.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_start_timestamp.yfilter)
	|| ydk::is_set(event_end_timestamp.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(is_valid.yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_start_timestamp.is_set || is_set(event_start_timestamp.yfilter)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (event_end_timestamp.is_set || is_set(event_end_timestamp.yfilter)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
        event_start_timestamp.value_namespace = name_space;
        event_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
        event_end_timestamp.value_namespace = name_space;
        event_end_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-start-timestamp" || name == "event-end-timestamp" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "is-valid")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnels()
    :
    tunnel(this, {"interface_name"})
{

    yang_name = "tunnels"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::~Tunnels()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::Tunnel()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_handle{YType::uint32, "interface-handle"},
    vrfid{YType::uint32, "vrfid"},
    is_active{YType::boolean, "is-active"}
        ,
    base_counter_statistics(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>())
{
    base_counter_statistics->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::~Tunnel()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_handle.is_set
	|| vrfid.is_set
	|| is_active.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics == nullptr)
        {
            base_counter_statistics = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>();
        }
        return base_counter_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base_counter_statistics != nullptr)
    {
        _children["base-counter-statistics"] = base_counter_statistics;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-counter-statistics" || name == "interface-name" || name == "interface-name-xr" || name == "interface-handle" || name == "vrfid" || name == "is-active")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"},
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"}
        ,
    count_history(this, {})
{

    yang_name = "base-counter-statistics"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_packets_per_second_switched.is_set
	|| transmit_bytes_per_second_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transmit_packets_per_second_switched.yfilter)
	|| ydk::is_set(transmit_bytes_per_second_switched.yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());
    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count-history")
    {
        auto ent_ = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory>();
        ent_->parent = this;
        count_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : count_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
        transmit_packets_per_second_switched.value_namespace = name_space;
        transmit_packets_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
        transmit_bytes_per_second_switched.value_namespace = name_space;
        transmit_bytes_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count-history" || name == "transmit-packets-per-second-switched" || name == "transmit-bytes-per-second-switched")
        return true;
    return false;
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    is_valid{YType::boolean, "is-valid"}
{

    yang_name = "count-history"; yang_parent_name = "base-counter-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_data() const
{
    if (is_presence_container) return true;
    return event_start_timestamp.is_set
	|| event_end_timestamp.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| is_valid.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_start_timestamp.yfilter)
	|| ydk::is_set(event_end_timestamp.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(is_valid.yfilter);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_start_timestamp.is_set || is_set(event_start_timestamp.yfilter)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (event_end_timestamp.is_set || is_set(event_end_timestamp.yfilter)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
        event_start_timestamp.value_namespace = name_space;
        event_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
        event_end_timestamp.value_namespace = name_space;
        event_end_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-start-timestamp" || name == "event-end-timestamp" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "is-valid")
        return true;
    return false;
}

TrafficCollector::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "traffic-collector"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Afs::~Afs()
{
}

bool TrafficCollector::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<TrafficCollector::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    counters(std::make_shared<TrafficCollector::Afs::Af::Counters>())
{
    counters->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Afs::Af::~Af()
{
}

bool TrafficCollector::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool TrafficCollector::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string TrafficCollector::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<TrafficCollector::Afs::Af::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void TrafficCollector::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "af-name")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Counters()
    :
    prefixes(std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes>())
    , tunnels(std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels>())
{
    prefixes->parent = this;
    tunnels->parent = this;

    yang_name = "counters"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::~Counters()
{
}

bool TrafficCollector::Afs::Af::Counters::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool TrafficCollector::Afs::Af::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string TrafficCollector::Afs::Af::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    if(tunnels != nullptr)
    {
        _children["tunnels"] = tunnels;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::Afs::Af::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::Afs::Af::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "tunnels")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefixes()
    :
    prefix(this, {})
{

    yang_name = "prefixes"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Prefixes::~Prefixes()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto ent_ = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix>();
        ent_->parent = this;
        prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::Afs::Af::Counters::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::Prefix()
    :
    ipaddr{YType::str, "ipaddr"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"},
    prefix{YType::str, "prefix"},
    label_xr{YType::uint32, "label-xr"},
    ldp_label{YType::uint32, "ldp-label"},
    is_active{YType::boolean, "is-active"}
        ,
    base_counter_statistics(std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>())
    , traffic_matrix_counter_statistics(std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>())
{
    base_counter_statistics->parent = this;
    traffic_matrix_counter_statistics->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::~Prefix()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return ipaddr.is_set
	|| mask.is_set
	|| label.is_set
	|| prefix.is_set
	|| label_xr.is_set
	|| ldp_label.is_set
	|| is_active.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_data());
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(label_xr.yfilter)
	|| ydk::is_set(ldp_label.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_operation());
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (label_xr.is_set || is_set(label_xr.yfilter)) leaf_name_data.push_back(label_xr.get_name_leafdata());
    if (ldp_label.is_set || is_set(ldp_label.yfilter)) leaf_name_data.push_back(ldp_label.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics == nullptr)
        {
            base_counter_statistics = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>();
        }
        return base_counter_statistics;
    }

    if(child_yang_name == "traffic-matrix-counter-statistics")
    {
        if(traffic_matrix_counter_statistics == nullptr)
        {
            traffic_matrix_counter_statistics = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>();
        }
        return traffic_matrix_counter_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base_counter_statistics != nullptr)
    {
        _children["base-counter-statistics"] = base_counter_statistics;
    }

    if(traffic_matrix_counter_statistics != nullptr)
    {
        _children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipaddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-xr")
    {
        label_xr = value;
        label_xr.value_namespace = name_space;
        label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label")
    {
        ldp_label = value;
        ldp_label.value_namespace = name_space;
        ldp_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipaddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "label-xr")
    {
        label_xr.yfilter = yfilter;
    }
    if(value_path == "ldp-label")
    {
        ldp_label.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-counter-statistics" || name == "traffic-matrix-counter-statistics" || name == "ipaddr" || name == "mask" || name == "label" || name == "prefix" || name == "label-xr" || name == "ldp-label" || name == "is-active")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"},
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"}
        ,
    count_history(this, {})
{

    yang_name = "base-counter-statistics"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_packets_per_second_switched.is_set
	|| transmit_bytes_per_second_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transmit_packets_per_second_switched.yfilter)
	|| ydk::is_set(transmit_bytes_per_second_switched.yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());
    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count-history")
    {
        auto ent_ = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory>();
        ent_->parent = this;
        count_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : count_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
        transmit_packets_per_second_switched.value_namespace = name_space;
        transmit_packets_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
        transmit_bytes_per_second_switched.value_namespace = name_space;
        transmit_bytes_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count-history" || name == "transmit-packets-per-second-switched" || name == "transmit-bytes-per-second-switched")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    is_valid{YType::boolean, "is-valid"}
{

    yang_name = "count-history"; yang_parent_name = "base-counter-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_data() const
{
    if (is_presence_container) return true;
    return event_start_timestamp.is_set
	|| event_end_timestamp.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| is_valid.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_start_timestamp.yfilter)
	|| ydk::is_set(event_end_timestamp.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(is_valid.yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_start_timestamp.is_set || is_set(event_start_timestamp.yfilter)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (event_end_timestamp.is_set || is_set(event_end_timestamp.yfilter)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
        event_start_timestamp.value_namespace = name_space;
        event_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
        event_end_timestamp.value_namespace = name_space;
        event_end_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-start-timestamp" || name == "event-end-timestamp" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "is-valid")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::TrafficMatrixCounterStatistics()
    :
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"},
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"}
        ,
    count_history(this, {})
{

    yang_name = "traffic-matrix-counter-statistics"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::~TrafficMatrixCounterStatistics()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_packets_per_second_switched.is_set
	|| transmit_bytes_per_second_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transmit_packets_per_second_switched.yfilter)
	|| ydk::is_set(transmit_bytes_per_second_switched.yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-matrix-counter-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());
    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count-history")
    {
        auto ent_ = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory>();
        ent_->parent = this;
        count_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : count_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
        transmit_packets_per_second_switched.value_namespace = name_space;
        transmit_packets_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
        transmit_bytes_per_second_switched.value_namespace = name_space;
        transmit_bytes_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count-history" || name == "transmit-packets-per-second-switched" || name == "transmit-bytes-per-second-switched")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::CountHistory()
    :
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    is_valid{YType::boolean, "is-valid"}
{

    yang_name = "count-history"; yang_parent_name = "traffic-matrix-counter-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_data() const
{
    if (is_presence_container) return true;
    return event_start_timestamp.is_set
	|| event_end_timestamp.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| is_valid.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_start_timestamp.yfilter)
	|| ydk::is_set(event_end_timestamp.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(is_valid.yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_start_timestamp.is_set || is_set(event_start_timestamp.yfilter)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (event_end_timestamp.is_set || is_set(event_end_timestamp.yfilter)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
        event_start_timestamp.value_namespace = name_space;
        event_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
        event_end_timestamp.value_namespace = name_space;
        event_end_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-start-timestamp" || name == "event-end-timestamp" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "is-valid")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnels()
    :
    tunnel(this, {"interface_name"})
{

    yang_name = "tunnels"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Tunnels::~Tunnels()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::Afs::Af::Counters::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::Tunnel()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_handle{YType::uint32, "interface-handle"},
    vrfid{YType::uint32, "vrfid"},
    is_active{YType::boolean, "is-active"}
        ,
    base_counter_statistics(std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>())
{
    base_counter_statistics->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::~Tunnel()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_handle.is_set
	|| vrfid.is_set
	|| is_active.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data());
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation());
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics == nullptr)
        {
            base_counter_statistics = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>();
        }
        return base_counter_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base_counter_statistics != nullptr)
    {
        _children["base-counter-statistics"] = base_counter_statistics;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-counter-statistics" || name == "interface-name" || name == "interface-name-xr" || name == "interface-handle" || name == "vrfid" || name == "is-active")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"},
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"}
        ,
    count_history(this, {})
{

    yang_name = "base-counter-statistics"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_packets_per_second_switched.is_set
	|| transmit_bytes_per_second_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.len(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transmit_packets_per_second_switched.yfilter)
	|| ydk::is_set(transmit_bytes_per_second_switched.yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());
    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.yfilter)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count-history")
    {
        auto ent_ = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory>();
        ent_->parent = this;
        count_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : count_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
        transmit_packets_per_second_switched.value_namespace = name_space;
        transmit_packets_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
        transmit_bytes_per_second_switched.value_namespace = name_space;
        transmit_bytes_per_second_switched.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count-history" || name == "transmit-packets-per-second-switched" || name == "transmit-bytes-per-second-switched")
        return true;
    return false;
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    is_valid{YType::boolean, "is-valid"}
{

    yang_name = "count-history"; yang_parent_name = "base-counter-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_data() const
{
    if (is_presence_container) return true;
    return event_start_timestamp.is_set
	|| event_end_timestamp.is_set
	|| transmit_number_of_packets_switched.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| is_valid.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_start_timestamp.yfilter)
	|| ydk::is_set(event_end_timestamp.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(is_valid.yfilter);
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_start_timestamp.is_set || is_set(event_start_timestamp.yfilter)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (event_end_timestamp.is_set || is_set(event_end_timestamp.yfilter)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
        event_start_timestamp.value_namespace = name_space;
        event_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
        event_end_timestamp.value_namespace = name_space;
        event_end_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-start-timestamp" || name == "event-end-timestamp" || name == "transmit-number-of-packets-switched" || name == "transmit-number-of-bytes-switched" || name == "is-valid")
        return true;
    return false;
}

const Enum::YLeaf TcOperAfName::ipv4 {0, "ipv4"};
const Enum::YLeaf TcOperAfName::ipv6 {1, "ipv6"};


}
}


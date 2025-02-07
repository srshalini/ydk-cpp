
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_platform_software_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_platform_software_oper {

CiscoPlatformSoftware::CiscoPlatformSoftware()
    :
    system_usages(std::make_shared<CiscoPlatformSoftware::SystemUsages>())
    , control_processes(std::make_shared<CiscoPlatformSoftware::ControlProcesses>())
    , q_filesystem(this, {"fru", "slotnum", "baynum", "chassisnum"})
{
    system_usages->parent = this;
    control_processes->parent = this;

    yang_name = "cisco-platform-software"; yang_parent_name = "Cisco-IOS-XE-platform-software-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

CiscoPlatformSoftware::~CiscoPlatformSoftware()
{
}

bool CiscoPlatformSoftware::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<q_filesystem.len(); index++)
    {
        if(q_filesystem[index]->has_data())
            return true;
    }
    return (system_usages !=  nullptr && system_usages->has_data())
	|| (control_processes !=  nullptr && control_processes->has_data());
}

bool CiscoPlatformSoftware::has_operation() const
{
    for (std::size_t index=0; index<q_filesystem.len(); index++)
    {
        if(q_filesystem[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (system_usages !=  nullptr && system_usages->has_operation())
	|| (control_processes !=  nullptr && control_processes->has_operation());
}

std::string CiscoPlatformSoftware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-usages")
    {
        if(system_usages == nullptr)
        {
            system_usages = std::make_shared<CiscoPlatformSoftware::SystemUsages>();
        }
        return system_usages;
    }

    if(child_yang_name == "control-processes")
    {
        if(control_processes == nullptr)
        {
            control_processes = std::make_shared<CiscoPlatformSoftware::ControlProcesses>();
        }
        return control_processes;
    }

    if(child_yang_name == "q-filesystem")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::QFilesystem>();
        ent_->parent = this;
        q_filesystem.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_usages != nullptr)
    {
        _children["system-usages"] = system_usages;
    }

    if(control_processes != nullptr)
    {
        _children["control-processes"] = control_processes;
    }

    count_ = 0;
    for (auto ent_ : q_filesystem.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CiscoPlatformSoftware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPlatformSoftware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::clone_ptr() const
{
    return std::make_shared<CiscoPlatformSoftware>();
}

std::string CiscoPlatformSoftware::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoPlatformSoftware::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoPlatformSoftware::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoPlatformSoftware::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoPlatformSoftware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-usages" || name == "control-processes" || name == "q-filesystem")
        return true;
    return false;
}

CiscoPlatformSoftware::SystemUsages::SystemUsages()
    :
    system_usage(this, {"fru", "slotnum", "baynum", "chassisnum"})
{

    yang_name = "system-usages"; yang_parent_name = "cisco-platform-software"; is_top_level_class = false; has_list_ancestor = false; 
}

CiscoPlatformSoftware::SystemUsages::~SystemUsages()
{
}

bool CiscoPlatformSoftware::SystemUsages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<system_usage.len(); index++)
    {
        if(system_usage[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::SystemUsages::has_operation() const
{
    for (std::size_t index=0; index<system_usage.len(); index++)
    {
        if(system_usage[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoPlatformSoftware::SystemUsages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/" << get_segment_path();
    return path_buffer.str();
}

std::string CiscoPlatformSoftware::SystemUsages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-usages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::SystemUsages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::SystemUsages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-usage")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::SystemUsages::SystemUsage>();
        ent_->parent = this;
        system_usage.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::SystemUsages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : system_usage.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CiscoPlatformSoftware::SystemUsages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPlatformSoftware::SystemUsages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoPlatformSoftware::SystemUsages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-usage")
        return true;
    return false;
}

CiscoPlatformSoftware::SystemUsages::SystemUsage::SystemUsage()
    :
    fru{YType::enumeration, "fru"},
    slotnum{YType::int16, "slotnum"},
    baynum{YType::int16, "baynum"},
    chassisnum{YType::int16, "chassisnum"}
        ,
    process_system_usages(std::make_shared<CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages>())
{
    process_system_usages->parent = this;

    yang_name = "system-usage"; yang_parent_name = "system-usages"; is_top_level_class = false; has_list_ancestor = false; 
}

CiscoPlatformSoftware::SystemUsages::SystemUsage::~SystemUsage()
{
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::has_data() const
{
    if (is_presence_container) return true;
    return fru.is_set
	|| slotnum.is_set
	|| baynum.is_set
	|| chassisnum.is_set
	|| (process_system_usages !=  nullptr && process_system_usages->has_data());
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fru.yfilter)
	|| ydk::is_set(slotnum.yfilter)
	|| ydk::is_set(baynum.yfilter)
	|| ydk::is_set(chassisnum.yfilter)
	|| (process_system_usages !=  nullptr && process_system_usages->has_operation());
}

std::string CiscoPlatformSoftware::SystemUsages::SystemUsage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/system-usages/" << get_segment_path();
    return path_buffer.str();
}

std::string CiscoPlatformSoftware::SystemUsages::SystemUsage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-usage";
    ADD_KEY_TOKEN(fru, "fru");
    ADD_KEY_TOKEN(slotnum, "slotnum");
    ADD_KEY_TOKEN(baynum, "baynum");
    ADD_KEY_TOKEN(chassisnum, "chassisnum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::SystemUsages::SystemUsage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fru.is_set || is_set(fru.yfilter)) leaf_name_data.push_back(fru.get_name_leafdata());
    if (slotnum.is_set || is_set(slotnum.yfilter)) leaf_name_data.push_back(slotnum.get_name_leafdata());
    if (baynum.is_set || is_set(baynum.yfilter)) leaf_name_data.push_back(baynum.get_name_leafdata());
    if (chassisnum.is_set || is_set(chassisnum.yfilter)) leaf_name_data.push_back(chassisnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::SystemUsages::SystemUsage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-system-usages")
    {
        if(process_system_usages == nullptr)
        {
            process_system_usages = std::make_shared<CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages>();
        }
        return process_system_usages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::SystemUsages::SystemUsage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(process_system_usages != nullptr)
    {
        _children["process-system-usages"] = process_system_usages;
    }

    return _children;
}

void CiscoPlatformSoftware::SystemUsages::SystemUsage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fru")
    {
        fru = value;
        fru.value_namespace = name_space;
        fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slotnum")
    {
        slotnum = value;
        slotnum.value_namespace = name_space;
        slotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baynum")
    {
        baynum = value;
        baynum.value_namespace = name_space;
        baynum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassisnum")
    {
        chassisnum = value;
        chassisnum.value_namespace = name_space;
        chassisnum.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::SystemUsages::SystemUsage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fru")
    {
        fru.yfilter = yfilter;
    }
    if(value_path == "slotnum")
    {
        slotnum.yfilter = yfilter;
    }
    if(value_path == "baynum")
    {
        baynum.yfilter = yfilter;
    }
    if(value_path == "chassisnum")
    {
        chassisnum.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-system-usages" || name == "fru" || name == "slotnum" || name == "baynum" || name == "chassisnum")
        return true;
    return false;
}

CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsages()
    :
    process_system_usage(this, {"pid"})
{

    yang_name = "process-system-usages"; yang_parent_name = "system-usage"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::~ProcessSystemUsages()
{
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_system_usage.len(); index++)
    {
        if(process_system_usage[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::has_operation() const
{
    for (std::size_t index=0; index<process_system_usage.len(); index++)
    {
        if(process_system_usage[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-system-usages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-system-usage")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage>();
        ent_->parent = this;
        process_system_usage.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_system_usage.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-system-usage")
        return true;
    return false;
}

CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::ProcessSystemUsage()
    :
    pid{YType::uint32, "pid"},
    name{YType::str, "name"},
    total_run_time{YType::uint64, "total-run-time"},
    five_seconds{YType::uint64, "five-seconds"},
    allocated_memory{YType::uint64, "allocated-memory"},
    allocated_memory_percent{YType::uint32, "allocated-memory-percent"}
{

    yang_name = "process-system-usage"; yang_parent_name = "process-system-usages"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::~ProcessSystemUsage()
{
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::has_data() const
{
    if (is_presence_container) return true;
    return pid.is_set
	|| name.is_set
	|| total_run_time.is_set
	|| five_seconds.is_set
	|| allocated_memory.is_set
	|| allocated_memory_percent.is_set;
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(total_run_time.yfilter)
	|| ydk::is_set(five_seconds.yfilter)
	|| ydk::is_set(allocated_memory.yfilter)
	|| ydk::is_set(allocated_memory_percent.yfilter);
}

std::string CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-system-usage";
    ADD_KEY_TOKEN(pid, "pid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (total_run_time.is_set || is_set(total_run_time.yfilter)) leaf_name_data.push_back(total_run_time.get_name_leafdata());
    if (five_seconds.is_set || is_set(five_seconds.yfilter)) leaf_name_data.push_back(five_seconds.get_name_leafdata());
    if (allocated_memory.is_set || is_set(allocated_memory.yfilter)) leaf_name_data.push_back(allocated_memory.get_name_leafdata());
    if (allocated_memory_percent.is_set || is_set(allocated_memory_percent.yfilter)) leaf_name_data.push_back(allocated_memory_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-run-time")
    {
        total_run_time = value;
        total_run_time.value_namespace = name_space;
        total_run_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "five-seconds")
    {
        five_seconds = value;
        five_seconds.value_namespace = name_space;
        five_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-memory")
    {
        allocated_memory = value;
        allocated_memory.value_namespace = name_space;
        allocated_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-memory-percent")
    {
        allocated_memory_percent = value;
        allocated_memory_percent.value_namespace = name_space;
        allocated_memory_percent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "total-run-time")
    {
        total_run_time.yfilter = yfilter;
    }
    if(value_path == "five-seconds")
    {
        five_seconds.yfilter = yfilter;
    }
    if(value_path == "allocated-memory")
    {
        allocated_memory.yfilter = yfilter;
    }
    if(value_path == "allocated-memory-percent")
    {
        allocated_memory_percent.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::SystemUsages::SystemUsage::ProcessSystemUsages::ProcessSystemUsage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "name" || name == "total-run-time" || name == "five-seconds" || name == "allocated-memory" || name == "allocated-memory-percent")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcesses()
    :
    control_process(this, {"fru", "slotnum", "baynum", "chassisnum"})
{

    yang_name = "control-processes"; yang_parent_name = "cisco-platform-software"; is_top_level_class = false; has_list_ancestor = false; 
}

CiscoPlatformSoftware::ControlProcesses::~ControlProcesses()
{
}

bool CiscoPlatformSoftware::ControlProcesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<control_process.len(); index++)
    {
        if(control_process[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::ControlProcesses::has_operation() const
{
    for (std::size_t index=0; index<control_process.len(); index++)
    {
        if(control_process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoPlatformSoftware::ControlProcesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/" << get_segment_path();
    return path_buffer.str();
}

std::string CiscoPlatformSoftware::ControlProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control-process")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess>();
        ent_->parent = this;
        control_process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : control_process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPlatformSoftware::ControlProcesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoPlatformSoftware::ControlProcesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-process")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::ControlProcess()
    :
    fru{YType::enumeration, "fru"},
    slotnum{YType::int16, "slotnum"},
    baynum{YType::int16, "baynum"},
    chassisnum{YType::int16, "chassisnum"},
    control_process_status{YType::str, "control-process-status"},
    updated{YType::uint64, "updated"}
        ,
    load_average_stats(std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats>())
    , load_avg_minutes(std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes>())
    , memory_stats(std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats>())
    , per_core_stats(std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats>())
{
    load_average_stats->parent = this;
    load_avg_minutes->parent = this;
    memory_stats->parent = this;
    per_core_stats->parent = this;

    yang_name = "control-process"; yang_parent_name = "control-processes"; is_top_level_class = false; has_list_ancestor = false; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::~ControlProcess()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::has_data() const
{
    if (is_presence_container) return true;
    return fru.is_set
	|| slotnum.is_set
	|| baynum.is_set
	|| chassisnum.is_set
	|| control_process_status.is_set
	|| updated.is_set
	|| (load_average_stats !=  nullptr && load_average_stats->has_data())
	|| (load_avg_minutes !=  nullptr && load_avg_minutes->has_data())
	|| (memory_stats !=  nullptr && memory_stats->has_data())
	|| (per_core_stats !=  nullptr && per_core_stats->has_data());
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fru.yfilter)
	|| ydk::is_set(slotnum.yfilter)
	|| ydk::is_set(baynum.yfilter)
	|| ydk::is_set(chassisnum.yfilter)
	|| ydk::is_set(control_process_status.yfilter)
	|| ydk::is_set(updated.yfilter)
	|| (load_average_stats !=  nullptr && load_average_stats->has_operation())
	|| (load_avg_minutes !=  nullptr && load_avg_minutes->has_operation())
	|| (memory_stats !=  nullptr && memory_stats->has_operation())
	|| (per_core_stats !=  nullptr && per_core_stats->has_operation());
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/control-processes/" << get_segment_path();
    return path_buffer.str();
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-process";
    ADD_KEY_TOKEN(fru, "fru");
    ADD_KEY_TOKEN(slotnum, "slotnum");
    ADD_KEY_TOKEN(baynum, "baynum");
    ADD_KEY_TOKEN(chassisnum, "chassisnum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fru.is_set || is_set(fru.yfilter)) leaf_name_data.push_back(fru.get_name_leafdata());
    if (slotnum.is_set || is_set(slotnum.yfilter)) leaf_name_data.push_back(slotnum.get_name_leafdata());
    if (baynum.is_set || is_set(baynum.yfilter)) leaf_name_data.push_back(baynum.get_name_leafdata());
    if (chassisnum.is_set || is_set(chassisnum.yfilter)) leaf_name_data.push_back(chassisnum.get_name_leafdata());
    if (control_process_status.is_set || is_set(control_process_status.yfilter)) leaf_name_data.push_back(control_process_status.get_name_leafdata());
    if (updated.is_set || is_set(updated.yfilter)) leaf_name_data.push_back(updated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-average-stats")
    {
        if(load_average_stats == nullptr)
        {
            load_average_stats = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats>();
        }
        return load_average_stats;
    }

    if(child_yang_name == "load-avg-minutes")
    {
        if(load_avg_minutes == nullptr)
        {
            load_avg_minutes = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes>();
        }
        return load_avg_minutes;
    }

    if(child_yang_name == "memory-stats")
    {
        if(memory_stats == nullptr)
        {
            memory_stats = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats>();
        }
        return memory_stats;
    }

    if(child_yang_name == "per-core-stats")
    {
        if(per_core_stats == nullptr)
        {
            per_core_stats = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats>();
        }
        return per_core_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(load_average_stats != nullptr)
    {
        _children["load-average-stats"] = load_average_stats;
    }

    if(load_avg_minutes != nullptr)
    {
        _children["load-avg-minutes"] = load_avg_minutes;
    }

    if(memory_stats != nullptr)
    {
        _children["memory-stats"] = memory_stats;
    }

    if(per_core_stats != nullptr)
    {
        _children["per-core-stats"] = per_core_stats;
    }

    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fru")
    {
        fru = value;
        fru.value_namespace = name_space;
        fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slotnum")
    {
        slotnum = value;
        slotnum.value_namespace = name_space;
        slotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baynum")
    {
        baynum = value;
        baynum.value_namespace = name_space;
        baynum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassisnum")
    {
        chassisnum = value;
        chassisnum.value_namespace = name_space;
        chassisnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-process-status")
    {
        control_process_status = value;
        control_process_status.value_namespace = name_space;
        control_process_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updated")
    {
        updated = value;
        updated.value_namespace = name_space;
        updated.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fru")
    {
        fru.yfilter = yfilter;
    }
    if(value_path == "slotnum")
    {
        slotnum.yfilter = yfilter;
    }
    if(value_path == "baynum")
    {
        baynum.yfilter = yfilter;
    }
    if(value_path == "chassisnum")
    {
        chassisnum.yfilter = yfilter;
    }
    if(value_path == "control-process-status")
    {
        control_process_status.yfilter = yfilter;
    }
    if(value_path == "updated")
    {
        updated.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-average-stats" || name == "load-avg-minutes" || name == "memory-stats" || name == "per-core-stats" || name == "fru" || name == "slotnum" || name == "baynum" || name == "chassisnum" || name == "control-process-status" || name == "updated")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::LoadAverageStats()
    :
    load_average_status{YType::str, "load-average-status"}
{

    yang_name = "load-average-stats"; yang_parent_name = "control-process"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::~LoadAverageStats()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::has_data() const
{
    if (is_presence_container) return true;
    return load_average_status.is_set;
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_average_status.yfilter);
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-average-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_average_status.is_set || is_set(load_average_status.yfilter)) leaf_name_data.push_back(load_average_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-average-status")
    {
        load_average_status = value;
        load_average_status.value_namespace = name_space;
        load_average_status.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-average-status")
    {
        load_average_status.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-average-status")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinutes()
    :
    load_avg_minute(this, {"number"})
{

    yang_name = "load-avg-minutes"; yang_parent_name = "control-process"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::~LoadAvgMinutes()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_avg_minute.len(); index++)
    {
        if(load_avg_minute[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::has_operation() const
{
    for (std::size_t index=0; index<load_avg_minute.len(); index++)
    {
        if(load_avg_minute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-avg-minutes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-avg-minute")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute>();
        ent_->parent = this;
        load_avg_minute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_avg_minute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-avg-minute")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::LoadAvgMinute()
    :
    number{YType::uint64, "number"},
    average{YType::str, "average"}
        ,
    status(std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status>())
{
    status->parent = this;

    yang_name = "load-avg-minute"; yang_parent_name = "load-avg-minutes"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::~LoadAvgMinute()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| average.is_set
	|| (status !=  nullptr && status->has_data());
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(average.yfilter)
	|| (status !=  nullptr && status->has_operation());
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-avg-minute";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "number" || name == "average")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::Status()
    :
    condition{YType::str, "condition"},
    threshold_status{YType::str, "threshold-status"},
    threshold_value{YType::str, "threshold-value"}
{

    yang_name = "status"; yang_parent_name = "load-avg-minute"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::~Status()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::has_data() const
{
    if (is_presence_container) return true;
    return condition.is_set
	|| threshold_status.is_set
	|| threshold_value.is_set;
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(condition.yfilter)
	|| ydk::is_set(threshold_status.yfilter)
	|| ydk::is_set(threshold_value.yfilter);
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (condition.is_set || is_set(condition.yfilter)) leaf_name_data.push_back(condition.get_name_leafdata());
    if (threshold_status.is_set || is_set(threshold_status.yfilter)) leaf_name_data.push_back(threshold_status.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "condition")
    {
        condition = value;
        condition.value_namespace = name_space;
        condition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-status")
    {
        threshold_status = value;
        threshold_status.value_namespace = name_space;
        threshold_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "condition")
    {
        condition.yfilter = yfilter;
    }
    if(value_path == "threshold-status")
    {
        threshold_status.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "condition" || name == "threshold-status" || name == "threshold-value")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::MemoryStats()
    :
    memory_status{YType::str, "memory-status"},
    total{YType::uint64, "total"},
    used_number{YType::uint64, "used-number"},
    used_percent{YType::uint64, "used-percent"},
    free_number{YType::uint64, "free-number"},
    free_percent{YType::uint64, "free-percent"},
    available_number{YType::uint64, "available-number"},
    available_percent{YType::uint64, "available-percent"},
    committed_number{YType::uint64, "committed-number"},
    committed_percent{YType::uint8, "committed-percent"}
        ,
    status(std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status>())
{
    status->parent = this;

    yang_name = "memory-stats"; yang_parent_name = "control-process"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::~MemoryStats()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::has_data() const
{
    if (is_presence_container) return true;
    return memory_status.is_set
	|| total.is_set
	|| used_number.is_set
	|| used_percent.is_set
	|| free_number.is_set
	|| free_percent.is_set
	|| available_number.is_set
	|| available_percent.is_set
	|| committed_number.is_set
	|| committed_percent.is_set
	|| (status !=  nullptr && status->has_data());
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_status.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(used_number.yfilter)
	|| ydk::is_set(used_percent.yfilter)
	|| ydk::is_set(free_number.yfilter)
	|| ydk::is_set(free_percent.yfilter)
	|| ydk::is_set(available_number.yfilter)
	|| ydk::is_set(available_percent.yfilter)
	|| ydk::is_set(committed_number.yfilter)
	|| ydk::is_set(committed_percent.yfilter)
	|| (status !=  nullptr && status->has_operation());
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_status.is_set || is_set(memory_status.yfilter)) leaf_name_data.push_back(memory_status.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (used_number.is_set || is_set(used_number.yfilter)) leaf_name_data.push_back(used_number.get_name_leafdata());
    if (used_percent.is_set || is_set(used_percent.yfilter)) leaf_name_data.push_back(used_percent.get_name_leafdata());
    if (free_number.is_set || is_set(free_number.yfilter)) leaf_name_data.push_back(free_number.get_name_leafdata());
    if (free_percent.is_set || is_set(free_percent.yfilter)) leaf_name_data.push_back(free_percent.get_name_leafdata());
    if (available_number.is_set || is_set(available_number.yfilter)) leaf_name_data.push_back(available_number.get_name_leafdata());
    if (available_percent.is_set || is_set(available_percent.yfilter)) leaf_name_data.push_back(available_percent.get_name_leafdata());
    if (committed_number.is_set || is_set(committed_number.yfilter)) leaf_name_data.push_back(committed_number.get_name_leafdata());
    if (committed_percent.is_set || is_set(committed_percent.yfilter)) leaf_name_data.push_back(committed_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-status")
    {
        memory_status = value;
        memory_status.value_namespace = name_space;
        memory_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-number")
    {
        used_number = value;
        used_number.value_namespace = name_space;
        used_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-percent")
    {
        used_percent = value;
        used_percent.value_namespace = name_space;
        used_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-number")
    {
        free_number = value;
        free_number.value_namespace = name_space;
        free_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-percent")
    {
        free_percent = value;
        free_percent.value_namespace = name_space;
        free_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-number")
    {
        available_number = value;
        available_number.value_namespace = name_space;
        available_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-percent")
    {
        available_percent = value;
        available_percent.value_namespace = name_space;
        available_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-number")
    {
        committed_number = value;
        committed_number.value_namespace = name_space;
        committed_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-percent")
    {
        committed_percent = value;
        committed_percent.value_namespace = name_space;
        committed_percent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-status")
    {
        memory_status.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "used-number")
    {
        used_number.yfilter = yfilter;
    }
    if(value_path == "used-percent")
    {
        used_percent.yfilter = yfilter;
    }
    if(value_path == "free-number")
    {
        free_number.yfilter = yfilter;
    }
    if(value_path == "free-percent")
    {
        free_percent.yfilter = yfilter;
    }
    if(value_path == "available-number")
    {
        available_number.yfilter = yfilter;
    }
    if(value_path == "available-percent")
    {
        available_percent.yfilter = yfilter;
    }
    if(value_path == "committed-number")
    {
        committed_number.yfilter = yfilter;
    }
    if(value_path == "committed-percent")
    {
        committed_percent.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "memory-status" || name == "total" || name == "used-number" || name == "used-percent" || name == "free-number" || name == "free-percent" || name == "available-number" || name == "available-percent" || name == "committed-number" || name == "committed-percent")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::Status()
    :
    warning_threshold_percent{YType::uint32, "warning-threshold-percent"},
    critical_threshold_percent{YType::uint32, "critical-threshold-percent"}
{

    yang_name = "status"; yang_parent_name = "memory-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::~Status()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::has_data() const
{
    if (is_presence_container) return true;
    return warning_threshold_percent.is_set
	|| critical_threshold_percent.is_set;
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(warning_threshold_percent.yfilter)
	|| ydk::is_set(critical_threshold_percent.yfilter);
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (warning_threshold_percent.is_set || is_set(warning_threshold_percent.yfilter)) leaf_name_data.push_back(warning_threshold_percent.get_name_leafdata());
    if (critical_threshold_percent.is_set || is_set(critical_threshold_percent.yfilter)) leaf_name_data.push_back(critical_threshold_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "warning-threshold-percent")
    {
        warning_threshold_percent = value;
        warning_threshold_percent.value_namespace = name_space;
        warning_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-threshold-percent")
    {
        critical_threshold_percent = value;
        critical_threshold_percent.value_namespace = name_space;
        critical_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "warning-threshold-percent")
    {
        warning_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "critical-threshold-percent")
    {
        critical_threshold_percent.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "warning-threshold-percent" || name == "critical-threshold-percent")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStats()
    :
    per_core_stat(this, {"name"})
{

    yang_name = "per-core-stats"; yang_parent_name = "control-process"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::~PerCoreStats()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_core_stat.len(); index++)
    {
        if(per_core_stat[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::has_operation() const
{
    for (std::size_t index=0; index<per_core_stat.len(); index++)
    {
        if(per_core_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-core-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-core-stat")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat>();
        ent_->parent = this;
        per_core_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : per_core_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-core-stat")
        return true;
    return false;
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::PerCoreStat()
    :
    name{YType::uint32, "name"},
    user{YType::str, "user"},
    system{YType::str, "system"},
    nice{YType::str, "nice"},
    idle{YType::str, "idle"},
    irq{YType::str, "irq"},
    sirq{YType::str, "sirq"},
    io_wait{YType::str, "io-wait"}
{

    yang_name = "per-core-stat"; yang_parent_name = "per-core-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::~PerCoreStat()
{
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| user.is_set
	|| system.is_set
	|| nice.is_set
	|| idle.is_set
	|| irq.is_set
	|| sirq.is_set
	|| io_wait.is_set;
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(nice.yfilter)
	|| ydk::is_set(idle.yfilter)
	|| ydk::is_set(irq.yfilter)
	|| ydk::is_set(sirq.yfilter)
	|| ydk::is_set(io_wait.yfilter);
}

std::string CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-core-stat";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (nice.is_set || is_set(nice.yfilter)) leaf_name_data.push_back(nice.get_name_leafdata());
    if (idle.is_set || is_set(idle.yfilter)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (irq.is_set || is_set(irq.yfilter)) leaf_name_data.push_back(irq.get_name_leafdata());
    if (sirq.is_set || is_set(sirq.yfilter)) leaf_name_data.push_back(sirq.get_name_leafdata());
    if (io_wait.is_set || is_set(io_wait.yfilter)) leaf_name_data.push_back(io_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nice")
    {
        nice = value;
        nice.value_namespace = name_space;
        nice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle")
    {
        idle = value;
        idle.value_namespace = name_space;
        idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irq")
    {
        irq = value;
        irq.value_namespace = name_space;
        irq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sirq")
    {
        sirq = value;
        sirq.value_namespace = name_space;
        sirq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-wait")
    {
        io_wait = value;
        io_wait.value_namespace = name_space;
        io_wait.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "nice")
    {
        nice.yfilter = yfilter;
    }
    if(value_path == "idle")
    {
        idle.yfilter = yfilter;
    }
    if(value_path == "irq")
    {
        irq.yfilter = yfilter;
    }
    if(value_path == "sirq")
    {
        sirq.yfilter = yfilter;
    }
    if(value_path == "io-wait")
    {
        io_wait.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "user" || name == "system" || name == "nice" || name == "idle" || name == "irq" || name == "sirq" || name == "io-wait")
        return true;
    return false;
}

CiscoPlatformSoftware::QFilesystem::QFilesystem()
    :
    fru{YType::enumeration, "fru"},
    slotnum{YType::int16, "slotnum"},
    baynum{YType::int16, "baynum"},
    chassisnum{YType::int16, "chassisnum"}
        ,
    partitions(this, {"name"})
    , core_files(this, {"filename"})
{

    yang_name = "q-filesystem"; yang_parent_name = "cisco-platform-software"; is_top_level_class = false; has_list_ancestor = false; 
}

CiscoPlatformSoftware::QFilesystem::~QFilesystem()
{
}

bool CiscoPlatformSoftware::QFilesystem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<partitions.len(); index++)
    {
        if(partitions[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<core_files.len(); index++)
    {
        if(core_files[index]->has_data())
            return true;
    }
    return fru.is_set
	|| slotnum.is_set
	|| baynum.is_set
	|| chassisnum.is_set;
}

bool CiscoPlatformSoftware::QFilesystem::has_operation() const
{
    for (std::size_t index=0; index<partitions.len(); index++)
    {
        if(partitions[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<core_files.len(); index++)
    {
        if(core_files[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fru.yfilter)
	|| ydk::is_set(slotnum.yfilter)
	|| ydk::is_set(baynum.yfilter)
	|| ydk::is_set(chassisnum.yfilter);
}

std::string CiscoPlatformSoftware::QFilesystem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/" << get_segment_path();
    return path_buffer.str();
}

std::string CiscoPlatformSoftware::QFilesystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-filesystem";
    ADD_KEY_TOKEN(fru, "fru");
    ADD_KEY_TOKEN(slotnum, "slotnum");
    ADD_KEY_TOKEN(baynum, "baynum");
    ADD_KEY_TOKEN(chassisnum, "chassisnum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::QFilesystem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fru.is_set || is_set(fru.yfilter)) leaf_name_data.push_back(fru.get_name_leafdata());
    if (slotnum.is_set || is_set(slotnum.yfilter)) leaf_name_data.push_back(slotnum.get_name_leafdata());
    if (baynum.is_set || is_set(baynum.yfilter)) leaf_name_data.push_back(baynum.get_name_leafdata());
    if (chassisnum.is_set || is_set(chassisnum.yfilter)) leaf_name_data.push_back(chassisnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::QFilesystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "partitions")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::QFilesystem::Partitions>();
        ent_->parent = this;
        partitions.append(ent_);
        return ent_;
    }

    if(child_yang_name == "core-files")
    {
        auto ent_ = std::make_shared<CiscoPlatformSoftware::QFilesystem::CoreFiles>();
        ent_->parent = this;
        core_files.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::QFilesystem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : partitions.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : core_files.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CiscoPlatformSoftware::QFilesystem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fru")
    {
        fru = value;
        fru.value_namespace = name_space;
        fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slotnum")
    {
        slotnum = value;
        slotnum.value_namespace = name_space;
        slotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baynum")
    {
        baynum = value;
        baynum.value_namespace = name_space;
        baynum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassisnum")
    {
        chassisnum = value;
        chassisnum.value_namespace = name_space;
        chassisnum.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::QFilesystem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fru")
    {
        fru.yfilter = yfilter;
    }
    if(value_path == "slotnum")
    {
        slotnum.yfilter = yfilter;
    }
    if(value_path == "baynum")
    {
        baynum.yfilter = yfilter;
    }
    if(value_path == "chassisnum")
    {
        chassisnum.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::QFilesystem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partitions" || name == "core-files" || name == "fru" || name == "slotnum" || name == "baynum" || name == "chassisnum")
        return true;
    return false;
}

CiscoPlatformSoftware::QFilesystem::Partitions::Partitions()
    :
    name{YType::str, "name"},
    total_size{YType::uint64, "total-size"},
    used_size{YType::uint64, "used-size"}
{

    yang_name = "partitions"; yang_parent_name = "q-filesystem"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::QFilesystem::Partitions::~Partitions()
{
}

bool CiscoPlatformSoftware::QFilesystem::Partitions::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| total_size.is_set
	|| used_size.is_set;
}

bool CiscoPlatformSoftware::QFilesystem::Partitions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(total_size.yfilter)
	|| ydk::is_set(used_size.yfilter);
}

std::string CiscoPlatformSoftware::QFilesystem::Partitions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partitions";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::QFilesystem::Partitions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (total_size.is_set || is_set(total_size.yfilter)) leaf_name_data.push_back(total_size.get_name_leafdata());
    if (used_size.is_set || is_set(used_size.yfilter)) leaf_name_data.push_back(used_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::QFilesystem::Partitions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::QFilesystem::Partitions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CiscoPlatformSoftware::QFilesystem::Partitions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-size")
    {
        total_size = value;
        total_size.value_namespace = name_space;
        total_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-size")
    {
        used_size = value;
        used_size.value_namespace = name_space;
        used_size.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::QFilesystem::Partitions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "total-size")
    {
        total_size.yfilter = yfilter;
    }
    if(value_path == "used-size")
    {
        used_size.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::QFilesystem::Partitions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "total-size" || name == "used-size")
        return true;
    return false;
}

CiscoPlatformSoftware::QFilesystem::CoreFiles::CoreFiles()
    :
    filename{YType::str, "filename"},
    time{YType::str, "time"}
{

    yang_name = "core-files"; yang_parent_name = "q-filesystem"; is_top_level_class = false; has_list_ancestor = true; 
}

CiscoPlatformSoftware::QFilesystem::CoreFiles::~CoreFiles()
{
}

bool CiscoPlatformSoftware::QFilesystem::CoreFiles::has_data() const
{
    if (is_presence_container) return true;
    return filename.is_set
	|| time.is_set;
}

bool CiscoPlatformSoftware::QFilesystem::CoreFiles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string CiscoPlatformSoftware::QFilesystem::CoreFiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-files";
    ADD_KEY_TOKEN(filename, "filename");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CiscoPlatformSoftware::QFilesystem::CoreFiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CiscoPlatformSoftware::QFilesystem::CoreFiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CiscoPlatformSoftware::QFilesystem::CoreFiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CiscoPlatformSoftware::QFilesystem::CoreFiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPlatformSoftware::QFilesystem::CoreFiles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool CiscoPlatformSoftware::QFilesystem::CoreFiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename" || name == "time")
        return true;
    return false;
}

const Enum::YLeaf BFru::platform_fru_rp {0, "platform-fru-rp"};
const Enum::YLeaf BFru::platform_fru_fp {1, "platform-fru-fp"};
const Enum::YLeaf BFru::platform_fru_cc {2, "platform-fru-cc"};
const Enum::YLeaf BFru::platform_fru_max {3, "platform-fru-max"};


}
}


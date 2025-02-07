
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_syslog_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_syslog_cfg {

SyslogService::SyslogService()
    :
    timestamps(std::make_shared<SyslogService::Timestamps>())
{
    timestamps->parent = this;

    yang_name = "syslog-service"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

SyslogService::~SyslogService()
{
}

bool SyslogService::has_data() const
{
    if (is_presence_container) return true;
    return (timestamps !=  nullptr && timestamps->has_data());
}

bool SyslogService::has_operation() const
{
    return is_set(yfilter)
	|| (timestamps !=  nullptr && timestamps->has_operation());
}

std::string SyslogService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamps")
    {
        if(timestamps == nullptr)
        {
            timestamps = std::make_shared<SyslogService::Timestamps>();
        }
        return timestamps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timestamps != nullptr)
    {
        _children["timestamps"] = timestamps;
    }

    return _children;
}

void SyslogService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SyslogService::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SyslogService::clone_ptr() const
{
    return std::make_shared<SyslogService>();
}

std::string SyslogService::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SyslogService::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SyslogService::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SyslogService::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SyslogService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamps")
        return true;
    return false;
}

SyslogService::Timestamps::Timestamps()
    :
    enable{YType::empty, "enable"}
        ,
    log(std::make_shared<SyslogService::Timestamps::Log>())
    , debug(std::make_shared<SyslogService::Timestamps::Debug>())
{
    log->parent = this;
    debug->parent = this;

    yang_name = "timestamps"; yang_parent_name = "syslog-service"; is_top_level_class = false; has_list_ancestor = false; 
}

SyslogService::Timestamps::~Timestamps()
{
}

bool SyslogService::Timestamps::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (log !=  nullptr && log->has_data())
	|| (debug !=  nullptr && debug->has_data());
}

bool SyslogService::Timestamps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (log !=  nullptr && log->has_operation())
	|| (debug !=  nullptr && debug->has_operation());
}

std::string SyslogService::Timestamps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/" << get_segment_path();
    return path_buffer.str();
}

std::string SyslogService::Timestamps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::Timestamps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::Timestamps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<SyslogService::Timestamps::Log>();
        }
        return log;
    }

    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<SyslogService::Timestamps::Debug>();
        }
        return debug;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::Timestamps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    if(debug != nullptr)
    {
        _children["debug"] = debug;
    }

    return _children;
}

void SyslogService::Timestamps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void SyslogService::Timestamps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool SyslogService::Timestamps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log" || name == "debug" || name == "enable")
        return true;
    return false;
}

SyslogService::Timestamps::Log::Log()
    :
    log_uptime{YType::empty, "log-uptime"},
    log_timestamp_disable{YType::empty, "log-timestamp-disable"}
        ,
    log_datetime(std::make_shared<SyslogService::Timestamps::Log::LogDatetime>())
{
    log_datetime->parent = this;

    yang_name = "log"; yang_parent_name = "timestamps"; is_top_level_class = false; has_list_ancestor = false; 
}

SyslogService::Timestamps::Log::~Log()
{
}

bool SyslogService::Timestamps::Log::has_data() const
{
    if (is_presence_container) return true;
    return log_uptime.is_set
	|| log_timestamp_disable.is_set
	|| (log_datetime !=  nullptr && log_datetime->has_data());
}

bool SyslogService::Timestamps::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_uptime.yfilter)
	|| ydk::is_set(log_timestamp_disable.yfilter)
	|| (log_datetime !=  nullptr && log_datetime->has_operation());
}

std::string SyslogService::Timestamps::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/" << get_segment_path();
    return path_buffer.str();
}

std::string SyslogService::Timestamps::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::Timestamps::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_uptime.is_set || is_set(log_uptime.yfilter)) leaf_name_data.push_back(log_uptime.get_name_leafdata());
    if (log_timestamp_disable.is_set || is_set(log_timestamp_disable.yfilter)) leaf_name_data.push_back(log_timestamp_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::Timestamps::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-datetime")
    {
        if(log_datetime == nullptr)
        {
            log_datetime = std::make_shared<SyslogService::Timestamps::Log::LogDatetime>();
        }
        return log_datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::Timestamps::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_datetime != nullptr)
    {
        _children["log-datetime"] = log_datetime;
    }

    return _children;
}

void SyslogService::Timestamps::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-uptime")
    {
        log_uptime = value;
        log_uptime.value_namespace = name_space;
        log_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-timestamp-disable")
    {
        log_timestamp_disable = value;
        log_timestamp_disable.value_namespace = name_space;
        log_timestamp_disable.value_namespace_prefix = name_space_prefix;
    }
}

void SyslogService::Timestamps::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-uptime")
    {
        log_uptime.yfilter = yfilter;
    }
    if(value_path == "log-timestamp-disable")
    {
        log_timestamp_disable.yfilter = yfilter;
    }
}

bool SyslogService::Timestamps::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-datetime" || name == "log-uptime" || name == "log-timestamp-disable")
        return true;
    return false;
}

SyslogService::Timestamps::Log::LogDatetime::LogDatetime()
    :
    log_datetime_value(std::make_shared<SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue>())
{
    log_datetime_value->parent = this;

    yang_name = "log-datetime"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

SyslogService::Timestamps::Log::LogDatetime::~LogDatetime()
{
}

bool SyslogService::Timestamps::Log::LogDatetime::has_data() const
{
    if (is_presence_container) return true;
    return (log_datetime_value !=  nullptr && log_datetime_value->has_data());
}

bool SyslogService::Timestamps::Log::LogDatetime::has_operation() const
{
    return is_set(yfilter)
	|| (log_datetime_value !=  nullptr && log_datetime_value->has_operation());
}

std::string SyslogService::Timestamps::Log::LogDatetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/log/" << get_segment_path();
    return path_buffer.str();
}

std::string SyslogService::Timestamps::Log::LogDatetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-datetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::Timestamps::Log::LogDatetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::Timestamps::Log::LogDatetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-datetime-value")
    {
        if(log_datetime_value == nullptr)
        {
            log_datetime_value = std::make_shared<SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue>();
        }
        return log_datetime_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::Timestamps::Log::LogDatetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_datetime_value != nullptr)
    {
        _children["log-datetime-value"] = log_datetime_value;
    }

    return _children;
}

void SyslogService::Timestamps::Log::LogDatetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SyslogService::Timestamps::Log::LogDatetime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SyslogService::Timestamps::Log::LogDatetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-datetime-value")
        return true;
    return false;
}

SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::LogDatetimeValue()
    :
    time_stamp_value{YType::enumeration, "time-stamp-value"},
    msec{YType::enumeration, "msec"},
    time_zone{YType::enumeration, "time-zone"},
    year{YType::enumeration, "year"}
{

    yang_name = "log-datetime-value"; yang_parent_name = "log-datetime"; is_top_level_class = false; has_list_ancestor = false; 
}

SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::~LogDatetimeValue()
{
}

bool SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::has_data() const
{
    if (is_presence_container) return true;
    return time_stamp_value.is_set
	|| msec.is_set
	|| time_zone.is_set
	|| year.is_set;
}

bool SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_stamp_value.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(time_zone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/log/log-datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-datetime-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_value.is_set || is_set(time_stamp_value.yfilter)) leaf_name_data.push_back(time_stamp_value.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.yfilter)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-stamp-value")
    {
        time_stamp_value = value;
        time_stamp_value.value_namespace = name_space;
        time_stamp_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
        time_zone.value_namespace = name_space;
        time_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-stamp-value")
    {
        time_stamp_value.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "time-zone")
    {
        time_zone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool SyslogService::Timestamps::Log::LogDatetime::LogDatetimeValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-stamp-value" || name == "msec" || name == "time-zone" || name == "year")
        return true;
    return false;
}

SyslogService::Timestamps::Debug::Debug()
    :
    debug_timestamp_disable{YType::empty, "debug-timestamp-disable"},
    debug_uptime{YType::empty, "debug-uptime"}
        ,
    debug_datetime(std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime>())
{
    debug_datetime->parent = this;

    yang_name = "debug"; yang_parent_name = "timestamps"; is_top_level_class = false; has_list_ancestor = false; 
}

SyslogService::Timestamps::Debug::~Debug()
{
}

bool SyslogService::Timestamps::Debug::has_data() const
{
    if (is_presence_container) return true;
    return debug_timestamp_disable.is_set
	|| debug_uptime.is_set
	|| (debug_datetime !=  nullptr && debug_datetime->has_data());
}

bool SyslogService::Timestamps::Debug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(debug_timestamp_disable.yfilter)
	|| ydk::is_set(debug_uptime.yfilter)
	|| (debug_datetime !=  nullptr && debug_datetime->has_operation());
}

std::string SyslogService::Timestamps::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/" << get_segment_path();
    return path_buffer.str();
}

std::string SyslogService::Timestamps::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::Timestamps::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug_timestamp_disable.is_set || is_set(debug_timestamp_disable.yfilter)) leaf_name_data.push_back(debug_timestamp_disable.get_name_leafdata());
    if (debug_uptime.is_set || is_set(debug_uptime.yfilter)) leaf_name_data.push_back(debug_uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::Timestamps::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug-datetime")
    {
        if(debug_datetime == nullptr)
        {
            debug_datetime = std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime>();
        }
        return debug_datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::Timestamps::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(debug_datetime != nullptr)
    {
        _children["debug-datetime"] = debug_datetime;
    }

    return _children;
}

void SyslogService::Timestamps::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "debug-timestamp-disable")
    {
        debug_timestamp_disable = value;
        debug_timestamp_disable.value_namespace = name_space;
        debug_timestamp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debug-uptime")
    {
        debug_uptime = value;
        debug_uptime.value_namespace = name_space;
        debug_uptime.value_namespace_prefix = name_space_prefix;
    }
}

void SyslogService::Timestamps::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "debug-timestamp-disable")
    {
        debug_timestamp_disable.yfilter = yfilter;
    }
    if(value_path == "debug-uptime")
    {
        debug_uptime.yfilter = yfilter;
    }
}

bool SyslogService::Timestamps::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug-datetime" || name == "debug-timestamp-disable" || name == "debug-uptime")
        return true;
    return false;
}

SyslogService::Timestamps::Debug::DebugDatetime::DebugDatetime()
    :
    datetime_value(std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue>())
{
    datetime_value->parent = this;

    yang_name = "debug-datetime"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false; 
}

SyslogService::Timestamps::Debug::DebugDatetime::~DebugDatetime()
{
}

bool SyslogService::Timestamps::Debug::DebugDatetime::has_data() const
{
    if (is_presence_container) return true;
    return (datetime_value !=  nullptr && datetime_value->has_data());
}

bool SyslogService::Timestamps::Debug::DebugDatetime::has_operation() const
{
    return is_set(yfilter)
	|| (datetime_value !=  nullptr && datetime_value->has_operation());
}

std::string SyslogService::Timestamps::Debug::DebugDatetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/debug/" << get_segment_path();
    return path_buffer.str();
}

std::string SyslogService::Timestamps::Debug::DebugDatetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug-datetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::Timestamps::Debug::DebugDatetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::Timestamps::Debug::DebugDatetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datetime-value")
    {
        if(datetime_value == nullptr)
        {
            datetime_value = std::make_shared<SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue>();
        }
        return datetime_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::Timestamps::Debug::DebugDatetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(datetime_value != nullptr)
    {
        _children["datetime-value"] = datetime_value;
    }

    return _children;
}

void SyslogService::Timestamps::Debug::DebugDatetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SyslogService::Timestamps::Debug::DebugDatetime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SyslogService::Timestamps::Debug::DebugDatetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datetime-value")
        return true;
    return false;
}

SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::DatetimeValue()
    :
    time_stamp_value{YType::enumeration, "time-stamp-value"},
    msec{YType::enumeration, "msec"},
    time_zone{YType::enumeration, "time-zone"},
    year{YType::enumeration, "year"}
{

    yang_name = "datetime-value"; yang_parent_name = "debug-datetime"; is_top_level_class = false; has_list_ancestor = false; 
}

SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::~DatetimeValue()
{
}

bool SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::has_data() const
{
    if (is_presence_container) return true;
    return time_stamp_value.is_set
	|| msec.is_set
	|| time_zone.is_set
	|| year.is_set;
}

bool SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_stamp_value.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(time_zone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog-service/timestamps/debug/debug-datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_value.is_set || is_set(time_stamp_value.yfilter)) leaf_name_data.push_back(time_stamp_value.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.yfilter)) leaf_name_data.push_back(time_zone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-stamp-value")
    {
        time_stamp_value = value;
        time_stamp_value.value_namespace = name_space;
        time_stamp_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
        time_zone.value_namespace = name_space;
        time_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-stamp-value")
    {
        time_stamp_value.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "time-zone")
    {
        time_zone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool SyslogService::Timestamps::Debug::DebugDatetime::DatetimeValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-stamp-value" || name == "msec" || name == "time-zone" || name == "year")
        return true;
    return false;
}

Syslog::Syslog()
    :
    host_name_prefix{YType::str, "host-name-prefix"},
    local_log_file_size{YType::uint32, "local-log-file-size"},
    enable_console_logging{YType::boolean, "enable-console-logging"},
    suppress_duplicates{YType::empty, "suppress-duplicates"}
        ,
    monitor_logging(std::make_shared<Syslog::MonitorLogging>())
    , history_logging(std::make_shared<Syslog::HistoryLogging>())
    , logging_facilities(std::make_shared<Syslog::LoggingFacilities>())
    , trap_logging(std::make_shared<Syslog::TrapLogging>())
    , buffered_logging(std::make_shared<Syslog::BufferedLogging>())
    , host_server(std::make_shared<Syslog::HostServer>())
    , console_logging(std::make_shared<Syslog::ConsoleLogging>())
    , files(std::make_shared<Syslog::Files>())
    , ipv4(std::make_shared<Syslog::Ipv4>())
    , archive(std::make_shared<Syslog::Archive>())
    , ipv6(std::make_shared<Syslog::Ipv6>())
    , source_interface_table(std::make_shared<Syslog::SourceInterfaceTable>())
    , alarm_logger(std::make_shared<Syslog::AlarmLogger>())
    , correlator(std::make_shared<Syslog::Correlator>())
    , suppression(std::make_shared<Syslog::Suppression>())
{
    monitor_logging->parent = this;
    history_logging->parent = this;
    logging_facilities->parent = this;
    trap_logging->parent = this;
    buffered_logging->parent = this;
    host_server->parent = this;
    console_logging->parent = this;
    files->parent = this;
    ipv4->parent = this;
    archive->parent = this;
    ipv6->parent = this;
    source_interface_table->parent = this;
    alarm_logger->parent = this;
    correlator->parent = this;
    suppression->parent = this;

    yang_name = "syslog"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Syslog::~Syslog()
{
}

bool Syslog::has_data() const
{
    if (is_presence_container) return true;
    return host_name_prefix.is_set
	|| local_log_file_size.is_set
	|| enable_console_logging.is_set
	|| suppress_duplicates.is_set
	|| (monitor_logging !=  nullptr && monitor_logging->has_data())
	|| (history_logging !=  nullptr && history_logging->has_data())
	|| (logging_facilities !=  nullptr && logging_facilities->has_data())
	|| (trap_logging !=  nullptr && trap_logging->has_data())
	|| (buffered_logging !=  nullptr && buffered_logging->has_data())
	|| (host_server !=  nullptr && host_server->has_data())
	|| (console_logging !=  nullptr && console_logging->has_data())
	|| (files !=  nullptr && files->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (archive !=  nullptr && archive->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (source_interface_table !=  nullptr && source_interface_table->has_data())
	|| (alarm_logger !=  nullptr && alarm_logger->has_data())
	|| (correlator !=  nullptr && correlator->has_data())
	|| (suppression !=  nullptr && suppression->has_data());
}

bool Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name_prefix.yfilter)
	|| ydk::is_set(local_log_file_size.yfilter)
	|| ydk::is_set(enable_console_logging.yfilter)
	|| ydk::is_set(suppress_duplicates.yfilter)
	|| (monitor_logging !=  nullptr && monitor_logging->has_operation())
	|| (history_logging !=  nullptr && history_logging->has_operation())
	|| (logging_facilities !=  nullptr && logging_facilities->has_operation())
	|| (trap_logging !=  nullptr && trap_logging->has_operation())
	|| (buffered_logging !=  nullptr && buffered_logging->has_operation())
	|| (host_server !=  nullptr && host_server->has_operation())
	|| (console_logging !=  nullptr && console_logging->has_operation())
	|| (files !=  nullptr && files->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (archive !=  nullptr && archive->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (source_interface_table !=  nullptr && source_interface_table->has_operation())
	|| (alarm_logger !=  nullptr && alarm_logger->has_operation())
	|| (correlator !=  nullptr && correlator->has_operation())
	|| (suppression !=  nullptr && suppression->has_operation());
}

std::string Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name_prefix.is_set || is_set(host_name_prefix.yfilter)) leaf_name_data.push_back(host_name_prefix.get_name_leafdata());
    if (local_log_file_size.is_set || is_set(local_log_file_size.yfilter)) leaf_name_data.push_back(local_log_file_size.get_name_leafdata());
    if (enable_console_logging.is_set || is_set(enable_console_logging.yfilter)) leaf_name_data.push_back(enable_console_logging.get_name_leafdata());
    if (suppress_duplicates.is_set || is_set(suppress_duplicates.yfilter)) leaf_name_data.push_back(suppress_duplicates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor-logging")
    {
        if(monitor_logging == nullptr)
        {
            monitor_logging = std::make_shared<Syslog::MonitorLogging>();
        }
        return monitor_logging;
    }

    if(child_yang_name == "history-logging")
    {
        if(history_logging == nullptr)
        {
            history_logging = std::make_shared<Syslog::HistoryLogging>();
        }
        return history_logging;
    }

    if(child_yang_name == "logging-facilities")
    {
        if(logging_facilities == nullptr)
        {
            logging_facilities = std::make_shared<Syslog::LoggingFacilities>();
        }
        return logging_facilities;
    }

    if(child_yang_name == "trap-logging")
    {
        if(trap_logging == nullptr)
        {
            trap_logging = std::make_shared<Syslog::TrapLogging>();
        }
        return trap_logging;
    }

    if(child_yang_name == "buffered-logging")
    {
        if(buffered_logging == nullptr)
        {
            buffered_logging = std::make_shared<Syslog::BufferedLogging>();
        }
        return buffered_logging;
    }

    if(child_yang_name == "host-server")
    {
        if(host_server == nullptr)
        {
            host_server = std::make_shared<Syslog::HostServer>();
        }
        return host_server;
    }

    if(child_yang_name == "console-logging")
    {
        if(console_logging == nullptr)
        {
            console_logging = std::make_shared<Syslog::ConsoleLogging>();
        }
        return console_logging;
    }

    if(child_yang_name == "files")
    {
        if(files == nullptr)
        {
            files = std::make_shared<Syslog::Files>();
        }
        return files;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Syslog::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "archive")
    {
        if(archive == nullptr)
        {
            archive = std::make_shared<Syslog::Archive>();
        }
        return archive;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Syslog::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "source-interface-table")
    {
        if(source_interface_table == nullptr)
        {
            source_interface_table = std::make_shared<Syslog::SourceInterfaceTable>();
        }
        return source_interface_table;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger")
    {
        if(alarm_logger == nullptr)
        {
            alarm_logger = std::make_shared<Syslog::AlarmLogger>();
        }
        return alarm_logger;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-correlator-cfg:correlator")
    {
        if(correlator == nullptr)
        {
            correlator = std::make_shared<Syslog::Correlator>();
        }
        return correlator;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-correlator-cfg:suppression")
    {
        if(suppression == nullptr)
        {
            suppression = std::make_shared<Syslog::Suppression>();
        }
        return suppression;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor_logging != nullptr)
    {
        _children["monitor-logging"] = monitor_logging;
    }

    if(history_logging != nullptr)
    {
        _children["history-logging"] = history_logging;
    }

    if(logging_facilities != nullptr)
    {
        _children["logging-facilities"] = logging_facilities;
    }

    if(trap_logging != nullptr)
    {
        _children["trap-logging"] = trap_logging;
    }

    if(buffered_logging != nullptr)
    {
        _children["buffered-logging"] = buffered_logging;
    }

    if(host_server != nullptr)
    {
        _children["host-server"] = host_server;
    }

    if(console_logging != nullptr)
    {
        _children["console-logging"] = console_logging;
    }

    if(files != nullptr)
    {
        _children["files"] = files;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(archive != nullptr)
    {
        _children["archive"] = archive;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(source_interface_table != nullptr)
    {
        _children["source-interface-table"] = source_interface_table;
    }

    if(alarm_logger != nullptr)
    {
        _children["Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger"] = alarm_logger;
    }

    if(correlator != nullptr)
    {
        _children["Cisco-IOS-XR-infra-correlator-cfg:correlator"] = correlator;
    }

    if(suppression != nullptr)
    {
        _children["Cisco-IOS-XR-infra-correlator-cfg:suppression"] = suppression;
    }

    return _children;
}

void Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name-prefix")
    {
        host_name_prefix = value;
        host_name_prefix.value_namespace = name_space;
        host_name_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-log-file-size")
    {
        local_log_file_size = value;
        local_log_file_size.value_namespace = name_space;
        local_log_file_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-console-logging")
    {
        enable_console_logging = value;
        enable_console_logging.value_namespace = name_space;
        enable_console_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-duplicates")
    {
        suppress_duplicates = value;
        suppress_duplicates.value_namespace = name_space;
        suppress_duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name-prefix")
    {
        host_name_prefix.yfilter = yfilter;
    }
    if(value_path == "local-log-file-size")
    {
        local_log_file_size.yfilter = yfilter;
    }
    if(value_path == "enable-console-logging")
    {
        enable_console_logging.yfilter = yfilter;
    }
    if(value_path == "suppress-duplicates")
    {
        suppress_duplicates.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Syslog::clone_ptr() const
{
    return std::make_shared<Syslog>();
}

std::string Syslog::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Syslog::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Syslog::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Syslog::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-logging" || name == "history-logging" || name == "logging-facilities" || name == "trap-logging" || name == "buffered-logging" || name == "host-server" || name == "console-logging" || name == "files" || name == "ipv4" || name == "archive" || name == "ipv6" || name == "source-interface-table" || name == "alarm-logger" || name == "correlator" || name == "suppression" || name == "host-name-prefix" || name == "local-log-file-size" || name == "enable-console-logging" || name == "suppress-duplicates")
        return true;
    return false;
}

Syslog::MonitorLogging::MonitorLogging()
    :
    logging_level{YType::enumeration, "logging-level"}
        ,
    monitor_discriminator(std::make_shared<Syslog::MonitorLogging::MonitorDiscriminator>())
{
    monitor_discriminator->parent = this;

    yang_name = "monitor-logging"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::MonitorLogging::~MonitorLogging()
{
}

bool Syslog::MonitorLogging::has_data() const
{
    if (is_presence_container) return true;
    return logging_level.is_set
	|| (monitor_discriminator !=  nullptr && monitor_discriminator->has_data());
}

bool Syslog::MonitorLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging_level.yfilter)
	|| (monitor_discriminator !=  nullptr && monitor_discriminator->has_operation());
}

std::string Syslog::MonitorLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::MonitorLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::MonitorLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_level.is_set || is_set(logging_level.yfilter)) leaf_name_data.push_back(logging_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::MonitorLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor-discriminator")
    {
        if(monitor_discriminator == nullptr)
        {
            monitor_discriminator = std::make_shared<Syslog::MonitorLogging::MonitorDiscriminator>();
        }
        return monitor_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::MonitorLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor_discriminator != nullptr)
    {
        _children["monitor-discriminator"] = monitor_discriminator;
    }

    return _children;
}

void Syslog::MonitorLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging-level")
    {
        logging_level = value;
        logging_level.value_namespace = name_space;
        logging_level.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::MonitorLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging-level")
    {
        logging_level.yfilter = yfilter;
    }
}

bool Syslog::MonitorLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-discriminator" || name == "logging-level")
        return true;
    return false;
}

Syslog::MonitorLogging::MonitorDiscriminator::MonitorDiscriminator()
    :
    match2{YType::str, "match2"},
    nomatch1{YType::str, "nomatch1"},
    match1{YType::str, "match1"},
    nomatch3{YType::str, "nomatch3"},
    match3{YType::str, "match3"},
    nomatch2{YType::str, "nomatch2"}
{

    yang_name = "monitor-discriminator"; yang_parent_name = "monitor-logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::MonitorLogging::MonitorDiscriminator::~MonitorDiscriminator()
{
}

bool Syslog::MonitorLogging::MonitorDiscriminator::has_data() const
{
    if (is_presence_container) return true;
    return match2.is_set
	|| nomatch1.is_set
	|| match1.is_set
	|| nomatch3.is_set
	|| match3.is_set
	|| nomatch2.is_set;
}

bool Syslog::MonitorLogging::MonitorDiscriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match2.yfilter)
	|| ydk::is_set(nomatch1.yfilter)
	|| ydk::is_set(match1.yfilter)
	|| ydk::is_set(nomatch3.yfilter)
	|| ydk::is_set(match3.yfilter)
	|| ydk::is_set(nomatch2.yfilter);
}

std::string Syslog::MonitorLogging::MonitorDiscriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/monitor-logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::MonitorLogging::MonitorDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-discriminator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::MonitorLogging::MonitorDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match2.is_set || is_set(match2.yfilter)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.yfilter)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (match1.is_set || is_set(match1.yfilter)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.yfilter)) leaf_name_data.push_back(nomatch3.get_name_leafdata());
    if (match3.is_set || is_set(match3.yfilter)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.yfilter)) leaf_name_data.push_back(nomatch2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::MonitorLogging::MonitorDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::MonitorLogging::MonitorDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::MonitorLogging::MonitorDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match2")
    {
        match2 = value;
        match2.value_namespace = name_space;
        match2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
        nomatch1.value_namespace = name_space;
        nomatch1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match1")
    {
        match1 = value;
        match1.value_namespace = name_space;
        match1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
        nomatch3.value_namespace = name_space;
        nomatch3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match3")
    {
        match3 = value;
        match3.value_namespace = name_space;
        match3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
        nomatch2.value_namespace = name_space;
        nomatch2.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::MonitorLogging::MonitorDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match2")
    {
        match2.yfilter = yfilter;
    }
    if(value_path == "nomatch1")
    {
        nomatch1.yfilter = yfilter;
    }
    if(value_path == "match1")
    {
        match1.yfilter = yfilter;
    }
    if(value_path == "nomatch3")
    {
        nomatch3.yfilter = yfilter;
    }
    if(value_path == "match3")
    {
        match3.yfilter = yfilter;
    }
    if(value_path == "nomatch2")
    {
        nomatch2.yfilter = yfilter;
    }
}

bool Syslog::MonitorLogging::MonitorDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match2" || name == "nomatch1" || name == "match1" || name == "nomatch3" || name == "match3" || name == "nomatch2")
        return true;
    return false;
}

Syslog::HistoryLogging::HistoryLogging()
    :
    history_size{YType::uint32, "history-size"},
    logging_level{YType::enumeration, "logging-level"}
{

    yang_name = "history-logging"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::HistoryLogging::~HistoryLogging()
{
}

bool Syslog::HistoryLogging::has_data() const
{
    if (is_presence_container) return true;
    return history_size.is_set
	|| logging_level.is_set;
}

bool Syslog::HistoryLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_size.yfilter)
	|| ydk::is_set(logging_level.yfilter);
}

std::string Syslog::HistoryLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::HistoryLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HistoryLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.yfilter)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (logging_level.is_set || is_set(logging_level.yfilter)) leaf_name_data.push_back(logging_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HistoryLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HistoryLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::HistoryLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history-size")
    {
        history_size = value;
        history_size.value_namespace = name_space;
        history_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-level")
    {
        logging_level = value;
        logging_level.value_namespace = name_space;
        logging_level.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HistoryLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history-size")
    {
        history_size.yfilter = yfilter;
    }
    if(value_path == "logging-level")
    {
        logging_level.yfilter = yfilter;
    }
}

bool Syslog::HistoryLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-size" || name == "logging-level")
        return true;
    return false;
}

Syslog::LoggingFacilities::LoggingFacilities()
    :
    facility_level{YType::enumeration, "facility-level"}
{

    yang_name = "logging-facilities"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::LoggingFacilities::~LoggingFacilities()
{
}

bool Syslog::LoggingFacilities::has_data() const
{
    if (is_presence_container) return true;
    return facility_level.is_set;
}

bool Syslog::LoggingFacilities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(facility_level.yfilter);
}

std::string Syslog::LoggingFacilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::LoggingFacilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-facilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::LoggingFacilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility_level.is_set || is_set(facility_level.yfilter)) leaf_name_data.push_back(facility_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::LoggingFacilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::LoggingFacilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::LoggingFacilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "facility-level")
    {
        facility_level = value;
        facility_level.value_namespace = name_space;
        facility_level.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::LoggingFacilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "facility-level")
    {
        facility_level.yfilter = yfilter;
    }
}

bool Syslog::LoggingFacilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "facility-level")
        return true;
    return false;
}

Syslog::TrapLogging::TrapLogging()
    :
    logging_level{YType::enumeration, "logging-level"}
{

    yang_name = "trap-logging"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::TrapLogging::~TrapLogging()
{
}

bool Syslog::TrapLogging::has_data() const
{
    if (is_presence_container) return true;
    return logging_level.is_set;
}

bool Syslog::TrapLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging_level.yfilter);
}

std::string Syslog::TrapLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::TrapLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::TrapLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_level.is_set || is_set(logging_level.yfilter)) leaf_name_data.push_back(logging_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::TrapLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::TrapLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::TrapLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging-level")
    {
        logging_level = value;
        logging_level.value_namespace = name_space;
        logging_level.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::TrapLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging-level")
    {
        logging_level.yfilter = yfilter;
    }
}

bool Syslog::TrapLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging-level")
        return true;
    return false;
}

Syslog::BufferedLogging::BufferedLogging()
    :
    logging_level{YType::enumeration, "logging-level"},
    buffer_size{YType::uint32, "buffer-size"}
        ,
    buffered_discriminator(std::make_shared<Syslog::BufferedLogging::BufferedDiscriminator>())
{
    buffered_discriminator->parent = this;

    yang_name = "buffered-logging"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::BufferedLogging::~BufferedLogging()
{
}

bool Syslog::BufferedLogging::has_data() const
{
    if (is_presence_container) return true;
    return logging_level.is_set
	|| buffer_size.is_set
	|| (buffered_discriminator !=  nullptr && buffered_discriminator->has_data());
}

bool Syslog::BufferedLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging_level.yfilter)
	|| ydk::is_set(buffer_size.yfilter)
	|| (buffered_discriminator !=  nullptr && buffered_discriminator->has_operation());
}

std::string Syslog::BufferedLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::BufferedLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffered-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::BufferedLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_level.is_set || is_set(logging_level.yfilter)) leaf_name_data.push_back(logging_level.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::BufferedLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffered-discriminator")
    {
        if(buffered_discriminator == nullptr)
        {
            buffered_discriminator = std::make_shared<Syslog::BufferedLogging::BufferedDiscriminator>();
        }
        return buffered_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::BufferedLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(buffered_discriminator != nullptr)
    {
        _children["buffered-discriminator"] = buffered_discriminator;
    }

    return _children;
}

void Syslog::BufferedLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging-level")
    {
        logging_level = value;
        logging_level.value_namespace = name_space;
        logging_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::BufferedLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging-level")
    {
        logging_level.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Syslog::BufferedLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffered-discriminator" || name == "logging-level" || name == "buffer-size")
        return true;
    return false;
}

Syslog::BufferedLogging::BufferedDiscriminator::BufferedDiscriminator()
    :
    match2{YType::str, "match2"},
    nomatch1{YType::str, "nomatch1"},
    match1{YType::str, "match1"},
    nomatch3{YType::str, "nomatch3"},
    match3{YType::str, "match3"},
    nomatch2{YType::str, "nomatch2"}
{

    yang_name = "buffered-discriminator"; yang_parent_name = "buffered-logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::BufferedLogging::BufferedDiscriminator::~BufferedDiscriminator()
{
}

bool Syslog::BufferedLogging::BufferedDiscriminator::has_data() const
{
    if (is_presence_container) return true;
    return match2.is_set
	|| nomatch1.is_set
	|| match1.is_set
	|| nomatch3.is_set
	|| match3.is_set
	|| nomatch2.is_set;
}

bool Syslog::BufferedLogging::BufferedDiscriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match2.yfilter)
	|| ydk::is_set(nomatch1.yfilter)
	|| ydk::is_set(match1.yfilter)
	|| ydk::is_set(nomatch3.yfilter)
	|| ydk::is_set(match3.yfilter)
	|| ydk::is_set(nomatch2.yfilter);
}

std::string Syslog::BufferedLogging::BufferedDiscriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/buffered-logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::BufferedLogging::BufferedDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffered-discriminator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::BufferedLogging::BufferedDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match2.is_set || is_set(match2.yfilter)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.yfilter)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (match1.is_set || is_set(match1.yfilter)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.yfilter)) leaf_name_data.push_back(nomatch3.get_name_leafdata());
    if (match3.is_set || is_set(match3.yfilter)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.yfilter)) leaf_name_data.push_back(nomatch2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::BufferedLogging::BufferedDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::BufferedLogging::BufferedDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::BufferedLogging::BufferedDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match2")
    {
        match2 = value;
        match2.value_namespace = name_space;
        match2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
        nomatch1.value_namespace = name_space;
        nomatch1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match1")
    {
        match1 = value;
        match1.value_namespace = name_space;
        match1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
        nomatch3.value_namespace = name_space;
        nomatch3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match3")
    {
        match3 = value;
        match3.value_namespace = name_space;
        match3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
        nomatch2.value_namespace = name_space;
        nomatch2.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::BufferedLogging::BufferedDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match2")
    {
        match2.yfilter = yfilter;
    }
    if(value_path == "nomatch1")
    {
        nomatch1.yfilter = yfilter;
    }
    if(value_path == "match1")
    {
        match1.yfilter = yfilter;
    }
    if(value_path == "nomatch3")
    {
        nomatch3.yfilter = yfilter;
    }
    if(value_path == "match3")
    {
        match3.yfilter = yfilter;
    }
    if(value_path == "nomatch2")
    {
        nomatch2.yfilter = yfilter;
    }
}

bool Syslog::BufferedLogging::BufferedDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match2" || name == "nomatch1" || name == "match1" || name == "nomatch3" || name == "match3" || name == "nomatch2")
        return true;
    return false;
}

Syslog::HostServer::HostServer()
    :
    vrfs(std::make_shared<Syslog::HostServer::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "host-server"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::HostServer::~HostServer()
{
}

bool Syslog::HostServer::has_data() const
{
    if (is_presence_container) return true;
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool Syslog::HostServer::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Syslog::HostServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::HostServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Syslog::HostServer::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void Syslog::HostServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "host-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::HostServer::Vrfs::~Vrfs()
{
}

bool Syslog::HostServer::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::HostServer::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/host-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::HostServer::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Syslog::HostServer::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::get_children() const
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

void Syslog::HostServer::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    ipv6s(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6s>())
    , hosts(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts>())
    , ipv4s(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4s>())
{
    ipv6s->parent = this;
    hosts->parent = this;
    ipv4s->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::HostServer::Vrfs::Vrf::~Vrf()
{
}

bool Syslog::HostServer::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (ipv6s !=  nullptr && ipv6s->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (ipv4s !=  nullptr && ipv4s->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (ipv6s !=  nullptr && ipv6s->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (ipv4s !=  nullptr && ipv4s->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/host-server/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::HostServer::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6s")
    {
        if(ipv6s == nullptr)
        {
            ipv6s = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6s>();
        }
        return ipv6s;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts>();
        }
        return hosts;
    }

    if(child_yang_name == "ipv4s")
    {
        if(ipv4s == nullptr)
        {
            ipv4s = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4s>();
        }
        return ipv4s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6s != nullptr)
    {
        _children["ipv6s"] = ipv6s;
    }

    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    if(ipv4s != nullptr)
    {
        _children["ipv4s"] = ipv4s;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6s" || name == "hosts" || name == "ipv4s" || name == "vrf-name")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6s()
    :
    ipv6(this, {"address"})
{

    yang_name = "ipv6s"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::~Ipv6s()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::has_operation() const
{
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv6s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
        ,
    ipv6_severity_port(nullptr) // presence node
    , ipv6_severity_levels(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels>())
{
    ipv6_severity_levels->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ipv6s"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::~Ipv6()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (ipv6_severity_port !=  nullptr && ipv6_severity_port->has_data())
	|| (ipv6_severity_levels !=  nullptr && ipv6_severity_levels->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (ipv6_severity_port !=  nullptr && ipv6_severity_port->has_operation())
	|| (ipv6_severity_levels !=  nullptr && ipv6_severity_levels->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-severity-port")
    {
        if(ipv6_severity_port == nullptr)
        {
            ipv6_severity_port = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort>();
        }
        return ipv6_severity_port;
    }

    if(child_yang_name == "ipv6-severity-levels")
    {
        if(ipv6_severity_levels == nullptr)
        {
            ipv6_severity_levels = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels>();
        }
        return ipv6_severity_levels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_severity_port != nullptr)
    {
        _children["ipv6-severity-port"] = ipv6_severity_port;
    }

    if(ipv6_severity_levels != nullptr)
    {
        _children["ipv6-severity-levels"] = ipv6_severity_levels;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-severity-port" || name == "ipv6-severity-levels" || name == "address")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::Ipv6SeverityPort()
    :
    severity{YType::uint32, "severity"},
    port{YType::uint32, "port"}
{

    yang_name = "ipv6-severity-port"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::~Ipv6SeverityPort()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set
	|| port.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-severity-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "port")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevels()
    :
    ipv6_severity_level(this, {"severity"})
{

    yang_name = "ipv6-severity-levels"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::~Ipv6SeverityLevels()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_severity_level.len(); index++)
    {
        if(ipv6_severity_level[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::has_operation() const
{
    for (std::size_t index=0; index<ipv6_severity_level.len(); index++)
    {
        if(ipv6_severity_level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-severity-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-severity-level")
    {
        auto ent_ = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel>();
        ent_->parent = this;
        ipv6_severity_level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_severity_level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-severity-level")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::Ipv6SeverityLevel()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "ipv6-severity-level"; yang_parent_name = "ipv6-severity-levels"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::~Ipv6SeverityLevel()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-severity-level";
    ADD_KEY_TOKEN(severity, "severity");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv6s::Ipv6::Ipv6SeverityLevels::Ipv6SeverityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Hosts()
    :
    host(this, {"host_name"})
{

    yang_name = "hosts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Hosts::~Hosts()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::Host()
    :
    host_name{YType::str, "host-name"}
        ,
    host_name_severities(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities>())
    , host_severity_port(nullptr) // presence node
{
    host_name_severities->parent = this;

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::~Host()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| (host_name_severities !=  nullptr && host_name_severities->has_data())
	|| (host_severity_port !=  nullptr && host_severity_port->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| (host_name_severities !=  nullptr && host_name_severities->has_operation())
	|| (host_severity_port !=  nullptr && host_severity_port->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name-severities")
    {
        if(host_name_severities == nullptr)
        {
            host_name_severities = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities>();
        }
        return host_name_severities;
    }

    if(child_yang_name == "host-severity-port")
    {
        if(host_severity_port == nullptr)
        {
            host_severity_port = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort>();
        }
        return host_severity_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_name_severities != nullptr)
    {
        _children["host-name-severities"] = host_name_severities;
    }

    if(host_severity_port != nullptr)
    {
        _children["host-severity-port"] = host_severity_port;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name-severities" || name == "host-severity-port" || name == "host-name")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverities()
    :
    host_name_severity(this, {"severity"})
{

    yang_name = "host-name-severities"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::~HostNameSeverities()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_name_severity.len(); index++)
    {
        if(host_name_severity[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::has_operation() const
{
    for (std::size_t index=0; index<host_name_severity.len(); index++)
    {
        if(host_name_severity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name-severities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name-severity")
    {
        auto ent_ = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity>();
        ent_->parent = this;
        host_name_severity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_name_severity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name-severity")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::HostNameSeverity()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "host-name-severity"; yang_parent_name = "host-name-severities"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::~HostNameSeverity()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name-severity";
    ADD_KEY_TOKEN(severity, "severity");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostNameSeverities::HostNameSeverity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::HostSeverityPort()
    :
    severity{YType::uint32, "severity"},
    port{YType::uint32, "port"}
{

    yang_name = "host-severity-port"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::~HostSeverityPort()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set
	|| port.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-severity-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Hosts::Host::HostSeverityPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "port")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4s()
    :
    ipv4(this, {"address"})
{

    yang_name = "ipv4s"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::~Ipv4s()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv4s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4()
    :
    address{YType::str, "address"}
        ,
    ipv4_severity_levels(std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels>())
    , ipv4_severity_port(nullptr) // presence node
{
    ipv4_severity_levels->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ipv4s"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::~Ipv4()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (ipv4_severity_levels !=  nullptr && ipv4_severity_levels->has_data())
	|| (ipv4_severity_port !=  nullptr && ipv4_severity_port->has_data());
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (ipv4_severity_levels !=  nullptr && ipv4_severity_levels->has_operation())
	|| (ipv4_severity_port !=  nullptr && ipv4_severity_port->has_operation());
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-severity-levels")
    {
        if(ipv4_severity_levels == nullptr)
        {
            ipv4_severity_levels = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels>();
        }
        return ipv4_severity_levels;
    }

    if(child_yang_name == "ipv4-severity-port")
    {
        if(ipv4_severity_port == nullptr)
        {
            ipv4_severity_port = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort>();
        }
        return ipv4_severity_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_severity_levels != nullptr)
    {
        _children["ipv4-severity-levels"] = ipv4_severity_levels;
    }

    if(ipv4_severity_port != nullptr)
    {
        _children["ipv4-severity-port"] = ipv4_severity_port;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-severity-levels" || name == "ipv4-severity-port" || name == "address")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevels()
    :
    ipv4_severity_level(this, {"severity"})
{

    yang_name = "ipv4-severity-levels"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::~Ipv4SeverityLevels()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_severity_level.len(); index++)
    {
        if(ipv4_severity_level[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::has_operation() const
{
    for (std::size_t index=0; index<ipv4_severity_level.len(); index++)
    {
        if(ipv4_severity_level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-severity-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-severity-level")
    {
        auto ent_ = std::make_shared<Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel>();
        ent_->parent = this;
        ipv4_severity_level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_severity_level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-severity-level")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::Ipv4SeverityLevel()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "ipv4-severity-level"; yang_parent_name = "ipv4-severity-levels"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::~Ipv4SeverityLevel()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-severity-level";
    ADD_KEY_TOKEN(severity, "severity");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityLevels::Ipv4SeverityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::Ipv4SeverityPort()
    :
    severity{YType::uint32, "severity"},
    port{YType::uint32, "port"}
{

    yang_name = "ipv4-severity-port"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::~Ipv4SeverityPort()
{
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set
	|| port.is_set;
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-severity-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Syslog::HostServer::Vrfs::Vrf::Ipv4s::Ipv4::Ipv4SeverityPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "port")
        return true;
    return false;
}

Syslog::ConsoleLogging::ConsoleLogging()
    :
    logging_level{YType::enumeration, "logging-level"}
        ,
    console_discriminator(std::make_shared<Syslog::ConsoleLogging::ConsoleDiscriminator>())
{
    console_discriminator->parent = this;

    yang_name = "console-logging"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::ConsoleLogging::~ConsoleLogging()
{
}

bool Syslog::ConsoleLogging::has_data() const
{
    if (is_presence_container) return true;
    return logging_level.is_set
	|| (console_discriminator !=  nullptr && console_discriminator->has_data());
}

bool Syslog::ConsoleLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging_level.yfilter)
	|| (console_discriminator !=  nullptr && console_discriminator->has_operation());
}

std::string Syslog::ConsoleLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::ConsoleLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::ConsoleLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_level.is_set || is_set(logging_level.yfilter)) leaf_name_data.push_back(logging_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::ConsoleLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console-discriminator")
    {
        if(console_discriminator == nullptr)
        {
            console_discriminator = std::make_shared<Syslog::ConsoleLogging::ConsoleDiscriminator>();
        }
        return console_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::ConsoleLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(console_discriminator != nullptr)
    {
        _children["console-discriminator"] = console_discriminator;
    }

    return _children;
}

void Syslog::ConsoleLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging-level")
    {
        logging_level = value;
        logging_level.value_namespace = name_space;
        logging_level.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::ConsoleLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging-level")
    {
        logging_level.yfilter = yfilter;
    }
}

bool Syslog::ConsoleLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console-discriminator" || name == "logging-level")
        return true;
    return false;
}

Syslog::ConsoleLogging::ConsoleDiscriminator::ConsoleDiscriminator()
    :
    match2{YType::str, "match2"},
    nomatch1{YType::str, "nomatch1"},
    match1{YType::str, "match1"},
    nomatch3{YType::str, "nomatch3"},
    match3{YType::str, "match3"},
    nomatch2{YType::str, "nomatch2"}
{

    yang_name = "console-discriminator"; yang_parent_name = "console-logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::ConsoleLogging::ConsoleDiscriminator::~ConsoleDiscriminator()
{
}

bool Syslog::ConsoleLogging::ConsoleDiscriminator::has_data() const
{
    if (is_presence_container) return true;
    return match2.is_set
	|| nomatch1.is_set
	|| match1.is_set
	|| nomatch3.is_set
	|| match3.is_set
	|| nomatch2.is_set;
}

bool Syslog::ConsoleLogging::ConsoleDiscriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match2.yfilter)
	|| ydk::is_set(nomatch1.yfilter)
	|| ydk::is_set(match1.yfilter)
	|| ydk::is_set(nomatch3.yfilter)
	|| ydk::is_set(match3.yfilter)
	|| ydk::is_set(nomatch2.yfilter);
}

std::string Syslog::ConsoleLogging::ConsoleDiscriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/console-logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::ConsoleLogging::ConsoleDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-discriminator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::ConsoleLogging::ConsoleDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match2.is_set || is_set(match2.yfilter)) leaf_name_data.push_back(match2.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.yfilter)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (match1.is_set || is_set(match1.yfilter)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.yfilter)) leaf_name_data.push_back(nomatch3.get_name_leafdata());
    if (match3.is_set || is_set(match3.yfilter)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch2.is_set || is_set(nomatch2.yfilter)) leaf_name_data.push_back(nomatch2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::ConsoleLogging::ConsoleDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::ConsoleLogging::ConsoleDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::ConsoleLogging::ConsoleDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match2")
    {
        match2 = value;
        match2.value_namespace = name_space;
        match2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
        nomatch1.value_namespace = name_space;
        nomatch1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match1")
    {
        match1 = value;
        match1.value_namespace = name_space;
        match1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
        nomatch3.value_namespace = name_space;
        nomatch3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match3")
    {
        match3 = value;
        match3.value_namespace = name_space;
        match3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
        nomatch2.value_namespace = name_space;
        nomatch2.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::ConsoleLogging::ConsoleDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match2")
    {
        match2.yfilter = yfilter;
    }
    if(value_path == "nomatch1")
    {
        nomatch1.yfilter = yfilter;
    }
    if(value_path == "match1")
    {
        match1.yfilter = yfilter;
    }
    if(value_path == "nomatch3")
    {
        nomatch3.yfilter = yfilter;
    }
    if(value_path == "match3")
    {
        match3.yfilter = yfilter;
    }
    if(value_path == "nomatch2")
    {
        nomatch2.yfilter = yfilter;
    }
}

bool Syslog::ConsoleLogging::ConsoleDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match2" || name == "nomatch1" || name == "match1" || name == "nomatch3" || name == "match3" || name == "nomatch2")
        return true;
    return false;
}

Syslog::Files::Files()
    :
    file(this, {"file_name"})
{

    yang_name = "files"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Files::~Files()
{
}

bool Syslog::Files::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<file.len(); index++)
    {
        if(file[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Files::has_operation() const
{
    for (std::size_t index=0; index<file.len(); index++)
    {
        if(file[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Files::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Files::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "files";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Files::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Files::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        auto ent_ = std::make_shared<Syslog::Files::File>();
        ent_->parent = this;
        file.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Files::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : file.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Files::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Files::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Files::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file")
        return true;
    return false;
}

Syslog::Files::File::File()
    :
    file_name{YType::str, "file-name"}
        ,
    file_specification(std::make_shared<Syslog::Files::File::FileSpecification>())
    , file_log_discriminator(std::make_shared<Syslog::Files::File::FileLogDiscriminator>())
{
    file_specification->parent = this;
    file_log_discriminator->parent = this;

    yang_name = "file"; yang_parent_name = "files"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Files::File::~File()
{
}

bool Syslog::Files::File::has_data() const
{
    if (is_presence_container) return true;
    return file_name.is_set
	|| (file_specification !=  nullptr && file_specification->has_data())
	|| (file_log_discriminator !=  nullptr && file_log_discriminator->has_data());
}

bool Syslog::Files::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| (file_specification !=  nullptr && file_specification->has_operation())
	|| (file_log_discriminator !=  nullptr && file_log_discriminator->has_operation());
}

std::string Syslog::Files::File::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/files/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Files::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    ADD_KEY_TOKEN(file_name, "file-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Files::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Files::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file-specification")
    {
        if(file_specification == nullptr)
        {
            file_specification = std::make_shared<Syslog::Files::File::FileSpecification>();
        }
        return file_specification;
    }

    if(child_yang_name == "file-log-discriminator")
    {
        if(file_log_discriminator == nullptr)
        {
            file_log_discriminator = std::make_shared<Syslog::Files::File::FileLogDiscriminator>();
        }
        return file_log_discriminator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Files::File::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(file_specification != nullptr)
    {
        _children["file-specification"] = file_specification;
    }

    if(file_log_discriminator != nullptr)
    {
        _children["file-log-discriminator"] = file_log_discriminator;
    }

    return _children;
}

void Syslog::Files::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Files::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
}

bool Syslog::Files::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-specification" || name == "file-log-discriminator" || name == "file-name")
        return true;
    return false;
}

Syslog::Files::File::FileSpecification::FileSpecification()
    :
    path{YType::str, "path"},
    max_file_size{YType::uint32, "max-file-size"},
    severity{YType::uint32, "severity"}
{

    yang_name = "file-specification"; yang_parent_name = "file"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Files::File::FileSpecification::~FileSpecification()
{
}

bool Syslog::Files::File::FileSpecification::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| max_file_size.is_set
	|| severity.is_set;
}

bool Syslog::Files::File::FileSpecification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(max_file_size.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Syslog::Files::File::FileSpecification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-specification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Files::File::FileSpecification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (max_file_size.is_set || is_set(max_file_size.yfilter)) leaf_name_data.push_back(max_file_size.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Files::File::FileSpecification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Files::File::FileSpecification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Files::File::FileSpecification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-size")
    {
        max_file_size = value;
        max_file_size.value_namespace = name_space;
        max_file_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Files::File::FileSpecification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "max-file-size")
    {
        max_file_size.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Syslog::Files::File::FileSpecification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "max-file-size" || name == "severity")
        return true;
    return false;
}

Syslog::Files::File::FileLogDiscriminator::FileLogDiscriminator()
    :
    nomatch2{YType::str, "nomatch2"},
    match3{YType::str, "match3"},
    nomatch3{YType::str, "nomatch3"},
    match1{YType::str, "match1"},
    nomatch1{YType::str, "nomatch1"},
    match2{YType::str, "match2"}
{

    yang_name = "file-log-discriminator"; yang_parent_name = "file"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Files::File::FileLogDiscriminator::~FileLogDiscriminator()
{
}

bool Syslog::Files::File::FileLogDiscriminator::has_data() const
{
    if (is_presence_container) return true;
    return nomatch2.is_set
	|| match3.is_set
	|| nomatch3.is_set
	|| match1.is_set
	|| nomatch1.is_set
	|| match2.is_set;
}

bool Syslog::Files::File::FileLogDiscriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nomatch2.yfilter)
	|| ydk::is_set(match3.yfilter)
	|| ydk::is_set(nomatch3.yfilter)
	|| ydk::is_set(match1.yfilter)
	|| ydk::is_set(nomatch1.yfilter)
	|| ydk::is_set(match2.yfilter);
}

std::string Syslog::Files::File::FileLogDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-log-discriminator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Files::File::FileLogDiscriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nomatch2.is_set || is_set(nomatch2.yfilter)) leaf_name_data.push_back(nomatch2.get_name_leafdata());
    if (match3.is_set || is_set(match3.yfilter)) leaf_name_data.push_back(match3.get_name_leafdata());
    if (nomatch3.is_set || is_set(nomatch3.yfilter)) leaf_name_data.push_back(nomatch3.get_name_leafdata());
    if (match1.is_set || is_set(match1.yfilter)) leaf_name_data.push_back(match1.get_name_leafdata());
    if (nomatch1.is_set || is_set(nomatch1.yfilter)) leaf_name_data.push_back(nomatch1.get_name_leafdata());
    if (match2.is_set || is_set(match2.yfilter)) leaf_name_data.push_back(match2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Files::File::FileLogDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Files::File::FileLogDiscriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Files::File::FileLogDiscriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nomatch2")
    {
        nomatch2 = value;
        nomatch2.value_namespace = name_space;
        nomatch2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match3")
    {
        match3 = value;
        match3.value_namespace = name_space;
        match3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch3")
    {
        nomatch3 = value;
        nomatch3.value_namespace = name_space;
        nomatch3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match1")
    {
        match1 = value;
        match1.value_namespace = name_space;
        match1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nomatch1")
    {
        nomatch1 = value;
        nomatch1.value_namespace = name_space;
        nomatch1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match2")
    {
        match2 = value;
        match2.value_namespace = name_space;
        match2.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Files::File::FileLogDiscriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nomatch2")
    {
        nomatch2.yfilter = yfilter;
    }
    if(value_path == "match3")
    {
        match3.yfilter = yfilter;
    }
    if(value_path == "nomatch3")
    {
        nomatch3.yfilter = yfilter;
    }
    if(value_path == "match1")
    {
        match1.yfilter = yfilter;
    }
    if(value_path == "nomatch1")
    {
        nomatch1.yfilter = yfilter;
    }
    if(value_path == "match2")
    {
        match2.yfilter = yfilter;
    }
}

bool Syslog::Files::File::FileLogDiscriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nomatch2" || name == "match3" || name == "nomatch3" || name == "match1" || name == "nomatch1" || name == "match2")
        return true;
    return false;
}

Syslog::Ipv4::Ipv4()
    :
    dscp(nullptr) // presence node
    , tos(std::make_shared<Syslog::Ipv4::Tos>())
    , precedence(nullptr) // presence node
{
    tos->parent = this;

    yang_name = "ipv4"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Ipv4::~Ipv4()
{
}

bool Syslog::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (dscp !=  nullptr && dscp->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (precedence !=  nullptr && precedence->has_data());
}

bool Syslog::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation());
}

std::string Syslog::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Syslog::Ipv4::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Syslog::Ipv4::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Syslog::Ipv4::Precedence>();
        }
        return precedence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    if(precedence != nullptr)
    {
        _children["precedence"] = precedence;
    }

    return _children;
}

void Syslog::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "tos" || name == "precedence")
        return true;
    return false;
}

Syslog::Ipv4::Dscp::Dscp()
    :
    type{YType::enumeration, "type"},
    unused{YType::str, "unused"},
    value_{YType::str, "value"}
{

    yang_name = "dscp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Syslog::Ipv4::Dscp::~Dscp()
{
}

bool Syslog::Ipv4::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unused.is_set
	|| value_.is_set;
}

bool Syslog::Ipv4::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unused.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Syslog::Ipv4::Dscp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv4::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv4::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv4::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv4::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Ipv4::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Ipv4::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Syslog::Ipv4::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unused" || name == "value")
        return true;
    return false;
}

Syslog::Ipv4::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    precedence{YType::str, "precedence"},
    dscp{YType::str, "dscp"}
{

    yang_name = "tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Ipv4::Tos::~Tos()
{
}

bool Syslog::Ipv4::Tos::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| precedence.is_set
	|| dscp.is_set;
}

bool Syslog::Ipv4::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Syslog::Ipv4::Tos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv4::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv4::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv4::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv4::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Ipv4::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Ipv4::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Syslog::Ipv4::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "precedence" || name == "dscp")
        return true;
    return false;
}

Syslog::Ipv4::Precedence::Precedence()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"},
    unused{YType::str, "unused"}
{

    yang_name = "precedence"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Syslog::Ipv4::Precedence::~Precedence()
{
}

bool Syslog::Ipv4::Precedence::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| unused.is_set;
}

bool Syslog::Ipv4::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string Syslog::Ipv4::Precedence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv4::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv4::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv4::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv4::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Ipv4::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Ipv4::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool Syslog::Ipv4::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "unused")
        return true;
    return false;
}

Syslog::Archive::Archive()
    :
    size{YType::uint32, "size"},
    file_size{YType::uint32, "file-size"},
    device{YType::str, "device"},
    threshold{YType::uint32, "threshold"},
    frequency{YType::enumeration, "frequency"},
    severity{YType::enumeration, "severity"},
    length{YType::uint32, "length"}
{

    yang_name = "archive"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Archive::~Archive()
{
}

bool Syslog::Archive::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| file_size.is_set
	|| device.is_set
	|| threshold.is_set
	|| frequency.is_set
	|| severity.is_set
	|| length.is_set;
}

bool Syslog::Archive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(file_size.yfilter)
	|| ydk::is_set(device.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string Syslog::Archive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Archive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (file_size.is_set || is_set(file_size.yfilter)) leaf_name_data.push_back(file_size.get_name_leafdata());
    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Archive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-size")
    {
        file_size = value;
        file_size.value_namespace = name_space;
        file_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Archive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "file-size")
    {
        file_size.yfilter = yfilter;
    }
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool Syslog::Archive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "file-size" || name == "device" || name == "threshold" || name == "frequency" || name == "severity" || name == "length")
        return true;
    return false;
}

Syslog::Ipv6::Ipv6()
    :
    dscp(nullptr) // presence node
    , traffic_class(std::make_shared<Syslog::Ipv6::TrafficClass>())
    , precedence(nullptr) // presence node
{
    traffic_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Ipv6::~Ipv6()
{
}

bool Syslog::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (dscp !=  nullptr && dscp->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data())
	|| (precedence !=  nullptr && precedence->has_data());
}

bool Syslog::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation());
}

std::string Syslog::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Syslog::Ipv6::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Syslog::Ipv6::TrafficClass>();
        }
        return traffic_class;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Syslog::Ipv6::Precedence>();
        }
        return precedence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(traffic_class != nullptr)
    {
        _children["traffic-class"] = traffic_class;
    }

    if(precedence != nullptr)
    {
        _children["precedence"] = precedence;
    }

    return _children;
}

void Syslog::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "traffic-class" || name == "precedence")
        return true;
    return false;
}

Syslog::Ipv6::Dscp::Dscp()
    :
    type{YType::enumeration, "type"},
    unused{YType::str, "unused"},
    value_{YType::str, "value"}
{

    yang_name = "dscp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Syslog::Ipv6::Dscp::~Dscp()
{
}

bool Syslog::Ipv6::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unused.is_set
	|| value_.is_set;
}

bool Syslog::Ipv6::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unused.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Syslog::Ipv6::Dscp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv6::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv6::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv6::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv6::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Ipv6::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Ipv6::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Syslog::Ipv6::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unused" || name == "value")
        return true;
    return false;
}

Syslog::Ipv6::TrafficClass::TrafficClass()
    :
    type{YType::enumeration, "type"},
    precedence{YType::str, "precedence"},
    dscp{YType::str, "dscp"}
{

    yang_name = "traffic-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Ipv6::TrafficClass::~TrafficClass()
{
}

bool Syslog::Ipv6::TrafficClass::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| precedence.is_set
	|| dscp.is_set;
}

bool Syslog::Ipv6::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Syslog::Ipv6::TrafficClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv6::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv6::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv6::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv6::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Ipv6::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Ipv6::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Syslog::Ipv6::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "precedence" || name == "dscp")
        return true;
    return false;
}

Syslog::Ipv6::Precedence::Precedence()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"},
    unused{YType::str, "unused"}
{

    yang_name = "precedence"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Syslog::Ipv6::Precedence::~Precedence()
{
}

bool Syslog::Ipv6::Precedence::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| unused.is_set;
}

bool Syslog::Ipv6::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string Syslog::Ipv6::Precedence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Ipv6::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Ipv6::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Ipv6::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Ipv6::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Ipv6::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Ipv6::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool Syslog::Ipv6::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "unused")
        return true;
    return false;
}

Syslog::SourceInterfaceTable::SourceInterfaceTable()
    :
    source_interface_values(std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues>())
{
    source_interface_values->parent = this;

    yang_name = "source-interface-table"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::SourceInterfaceTable::~SourceInterfaceTable()
{
}

bool Syslog::SourceInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    return (source_interface_values !=  nullptr && source_interface_values->has_data());
}

bool Syslog::SourceInterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface_values !=  nullptr && source_interface_values->has_operation());
}

std::string Syslog::SourceInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::SourceInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::SourceInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::SourceInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-values")
    {
        if(source_interface_values == nullptr)
        {
            source_interface_values = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues>();
        }
        return source_interface_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::SourceInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface_values != nullptr)
    {
        _children["source-interface-values"] = source_interface_values;
    }

    return _children;
}

void Syslog::SourceInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::SourceInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::SourceInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface-values")
        return true;
    return false;
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValues()
    :
    source_interface_value(this, {"src_interface_name_value"})
{

    yang_name = "source-interface-values"; yang_parent_name = "source-interface-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::~SourceInterfaceValues()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_interface_value.len(); index++)
    {
        if(source_interface_value[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::has_operation() const
{
    for (std::size_t index=0; index<source_interface_value.len(); index++)
    {
        if(source_interface_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/source-interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::SourceInterfaceTable::SourceInterfaceValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-value")
    {
        auto ent_ = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue>();
        ent_->parent = this;
        source_interface_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source_interface_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface-value")
        return true;
    return false;
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceValue()
    :
    src_interface_name_value{YType::str, "src-interface-name-value"}
        ,
    source_interface_vrfs(std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs>())
{
    source_interface_vrfs->parent = this;

    yang_name = "source-interface-value"; yang_parent_name = "source-interface-values"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::~SourceInterfaceValue()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::has_data() const
{
    if (is_presence_container) return true;
    return src_interface_name_value.is_set
	|| (source_interface_vrfs !=  nullptr && source_interface_vrfs->has_data());
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_interface_name_value.yfilter)
	|| (source_interface_vrfs !=  nullptr && source_interface_vrfs->has_operation());
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/source-interface-table/source-interface-values/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-value";
    ADD_KEY_TOKEN(src_interface_name_value, "src-interface-name-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_interface_name_value.is_set || is_set(src_interface_name_value.yfilter)) leaf_name_data.push_back(src_interface_name_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-vrfs")
    {
        if(source_interface_vrfs == nullptr)
        {
            source_interface_vrfs = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs>();
        }
        return source_interface_vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface_vrfs != nullptr)
    {
        _children["source-interface-vrfs"] = source_interface_vrfs;
    }

    return _children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-interface-name-value")
    {
        src_interface_name_value = value;
        src_interface_name_value.value_namespace = name_space;
        src_interface_name_value.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-interface-name-value")
    {
        src_interface_name_value.yfilter = yfilter;
    }
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface-vrfs" || name == "src-interface-name-value")
        return true;
    return false;
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrfs()
    :
    source_interface_vrf(this, {"vrf_name"})
{

    yang_name = "source-interface-vrfs"; yang_parent_name = "source-interface-value"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::~SourceInterfaceVrfs()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_interface_vrf.len(); index++)
    {
        if(source_interface_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::has_operation() const
{
    for (std::size_t index=0; index<source_interface_vrf.len(); index++)
    {
        if(source_interface_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface-vrf")
    {
        auto ent_ = std::make_shared<Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf>();
        ent_->parent = this;
        source_interface_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source_interface_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface-vrf")
        return true;
    return false;
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::SourceInterfaceVrf()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "source-interface-vrf"; yang_parent_name = "source-interface-vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::~SourceInterfaceVrf()
{
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set;
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface-vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Syslog::SourceInterfaceTable::SourceInterfaceValues::SourceInterfaceValue::SourceInterfaceVrfs::SourceInterfaceVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Syslog::AlarmLogger::AlarmLogger()
    :
    pre_config_suppression{YType::empty, "pre-config-suppression"},
    severity_level{YType::enumeration, "severity-level"},
    pre_config_suppression_timeout{YType::uint32, "pre-config-suppression-timeout"},
    buffer_size{YType::uint32, "buffer-size"},
    source_location{YType::empty, "source-location"},
    threshold{YType::uint32, "threshold"}
        ,
    alarm_filter_strings(std::make_shared<Syslog::AlarmLogger::AlarmFilterStrings>())
{
    alarm_filter_strings->parent = this;

    yang_name = "alarm-logger"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::AlarmLogger::~AlarmLogger()
{
}

bool Syslog::AlarmLogger::has_data() const
{
    if (is_presence_container) return true;
    return pre_config_suppression.is_set
	|| severity_level.is_set
	|| pre_config_suppression_timeout.is_set
	|| buffer_size.is_set
	|| source_location.is_set
	|| threshold.is_set
	|| (alarm_filter_strings !=  nullptr && alarm_filter_strings->has_data());
}

bool Syslog::AlarmLogger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_config_suppression.yfilter)
	|| ydk::is_set(severity_level.yfilter)
	|| ydk::is_set(pre_config_suppression_timeout.yfilter)
	|| ydk::is_set(buffer_size.yfilter)
	|| ydk::is_set(source_location.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (alarm_filter_strings !=  nullptr && alarm_filter_strings->has_operation());
}

std::string Syslog::AlarmLogger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::AlarmLogger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::AlarmLogger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_config_suppression.is_set || is_set(pre_config_suppression.yfilter)) leaf_name_data.push_back(pre_config_suppression.get_name_leafdata());
    if (severity_level.is_set || is_set(severity_level.yfilter)) leaf_name_data.push_back(severity_level.get_name_leafdata());
    if (pre_config_suppression_timeout.is_set || is_set(pre_config_suppression_timeout.yfilter)) leaf_name_data.push_back(pre_config_suppression_timeout.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (source_location.is_set || is_set(source_location.yfilter)) leaf_name_data.push_back(source_location.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::AlarmLogger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-filter-strings")
    {
        if(alarm_filter_strings == nullptr)
        {
            alarm_filter_strings = std::make_shared<Syslog::AlarmLogger::AlarmFilterStrings>();
        }
        return alarm_filter_strings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::AlarmLogger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alarm_filter_strings != nullptr)
    {
        _children["alarm-filter-strings"] = alarm_filter_strings;
    }

    return _children;
}

void Syslog::AlarmLogger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-config-suppression")
    {
        pre_config_suppression = value;
        pre_config_suppression.value_namespace = name_space;
        pre_config_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-level")
    {
        severity_level = value;
        severity_level.value_namespace = name_space;
        severity_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-config-suppression-timeout")
    {
        pre_config_suppression_timeout = value;
        pre_config_suppression_timeout.value_namespace = name_space;
        pre_config_suppression_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-location")
    {
        source_location = value;
        source_location.value_namespace = name_space;
        source_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::AlarmLogger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-config-suppression")
    {
        pre_config_suppression.yfilter = yfilter;
    }
    if(value_path == "severity-level")
    {
        severity_level.yfilter = yfilter;
    }
    if(value_path == "pre-config-suppression-timeout")
    {
        pre_config_suppression_timeout.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
    if(value_path == "source-location")
    {
        source_location.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Syslog::AlarmLogger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-filter-strings" || name == "pre-config-suppression" || name == "severity-level" || name == "pre-config-suppression-timeout" || name == "buffer-size" || name == "source-location" || name == "threshold")
        return true;
    return false;
}

Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterStrings()
    :
    alarm_filter_string(this, {"filter_string"})
{

    yang_name = "alarm-filter-strings"; yang_parent_name = "alarm-logger"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::AlarmLogger::AlarmFilterStrings::~AlarmFilterStrings()
{
}

bool Syslog::AlarmLogger::AlarmFilterStrings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_filter_string.len(); index++)
    {
        if(alarm_filter_string[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::AlarmLogger::AlarmFilterStrings::has_operation() const
{
    for (std::size_t index=0; index<alarm_filter_string.len(); index++)
    {
        if(alarm_filter_string[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::AlarmLogger::AlarmFilterStrings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::AlarmLogger::AlarmFilterStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-filter-strings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::AlarmLogger::AlarmFilterStrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::AlarmLogger::AlarmFilterStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-filter-string")
    {
        auto ent_ = std::make_shared<Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString>();
        ent_->parent = this;
        alarm_filter_string.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::AlarmLogger::AlarmFilterStrings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alarm_filter_string.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::AlarmLogger::AlarmFilterStrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::AlarmLogger::AlarmFilterStrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::AlarmLogger::AlarmFilterStrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-filter-string")
        return true;
    return false;
}

Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::AlarmFilterString()
    :
    filter_string{YType::str, "filter-string"}
{

    yang_name = "alarm-filter-string"; yang_parent_name = "alarm-filter-strings"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::~AlarmFilterString()
{
}

bool Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::has_data() const
{
    if (is_presence_container) return true;
    return filter_string.is_set;
}

bool Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_string.yfilter);
}

std::string Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-alarm-logger-cfg:alarm-logger/alarm-filter-strings/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-filter-string";
    ADD_KEY_TOKEN(filter_string, "filter-string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_string.is_set || is_set(filter_string.yfilter)) leaf_name_data.push_back(filter_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-string")
    {
        filter_string = value;
        filter_string.value_namespace = name_space;
        filter_string.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-string")
    {
        filter_string.yfilter = yfilter;
    }
}

bool Syslog::AlarmLogger::AlarmFilterStrings::AlarmFilterString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-string")
        return true;
    return false;
}

Syslog::Correlator::Correlator()
    :
    buffer_size{YType::uint32, "buffer-size"}
        ,
    rules(std::make_shared<Syslog::Correlator::Rules>())
    , rule_sets(std::make_shared<Syslog::Correlator::RuleSets>())
{
    rules->parent = this;
    rule_sets->parent = this;

    yang_name = "correlator"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Correlator::~Correlator()
{
}

bool Syslog::Correlator::has_data() const
{
    if (is_presence_container) return true;
    return buffer_size.is_set
	|| (rules !=  nullptr && rules->has_data())
	|| (rule_sets !=  nullptr && rule_sets->has_data());
}

bool Syslog::Correlator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffer_size.yfilter)
	|| (rules !=  nullptr && rules->has_operation())
	|| (rule_sets !=  nullptr && rule_sets->has_operation());
}

std::string Syslog::Correlator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-cfg:correlator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Syslog::Correlator::Rules>();
        }
        return rules;
    }

    if(child_yang_name == "rule-sets")
    {
        if(rule_sets == nullptr)
        {
            rule_sets = std::make_shared<Syslog::Correlator::RuleSets>();
        }
        return rule_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rules != nullptr)
    {
        _children["rules"] = rules;
    }

    if(rule_sets != nullptr)
    {
        _children["rule-sets"] = rule_sets;
    }

    return _children;
}

void Syslog::Correlator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Syslog::Correlator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "rule-sets" || name == "buffer-size")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rules()
    :
    rule(this, {"name"})
{

    yang_name = "rules"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Correlator::Rules::~Rules()
{
}

bool Syslog::Correlator::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Correlator::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::Rules::Rule>();
        ent_->parent = this;
        rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::Rule()
    :
    name{YType::str, "name"}
        ,
    definition(std::make_shared<Syslog::Correlator::Rules::Rule::Definition>())
    , non_stateful(std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful>())
    , stateful(std::make_shared<Syslog::Correlator::Rules::Rule::Stateful>())
    , apply_to(std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo>())
    , applied_to(std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo>())
{
    definition->parent = this;
    non_stateful->parent = this;
    stateful->parent = this;
    apply_to->parent = this;
    applied_to->parent = this;

    yang_name = "rule"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Correlator::Rules::Rule::~Rule()
{
}

bool Syslog::Correlator::Rules::Rule::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (definition !=  nullptr && definition->has_data())
	|| (non_stateful !=  nullptr && non_stateful->has_data())
	|| (stateful !=  nullptr && stateful->has_data())
	|| (apply_to !=  nullptr && apply_to->has_data())
	|| (applied_to !=  nullptr && applied_to->has_data());
}

bool Syslog::Correlator::Rules::Rule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (definition !=  nullptr && definition->has_operation())
	|| (non_stateful !=  nullptr && non_stateful->has_operation())
	|| (stateful !=  nullptr && stateful->has_operation())
	|| (apply_to !=  nullptr && apply_to->has_operation())
	|| (applied_to !=  nullptr && applied_to->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Correlator::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "definition")
    {
        if(definition == nullptr)
        {
            definition = std::make_shared<Syslog::Correlator::Rules::Rule::Definition>();
        }
        return definition;
    }

    if(child_yang_name == "non-stateful")
    {
        if(non_stateful == nullptr)
        {
            non_stateful = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful>();
        }
        return non_stateful;
    }

    if(child_yang_name == "stateful")
    {
        if(stateful == nullptr)
        {
            stateful = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful>();
        }
        return stateful;
    }

    if(child_yang_name == "apply-to")
    {
        if(apply_to == nullptr)
        {
            apply_to = std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo>();
        }
        return apply_to;
    }

    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo>();
        }
        return applied_to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(definition != nullptr)
    {
        _children["definition"] = definition;
    }

    if(non_stateful != nullptr)
    {
        _children["non-stateful"] = non_stateful;
    }

    if(stateful != nullptr)
    {
        _children["stateful"] = stateful;
    }

    if(apply_to != nullptr)
    {
        _children["apply-to"] = apply_to;
    }

    if(applied_to != nullptr)
    {
        _children["applied-to"] = applied_to;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "definition" || name == "non-stateful" || name == "stateful" || name == "apply-to" || name == "applied-to" || name == "name")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::Definition::Definition()
    :
    timeout{YType::uint32, "timeout"},
    category_name_entry1{YType::str, "category-name-entry1"},
    group_name_entry1{YType::str, "group-name-entry1"},
    message_code_entry1{YType::str, "message-code-entry1"},
    category_name_entry2{YType::str, "category-name-entry2"},
    group_name_entry2{YType::str, "group-name-entry2"},
    message_code_entry2{YType::str, "message-code-entry2"},
    category_name_entry3{YType::str, "category-name-entry3"},
    group_name_entry3{YType::str, "group-name-entry3"},
    message_code_entry3{YType::str, "message-code-entry3"},
    category_name_entry4{YType::str, "category-name-entry4"},
    group_name_entry4{YType::str, "group-name-entry4"},
    message_code_entry4{YType::str, "message-code-entry4"},
    category_name_entry5{YType::str, "category-name-entry5"},
    group_name_entry5{YType::str, "group-name-entry5"},
    message_code_entry5{YType::str, "message-code-entry5"},
    category_name_entry6{YType::str, "category-name-entry6"},
    group_name_entry6{YType::str, "group-name-entry6"},
    message_code_entry6{YType::str, "message-code-entry6"},
    category_name_entry7{YType::str, "category-name-entry7"},
    group_name_entry7{YType::str, "group-name-entry7"},
    message_code_entry7{YType::str, "message-code-entry7"},
    category_name_entry8{YType::str, "category-name-entry8"},
    group_name_entry8{YType::str, "group-name-entry8"},
    message_code_entry8{YType::str, "message-code-entry8"},
    category_name_entry9{YType::str, "category-name-entry9"},
    group_name_entry9{YType::str, "group-name-entry9"},
    message_code_entry9{YType::str, "message-code-entry9"},
    category_name_entry10{YType::str, "category-name-entry10"},
    group_name_entry10{YType::str, "group-name-entry10"},
    message_code_entry10{YType::str, "message-code-entry10"}
{

    yang_name = "definition"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::Definition::~Definition()
{
}

bool Syslog::Correlator::Rules::Rule::Definition::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| category_name_entry1.is_set
	|| group_name_entry1.is_set
	|| message_code_entry1.is_set
	|| category_name_entry2.is_set
	|| group_name_entry2.is_set
	|| message_code_entry2.is_set
	|| category_name_entry3.is_set
	|| group_name_entry3.is_set
	|| message_code_entry3.is_set
	|| category_name_entry4.is_set
	|| group_name_entry4.is_set
	|| message_code_entry4.is_set
	|| category_name_entry5.is_set
	|| group_name_entry5.is_set
	|| message_code_entry5.is_set
	|| category_name_entry6.is_set
	|| group_name_entry6.is_set
	|| message_code_entry6.is_set
	|| category_name_entry7.is_set
	|| group_name_entry7.is_set
	|| message_code_entry7.is_set
	|| category_name_entry8.is_set
	|| group_name_entry8.is_set
	|| message_code_entry8.is_set
	|| category_name_entry9.is_set
	|| group_name_entry9.is_set
	|| message_code_entry9.is_set
	|| category_name_entry10.is_set
	|| group_name_entry10.is_set
	|| message_code_entry10.is_set;
}

bool Syslog::Correlator::Rules::Rule::Definition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(category_name_entry1.yfilter)
	|| ydk::is_set(group_name_entry1.yfilter)
	|| ydk::is_set(message_code_entry1.yfilter)
	|| ydk::is_set(category_name_entry2.yfilter)
	|| ydk::is_set(group_name_entry2.yfilter)
	|| ydk::is_set(message_code_entry2.yfilter)
	|| ydk::is_set(category_name_entry3.yfilter)
	|| ydk::is_set(group_name_entry3.yfilter)
	|| ydk::is_set(message_code_entry3.yfilter)
	|| ydk::is_set(category_name_entry4.yfilter)
	|| ydk::is_set(group_name_entry4.yfilter)
	|| ydk::is_set(message_code_entry4.yfilter)
	|| ydk::is_set(category_name_entry5.yfilter)
	|| ydk::is_set(group_name_entry5.yfilter)
	|| ydk::is_set(message_code_entry5.yfilter)
	|| ydk::is_set(category_name_entry6.yfilter)
	|| ydk::is_set(group_name_entry6.yfilter)
	|| ydk::is_set(message_code_entry6.yfilter)
	|| ydk::is_set(category_name_entry7.yfilter)
	|| ydk::is_set(group_name_entry7.yfilter)
	|| ydk::is_set(message_code_entry7.yfilter)
	|| ydk::is_set(category_name_entry8.yfilter)
	|| ydk::is_set(group_name_entry8.yfilter)
	|| ydk::is_set(message_code_entry8.yfilter)
	|| ydk::is_set(category_name_entry9.yfilter)
	|| ydk::is_set(group_name_entry9.yfilter)
	|| ydk::is_set(message_code_entry9.yfilter)
	|| ydk::is_set(category_name_entry10.yfilter)
	|| ydk::is_set(group_name_entry10.yfilter)
	|| ydk::is_set(message_code_entry10.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::Definition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (category_name_entry1.is_set || is_set(category_name_entry1.yfilter)) leaf_name_data.push_back(category_name_entry1.get_name_leafdata());
    if (group_name_entry1.is_set || is_set(group_name_entry1.yfilter)) leaf_name_data.push_back(group_name_entry1.get_name_leafdata());
    if (message_code_entry1.is_set || is_set(message_code_entry1.yfilter)) leaf_name_data.push_back(message_code_entry1.get_name_leafdata());
    if (category_name_entry2.is_set || is_set(category_name_entry2.yfilter)) leaf_name_data.push_back(category_name_entry2.get_name_leafdata());
    if (group_name_entry2.is_set || is_set(group_name_entry2.yfilter)) leaf_name_data.push_back(group_name_entry2.get_name_leafdata());
    if (message_code_entry2.is_set || is_set(message_code_entry2.yfilter)) leaf_name_data.push_back(message_code_entry2.get_name_leafdata());
    if (category_name_entry3.is_set || is_set(category_name_entry3.yfilter)) leaf_name_data.push_back(category_name_entry3.get_name_leafdata());
    if (group_name_entry3.is_set || is_set(group_name_entry3.yfilter)) leaf_name_data.push_back(group_name_entry3.get_name_leafdata());
    if (message_code_entry3.is_set || is_set(message_code_entry3.yfilter)) leaf_name_data.push_back(message_code_entry3.get_name_leafdata());
    if (category_name_entry4.is_set || is_set(category_name_entry4.yfilter)) leaf_name_data.push_back(category_name_entry4.get_name_leafdata());
    if (group_name_entry4.is_set || is_set(group_name_entry4.yfilter)) leaf_name_data.push_back(group_name_entry4.get_name_leafdata());
    if (message_code_entry4.is_set || is_set(message_code_entry4.yfilter)) leaf_name_data.push_back(message_code_entry4.get_name_leafdata());
    if (category_name_entry5.is_set || is_set(category_name_entry5.yfilter)) leaf_name_data.push_back(category_name_entry5.get_name_leafdata());
    if (group_name_entry5.is_set || is_set(group_name_entry5.yfilter)) leaf_name_data.push_back(group_name_entry5.get_name_leafdata());
    if (message_code_entry5.is_set || is_set(message_code_entry5.yfilter)) leaf_name_data.push_back(message_code_entry5.get_name_leafdata());
    if (category_name_entry6.is_set || is_set(category_name_entry6.yfilter)) leaf_name_data.push_back(category_name_entry6.get_name_leafdata());
    if (group_name_entry6.is_set || is_set(group_name_entry6.yfilter)) leaf_name_data.push_back(group_name_entry6.get_name_leafdata());
    if (message_code_entry6.is_set || is_set(message_code_entry6.yfilter)) leaf_name_data.push_back(message_code_entry6.get_name_leafdata());
    if (category_name_entry7.is_set || is_set(category_name_entry7.yfilter)) leaf_name_data.push_back(category_name_entry7.get_name_leafdata());
    if (group_name_entry7.is_set || is_set(group_name_entry7.yfilter)) leaf_name_data.push_back(group_name_entry7.get_name_leafdata());
    if (message_code_entry7.is_set || is_set(message_code_entry7.yfilter)) leaf_name_data.push_back(message_code_entry7.get_name_leafdata());
    if (category_name_entry8.is_set || is_set(category_name_entry8.yfilter)) leaf_name_data.push_back(category_name_entry8.get_name_leafdata());
    if (group_name_entry8.is_set || is_set(group_name_entry8.yfilter)) leaf_name_data.push_back(group_name_entry8.get_name_leafdata());
    if (message_code_entry8.is_set || is_set(message_code_entry8.yfilter)) leaf_name_data.push_back(message_code_entry8.get_name_leafdata());
    if (category_name_entry9.is_set || is_set(category_name_entry9.yfilter)) leaf_name_data.push_back(category_name_entry9.get_name_leafdata());
    if (group_name_entry9.is_set || is_set(group_name_entry9.yfilter)) leaf_name_data.push_back(group_name_entry9.get_name_leafdata());
    if (message_code_entry9.is_set || is_set(message_code_entry9.yfilter)) leaf_name_data.push_back(message_code_entry9.get_name_leafdata());
    if (category_name_entry10.is_set || is_set(category_name_entry10.yfilter)) leaf_name_data.push_back(category_name_entry10.get_name_leafdata());
    if (group_name_entry10.is_set || is_set(group_name_entry10.yfilter)) leaf_name_data.push_back(group_name_entry10.get_name_leafdata());
    if (message_code_entry10.is_set || is_set(message_code_entry10.yfilter)) leaf_name_data.push_back(message_code_entry10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::Definition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry1")
    {
        category_name_entry1 = value;
        category_name_entry1.value_namespace = name_space;
        category_name_entry1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry1")
    {
        group_name_entry1 = value;
        group_name_entry1.value_namespace = name_space;
        group_name_entry1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry1")
    {
        message_code_entry1 = value;
        message_code_entry1.value_namespace = name_space;
        message_code_entry1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry2")
    {
        category_name_entry2 = value;
        category_name_entry2.value_namespace = name_space;
        category_name_entry2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry2")
    {
        group_name_entry2 = value;
        group_name_entry2.value_namespace = name_space;
        group_name_entry2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry2")
    {
        message_code_entry2 = value;
        message_code_entry2.value_namespace = name_space;
        message_code_entry2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry3")
    {
        category_name_entry3 = value;
        category_name_entry3.value_namespace = name_space;
        category_name_entry3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry3")
    {
        group_name_entry3 = value;
        group_name_entry3.value_namespace = name_space;
        group_name_entry3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry3")
    {
        message_code_entry3 = value;
        message_code_entry3.value_namespace = name_space;
        message_code_entry3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry4")
    {
        category_name_entry4 = value;
        category_name_entry4.value_namespace = name_space;
        category_name_entry4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry4")
    {
        group_name_entry4 = value;
        group_name_entry4.value_namespace = name_space;
        group_name_entry4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry4")
    {
        message_code_entry4 = value;
        message_code_entry4.value_namespace = name_space;
        message_code_entry4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry5")
    {
        category_name_entry5 = value;
        category_name_entry5.value_namespace = name_space;
        category_name_entry5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry5")
    {
        group_name_entry5 = value;
        group_name_entry5.value_namespace = name_space;
        group_name_entry5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry5")
    {
        message_code_entry5 = value;
        message_code_entry5.value_namespace = name_space;
        message_code_entry5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry6")
    {
        category_name_entry6 = value;
        category_name_entry6.value_namespace = name_space;
        category_name_entry6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry6")
    {
        group_name_entry6 = value;
        group_name_entry6.value_namespace = name_space;
        group_name_entry6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry6")
    {
        message_code_entry6 = value;
        message_code_entry6.value_namespace = name_space;
        message_code_entry6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry7")
    {
        category_name_entry7 = value;
        category_name_entry7.value_namespace = name_space;
        category_name_entry7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry7")
    {
        group_name_entry7 = value;
        group_name_entry7.value_namespace = name_space;
        group_name_entry7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry7")
    {
        message_code_entry7 = value;
        message_code_entry7.value_namespace = name_space;
        message_code_entry7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry8")
    {
        category_name_entry8 = value;
        category_name_entry8.value_namespace = name_space;
        category_name_entry8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry8")
    {
        group_name_entry8 = value;
        group_name_entry8.value_namespace = name_space;
        group_name_entry8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry8")
    {
        message_code_entry8 = value;
        message_code_entry8.value_namespace = name_space;
        message_code_entry8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry9")
    {
        category_name_entry9 = value;
        category_name_entry9.value_namespace = name_space;
        category_name_entry9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry9")
    {
        group_name_entry9 = value;
        group_name_entry9.value_namespace = name_space;
        group_name_entry9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry9")
    {
        message_code_entry9 = value;
        message_code_entry9.value_namespace = name_space;
        message_code_entry9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category-name-entry10")
    {
        category_name_entry10 = value;
        category_name_entry10.value_namespace = name_space;
        category_name_entry10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-entry10")
    {
        group_name_entry10 = value;
        group_name_entry10.value_namespace = name_space;
        group_name_entry10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code-entry10")
    {
        message_code_entry10 = value;
        message_code_entry10.value_namespace = name_space;
        message_code_entry10.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::Definition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "category-name-entry1")
    {
        category_name_entry1.yfilter = yfilter;
    }
    if(value_path == "group-name-entry1")
    {
        group_name_entry1.yfilter = yfilter;
    }
    if(value_path == "message-code-entry1")
    {
        message_code_entry1.yfilter = yfilter;
    }
    if(value_path == "category-name-entry2")
    {
        category_name_entry2.yfilter = yfilter;
    }
    if(value_path == "group-name-entry2")
    {
        group_name_entry2.yfilter = yfilter;
    }
    if(value_path == "message-code-entry2")
    {
        message_code_entry2.yfilter = yfilter;
    }
    if(value_path == "category-name-entry3")
    {
        category_name_entry3.yfilter = yfilter;
    }
    if(value_path == "group-name-entry3")
    {
        group_name_entry3.yfilter = yfilter;
    }
    if(value_path == "message-code-entry3")
    {
        message_code_entry3.yfilter = yfilter;
    }
    if(value_path == "category-name-entry4")
    {
        category_name_entry4.yfilter = yfilter;
    }
    if(value_path == "group-name-entry4")
    {
        group_name_entry4.yfilter = yfilter;
    }
    if(value_path == "message-code-entry4")
    {
        message_code_entry4.yfilter = yfilter;
    }
    if(value_path == "category-name-entry5")
    {
        category_name_entry5.yfilter = yfilter;
    }
    if(value_path == "group-name-entry5")
    {
        group_name_entry5.yfilter = yfilter;
    }
    if(value_path == "message-code-entry5")
    {
        message_code_entry5.yfilter = yfilter;
    }
    if(value_path == "category-name-entry6")
    {
        category_name_entry6.yfilter = yfilter;
    }
    if(value_path == "group-name-entry6")
    {
        group_name_entry6.yfilter = yfilter;
    }
    if(value_path == "message-code-entry6")
    {
        message_code_entry6.yfilter = yfilter;
    }
    if(value_path == "category-name-entry7")
    {
        category_name_entry7.yfilter = yfilter;
    }
    if(value_path == "group-name-entry7")
    {
        group_name_entry7.yfilter = yfilter;
    }
    if(value_path == "message-code-entry7")
    {
        message_code_entry7.yfilter = yfilter;
    }
    if(value_path == "category-name-entry8")
    {
        category_name_entry8.yfilter = yfilter;
    }
    if(value_path == "group-name-entry8")
    {
        group_name_entry8.yfilter = yfilter;
    }
    if(value_path == "message-code-entry8")
    {
        message_code_entry8.yfilter = yfilter;
    }
    if(value_path == "category-name-entry9")
    {
        category_name_entry9.yfilter = yfilter;
    }
    if(value_path == "group-name-entry9")
    {
        group_name_entry9.yfilter = yfilter;
    }
    if(value_path == "message-code-entry9")
    {
        message_code_entry9.yfilter = yfilter;
    }
    if(value_path == "category-name-entry10")
    {
        category_name_entry10.yfilter = yfilter;
    }
    if(value_path == "group-name-entry10")
    {
        group_name_entry10.yfilter = yfilter;
    }
    if(value_path == "message-code-entry10")
    {
        message_code_entry10.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::Definition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "category-name-entry1" || name == "group-name-entry1" || name == "message-code-entry1" || name == "category-name-entry2" || name == "group-name-entry2" || name == "message-code-entry2" || name == "category-name-entry3" || name == "group-name-entry3" || name == "message-code-entry3" || name == "category-name-entry4" || name == "group-name-entry4" || name == "message-code-entry4" || name == "category-name-entry5" || name == "group-name-entry5" || name == "message-code-entry5" || name == "category-name-entry6" || name == "group-name-entry6" || name == "message-code-entry6" || name == "category-name-entry7" || name == "group-name-entry7" || name == "message-code-entry7" || name == "category-name-entry8" || name == "group-name-entry8" || name == "message-code-entry8" || name == "category-name-entry9" || name == "group-name-entry9" || name == "message-code-entry9" || name == "category-name-entry10" || name == "group-name-entry10" || name == "message-code-entry10")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::NonStateful::NonStateful()
    :
    context_correlation{YType::empty, "context-correlation"},
    timeout_root_cause{YType::uint32, "timeout-root-cause"},
    timeout{YType::uint32, "timeout"}
        ,
    non_root_causes(std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses>())
    , root_cause(std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::RootCause>())
{
    non_root_causes->parent = this;
    root_cause->parent = this;

    yang_name = "non-stateful"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::NonStateful::~NonStateful()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::has_data() const
{
    if (is_presence_container) return true;
    return context_correlation.is_set
	|| timeout_root_cause.is_set
	|| timeout.is_set
	|| (non_root_causes !=  nullptr && non_root_causes->has_data())
	|| (root_cause !=  nullptr && root_cause->has_data());
}

bool Syslog::Correlator::Rules::Rule::NonStateful::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_correlation.yfilter)
	|| ydk::is_set(timeout_root_cause.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (non_root_causes !=  nullptr && non_root_causes->has_operation())
	|| (root_cause !=  nullptr && root_cause->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-stateful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::NonStateful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_correlation.is_set || is_set(context_correlation.yfilter)) leaf_name_data.push_back(context_correlation.get_name_leafdata());
    if (timeout_root_cause.is_set || is_set(timeout_root_cause.yfilter)) leaf_name_data.push_back(timeout_root_cause.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::NonStateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-causes")
    {
        if(non_root_causes == nullptr)
        {
            non_root_causes = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses>();
        }
        return non_root_causes;
    }

    if(child_yang_name == "root-cause")
    {
        if(root_cause == nullptr)
        {
            root_cause = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::RootCause>();
        }
        return root_cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::NonStateful::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(non_root_causes != nullptr)
    {
        _children["non-root-causes"] = non_root_causes;
    }

    if(root_cause != nullptr)
    {
        _children["root-cause"] = root_cause;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-correlation")
    {
        context_correlation = value;
        context_correlation.value_namespace = name_space;
        context_correlation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-root-cause")
    {
        timeout_root_cause = value;
        timeout_root_cause.value_namespace = name_space;
        timeout_root_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::NonStateful::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-correlation")
    {
        context_correlation.yfilter = yfilter;
    }
    if(value_path == "timeout-root-cause")
    {
        timeout_root_cause.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::NonStateful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-root-causes" || name == "root-cause" || name == "context-correlation" || name == "timeout-root-cause" || name == "timeout")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCauses()
    :
    non_root_cause(this, {"category", "group", "message_code"})
{

    yang_name = "non-root-causes"; yang_parent_name = "non-stateful"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::~NonRootCauses()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<non_root_cause.len(); index++)
    {
        if(non_root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_operation() const
{
    for (std::size_t index=0; index<non_root_cause.len(); index++)
    {
        if(non_root_cause[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-causes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-cause")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause>();
        ent_->parent = this;
        non_root_cause.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : non_root_cause.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-root-cause")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::NonRootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{

    yang_name = "non-root-cause"; yang_parent_name = "non-root-causes"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::~NonRootCause()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(message_code.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-cause";
    ADD_KEY_TOKEN(category, "category");
    ADD_KEY_TOKEN(group, "group");
    ADD_KEY_TOKEN(message_code, "message-code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.yfilter)) leaf_name_data.push_back(message_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code")
    {
        message_code = value;
        message_code.value_namespace = name_space;
        message_code.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "message-code")
    {
        message_code.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "message-code")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::NonStateful::RootCause::RootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{

    yang_name = "root-cause"; yang_parent_name = "non-stateful"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::NonStateful::RootCause::~RootCause()
{
}

bool Syslog::Correlator::Rules::Rule::NonStateful::RootCause::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::NonStateful::RootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(message_code.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.yfilter)) leaf_name_data.push_back(message_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::NonStateful::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::NonStateful::RootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code")
    {
        message_code = value;
        message_code.value_namespace = name_space;
        message_code.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::NonStateful::RootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "message-code")
    {
        message_code.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::NonStateful::RootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "message-code")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::Stateful::Stateful()
    :
    reparent{YType::empty, "reparent"},
    reissue{YType::empty, "reissue"},
    context_correlation{YType::empty, "context-correlation"},
    timeout_root_cause{YType::uint32, "timeout-root-cause"},
    timeout{YType::uint32, "timeout"}
        ,
    non_root_causes(std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses>())
    , root_cause(std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::RootCause>())
{
    non_root_causes->parent = this;
    root_cause->parent = this;

    yang_name = "stateful"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::Stateful::~Stateful()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::has_data() const
{
    if (is_presence_container) return true;
    return reparent.is_set
	|| reissue.is_set
	|| context_correlation.is_set
	|| timeout_root_cause.is_set
	|| timeout.is_set
	|| (non_root_causes !=  nullptr && non_root_causes->has_data())
	|| (root_cause !=  nullptr && root_cause->has_data());
}

bool Syslog::Correlator::Rules::Rule::Stateful::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reparent.yfilter)
	|| ydk::is_set(reissue.yfilter)
	|| ydk::is_set(context_correlation.yfilter)
	|| ydk::is_set(timeout_root_cause.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (non_root_causes !=  nullptr && non_root_causes->has_operation())
	|| (root_cause !=  nullptr && root_cause->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::Stateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stateful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::Stateful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reparent.is_set || is_set(reparent.yfilter)) leaf_name_data.push_back(reparent.get_name_leafdata());
    if (reissue.is_set || is_set(reissue.yfilter)) leaf_name_data.push_back(reissue.get_name_leafdata());
    if (context_correlation.is_set || is_set(context_correlation.yfilter)) leaf_name_data.push_back(context_correlation.get_name_leafdata());
    if (timeout_root_cause.is_set || is_set(timeout_root_cause.yfilter)) leaf_name_data.push_back(timeout_root_cause.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::Stateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-causes")
    {
        if(non_root_causes == nullptr)
        {
            non_root_causes = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses>();
        }
        return non_root_causes;
    }

    if(child_yang_name == "root-cause")
    {
        if(root_cause == nullptr)
        {
            root_cause = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::RootCause>();
        }
        return root_cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::Stateful::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(non_root_causes != nullptr)
    {
        _children["non-root-causes"] = non_root_causes;
    }

    if(root_cause != nullptr)
    {
        _children["root-cause"] = root_cause;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::Stateful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reparent")
    {
        reparent = value;
        reparent.value_namespace = name_space;
        reparent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reissue")
    {
        reissue = value;
        reissue.value_namespace = name_space;
        reissue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-correlation")
    {
        context_correlation = value;
        context_correlation.value_namespace = name_space;
        context_correlation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-root-cause")
    {
        timeout_root_cause = value;
        timeout_root_cause.value_namespace = name_space;
        timeout_root_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::Stateful::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reparent")
    {
        reparent.yfilter = yfilter;
    }
    if(value_path == "reissue")
    {
        reissue.yfilter = yfilter;
    }
    if(value_path == "context-correlation")
    {
        context_correlation.yfilter = yfilter;
    }
    if(value_path == "timeout-root-cause")
    {
        timeout_root_cause.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::Stateful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-root-causes" || name == "root-cause" || name == "reparent" || name == "reissue" || name == "context-correlation" || name == "timeout-root-cause" || name == "timeout")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCauses()
    :
    non_root_cause(this, {"category", "group", "message_code"})
{

    yang_name = "non-root-causes"; yang_parent_name = "stateful"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::~NonRootCauses()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<non_root_cause.len(); index++)
    {
        if(non_root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::has_operation() const
{
    for (std::size_t index=0; index<non_root_cause.len(); index++)
    {
        if(non_root_cause[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-causes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-cause")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause>();
        ent_->parent = this;
        non_root_cause.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : non_root_cause.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-root-cause")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::NonRootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{

    yang_name = "non-root-cause"; yang_parent_name = "non-root-causes"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::~NonRootCause()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(message_code.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-cause";
    ADD_KEY_TOKEN(category, "category");
    ADD_KEY_TOKEN(group, "group");
    ADD_KEY_TOKEN(message_code, "message-code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.yfilter)) leaf_name_data.push_back(message_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code")
    {
        message_code = value;
        message_code.value_namespace = name_space;
        message_code.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "message-code")
    {
        message_code.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::Stateful::NonRootCauses::NonRootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "message-code")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::Stateful::RootCause::RootCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_code{YType::str, "message-code"}
{

    yang_name = "root-cause"; yang_parent_name = "stateful"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::Stateful::RootCause::~RootCause()
{
}

bool Syslog::Correlator::Rules::Rule::Stateful::RootCause::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| message_code.is_set;
}

bool Syslog::Correlator::Rules::Rule::Stateful::RootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(message_code.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_code.is_set || is_set(message_code.yfilter)) leaf_name_data.push_back(message_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::Stateful::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::Stateful::RootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-code")
    {
        message_code = value;
        message_code.value_namespace = name_space;
        message_code.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::Stateful::RootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "message-code")
    {
        message_code.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::Stateful::RootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "message-code")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::ApplyTo::ApplyTo()
    :
    all_of_router{YType::empty, "all-of-router"}
        ,
    contexts(std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Contexts>())
    , locations(std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Locations>())
{
    contexts->parent = this;
    locations->parent = this;

    yang_name = "apply-to"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::ApplyTo::~ApplyTo()
{
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::has_data() const
{
    if (is_presence_container) return true;
    return all_of_router.is_set
	|| (contexts !=  nullptr && contexts->has_data())
	|| (locations !=  nullptr && locations->has_data());
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_of_router.yfilter)
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (locations !=  nullptr && locations->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::ApplyTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::ApplyTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_of_router.is_set || is_set(all_of_router.yfilter)) leaf_name_data.push_back(all_of_router.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::ApplyTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<Syslog::Correlator::Rules::Rule::ApplyTo::Locations>();
        }
        return locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::ApplyTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(contexts != nullptr)
    {
        _children["contexts"] = contexts;
    }

    if(locations != nullptr)
    {
        _children["locations"] = locations;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::ApplyTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-of-router")
    {
        all_of_router = value;
        all_of_router.value_namespace = name_space;
        all_of_router.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::ApplyTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-of-router")
    {
        all_of_router.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contexts" || name == "locations" || name == "all-of-router")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::Contexts()
    :
    context{YType::str, "context"}
{

    yang_name = "contexts"; yang_parent_name = "apply-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::~Contexts()
{
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

void Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Contexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::ApplyTo::Locations::Locations()
    :
    location{YType::str, "location"}
{

    yang_name = "locations"; yang_parent_name = "apply-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::ApplyTo::Locations::~Locations()
{
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Locations::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Locations::has_operation() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto location_name_datas = location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), location_name_datas.begin(), location_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::ApplyTo::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::ApplyTo::Locations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location.append(value);
    }
}

void Syslog::Correlator::Rules::Rule::ApplyTo::Locations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::ApplyTo::Locations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
        ,
    contexts(std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Contexts>())
    , locations(std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Locations>())
{
    contexts->parent = this;
    locations->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::AppliedTo::~AppliedTo()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (contexts !=  nullptr && contexts->has_data())
	|| (locations !=  nullptr && locations->has_data());
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (locations !=  nullptr && locations->has_operation());
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::AppliedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Locations>();
        }
        return locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(contexts != nullptr)
    {
        _children["contexts"] = contexts;
    }

    if(locations != nullptr)
    {
        _children["locations"] = locations;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::AppliedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contexts" || name == "locations" || name == "all")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Contexts()
    :
    context(this, {"context"})
{

    yang_name = "contexts"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::~Contexts()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::Context()
    :
    context{YType::str, "context"}
{

    yang_name = "context"; yang_parent_name = "contexts"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::~Context()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::has_data() const
{
    if (is_presence_container) return true;
    return context.is_set;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(context, "context");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Contexts::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Locations()
    :
    location(this, {"location"})
{

    yang_name = "locations"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::~Locations()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Locations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Locations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "locations"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::~Location()
{
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Syslog::Correlator::Rules::Rule::AppliedTo::Locations::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSets()
    :
    rule_set(this, {"name"})
{

    yang_name = "rule-sets"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Correlator::RuleSets::~RuleSets()
{
}

bool Syslog::Correlator::RuleSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_set.len(); index++)
    {
        if(rule_set[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::has_operation() const
{
    for (std::size_t index=0; index<rule_set.len(); index++)
    {
        if(rule_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::RuleSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Correlator::RuleSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::RuleSets::RuleSet>();
        ent_->parent = this;
        rule_set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::RuleSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::RuleSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::RuleSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-set")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::RuleSet()
    :
    name{YType::str, "name"}
        ,
    rulenames(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::Rulenames>())
    , applied_to(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo>())
{
    rulenames->parent = this;
    applied_to->parent = this;

    yang_name = "rule-set"; yang_parent_name = "rule-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Correlator::RuleSets::RuleSet::~RuleSet()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (rulenames !=  nullptr && rulenames->has_data())
	|| (applied_to !=  nullptr && applied_to->has_data());
}

bool Syslog::Correlator::RuleSets::RuleSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rulenames !=  nullptr && rulenames->has_operation())
	|| (applied_to !=  nullptr && applied_to->has_operation());
}

std::string Syslog::Correlator::RuleSets::RuleSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:correlator/rule-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Correlator::RuleSets::RuleSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulenames")
    {
        if(rulenames == nullptr)
        {
            rulenames = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::Rulenames>();
        }
        return rulenames;
    }

    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo>();
        }
        return applied_to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rulenames != nullptr)
    {
        _children["rulenames"] = rulenames;
    }

    if(applied_to != nullptr)
    {
        _children["applied-to"] = applied_to;
    }

    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::RuleSets::RuleSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Syslog::Correlator::RuleSets::RuleSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulenames" || name == "applied-to" || name == "name")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulenames()
    :
    rulename(this, {"rulename"})
{

    yang_name = "rulenames"; yang_parent_name = "rule-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::~Rulenames()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulename.len(); index++)
    {
        if(rulename[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::has_operation() const
{
    for (std::size_t index=0; index<rulename.len(); index++)
    {
        if(rulename[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulenames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulename")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename>();
        ent_->parent = this;
        rulename.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::Rulenames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulename.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::Rulenames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::RuleSets::RuleSet::Rulenames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulename")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::Rulename()
    :
    rulename{YType::str, "rulename"}
{

    yang_name = "rulename"; yang_parent_name = "rulenames"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::~Rulename()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_data() const
{
    if (is_presence_container) return true;
    return rulename.is_set;
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rulename.yfilter);
}

std::string Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulename";
    ADD_KEY_TOKEN(rulename, "rulename");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rulename.is_set || is_set(rulename.yfilter)) leaf_name_data.push_back(rulename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rulename")
    {
        rulename = value;
        rulename.value_namespace = name_space;
        rulename.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rulename")
    {
        rulename.yfilter = yfilter;
    }
}

bool Syslog::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulename")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
        ,
    contexts(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts>())
    , locations(std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations>())
{
    contexts->parent = this;
    locations->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::~AppliedTo()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (contexts !=  nullptr && contexts->has_data())
	|| (locations !=  nullptr && locations->has_data());
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (locations !=  nullptr && locations->has_operation());
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations>();
        }
        return locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(contexts != nullptr)
    {
        _children["contexts"] = contexts;
    }

    if(locations != nullptr)
    {
        _children["locations"] = locations;
    }

    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contexts" || name == "locations" || name == "all")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Contexts()
    :
    context(this, {"context"})
{

    yang_name = "contexts"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::~Contexts()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::Context()
    :
    context{YType::str, "context"}
{

    yang_name = "context"; yang_parent_name = "contexts"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::~Context()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::has_data() const
{
    if (is_presence_container) return true;
    return context.is_set;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(context, "context");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Contexts::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Locations()
    :
    location(this, {"location"})
{

    yang_name = "locations"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::~Locations()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "locations"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::~Location()
{
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set;
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Syslog::Correlator::RuleSets::RuleSet::AppliedTo::Locations::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Syslog::Suppression::Suppression()
    :
    rules(std::make_shared<Syslog::Suppression::Rules>())
{
    rules->parent = this;

    yang_name = "suppression"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Suppression::~Suppression()
{
}

bool Syslog::Suppression::has_data() const
{
    if (is_presence_container) return true;
    return (rules !=  nullptr && rules->has_data());
}

bool Syslog::Suppression::has_operation() const
{
    return is_set(yfilter)
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Syslog::Suppression::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Suppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-correlator-cfg:suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Syslog::Suppression::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rules != nullptr)
    {
        _children["rules"] = rules;
    }

    return _children;
}

void Syslog::Suppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Suppression::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Suppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules")
        return true;
    return false;
}

Syslog::Suppression::Rules::Rules()
    :
    rule(this, {"name"})
{

    yang_name = "rules"; yang_parent_name = "suppression"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Suppression::Rules::~Rules()
{
}

bool Syslog::Suppression::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Suppression::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Suppression::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:suppression/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Suppression::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        auto ent_ = std::make_shared<Syslog::Suppression::Rules::Rule>();
        ent_->parent = this;
        rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Suppression::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Suppression::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Suppression::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

Syslog::Suppression::Rules::Rule::Rule()
    :
    name{YType::str, "name"},
    all_alarms{YType::empty, "all-alarms"}
        ,
    applied_to(std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo>())
    , alarm_causes(std::make_shared<Syslog::Suppression::Rules::Rule::AlarmCauses>())
{
    applied_to->parent = this;
    alarm_causes->parent = this;

    yang_name = "rule"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false; 
}

Syslog::Suppression::Rules::Rule::~Rule()
{
}

bool Syslog::Suppression::Rules::Rule::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| all_alarms.is_set
	|| (applied_to !=  nullptr && applied_to->has_data())
	|| (alarm_causes !=  nullptr && alarm_causes->has_data());
}

bool Syslog::Suppression::Rules::Rule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(all_alarms.yfilter)
	|| (applied_to !=  nullptr && applied_to->has_operation())
	|| (alarm_causes !=  nullptr && alarm_causes->has_operation());
}

std::string Syslog::Suppression::Rules::Rule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-cfg:syslog/Cisco-IOS-XR-infra-correlator-cfg:suppression/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Syslog::Suppression::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::Rules::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (all_alarms.is_set || is_set(all_alarms.yfilter)) leaf_name_data.push_back(all_alarms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo>();
        }
        return applied_to;
    }

    if(child_yang_name == "alarm-causes")
    {
        if(alarm_causes == nullptr)
        {
            alarm_causes = std::make_shared<Syslog::Suppression::Rules::Rule::AlarmCauses>();
        }
        return alarm_causes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(applied_to != nullptr)
    {
        _children["applied-to"] = applied_to;
    }

    if(alarm_causes != nullptr)
    {
        _children["alarm-causes"] = alarm_causes;
    }

    return _children;
}

void Syslog::Suppression::Rules::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-alarms")
    {
        all_alarms = value;
        all_alarms.value_namespace = name_space;
        all_alarms.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Suppression::Rules::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "all-alarms")
    {
        all_alarms.yfilter = yfilter;
    }
}

bool Syslog::Suppression::Rules::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applied-to" || name == "alarm-causes" || name == "name" || name == "all-alarms")
        return true;
    return false;
}

Syslog::Suppression::Rules::Rule::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
        ,
    sources(std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo::Sources>())
{
    sources->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Suppression::Rules::Rule::AppliedTo::~AppliedTo()
{
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (sources !=  nullptr && sources->has_data());
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (sources !=  nullptr && sources->has_operation());
}

std::string Syslog::Suppression::Rules::Rule::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::Rules::Rule::AppliedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::Rules::Rule::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sources")
    {
        if(sources == nullptr)
        {
            sources = std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo::Sources>();
        }
        return sources;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::Rules::Rule::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sources != nullptr)
    {
        _children["sources"] = sources;
    }

    return _children;
}

void Syslog::Suppression::Rules::Rule::AppliedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Suppression::Rules::Rule::AppliedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sources" || name == "all")
        return true;
    return false;
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Sources()
    :
    source(this, {"source"})
{

    yang_name = "sources"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::~Sources()
{
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::has_operation() const
{
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        auto ent_ = std::make_shared<Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source>();
        ent_->parent = this;
        source.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Suppression::Rules::Rule::AppliedTo::Sources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Suppression::Rules::Rule::AppliedTo::Sources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::Source()
    :
    source{YType::str, "source"}
{

    yang_name = "source"; yang_parent_name = "sources"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::~Source()
{
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set;
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    ADD_KEY_TOKEN(source, "source");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Syslog::Suppression::Rules::Rule::AppliedTo::Sources::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCauses()
    :
    alarm_cause(this, {"category", "group", "code"})
{

    yang_name = "alarm-causes"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Suppression::Rules::Rule::AlarmCauses::~AlarmCauses()
{
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_cause.len(); index++)
    {
        if(alarm_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::has_operation() const
{
    for (std::size_t index=0; index<alarm_cause.len(); index++)
    {
        if(alarm_cause[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Syslog::Suppression::Rules::Rule::AlarmCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-causes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::Rules::Rule::AlarmCauses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::Rules::Rule::AlarmCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-cause")
    {
        auto ent_ = std::make_shared<Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause>();
        ent_->parent = this;
        alarm_cause.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::Rules::Rule::AlarmCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alarm_cause.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Syslog::Suppression::Rules::Rule::AlarmCauses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Syslog::Suppression::Rules::Rule::AlarmCauses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-cause")
        return true;
    return false;
}

Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::AlarmCause()
    :
    category{YType::str, "category"},
    group{YType::str, "group"},
    code{YType::str, "code"}
{

    yang_name = "alarm-cause"; yang_parent_name = "alarm-causes"; is_top_level_class = false; has_list_ancestor = true; 
}

Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::~AlarmCause()
{
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| group.is_set
	|| code.is_set;
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-cause";
    ADD_KEY_TOKEN(category, "category");
    ADD_KEY_TOKEN(group, "group");
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool Syslog::Suppression::Rules::Rule::AlarmCauses::AlarmCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category" || name == "group" || name == "code")
        return true;
    return false;
}

const Enum::YLeaf LogSeverity::emergency {0, "emergency"};
const Enum::YLeaf LogSeverity::alert {1, "alert"};
const Enum::YLeaf LogSeverity::critical {2, "critical"};
const Enum::YLeaf LogSeverity::error {3, "error"};
const Enum::YLeaf LogSeverity::warning {4, "warning"};
const Enum::YLeaf LogSeverity::notice {5, "notice"};
const Enum::YLeaf LogSeverity::informational {6, "informational"};
const Enum::YLeaf LogSeverity::debug {7, "debug"};

const Enum::YLeaf Facility::kern {0, "kern"};
const Enum::YLeaf Facility::user {8, "user"};
const Enum::YLeaf Facility::mail {16, "mail"};
const Enum::YLeaf Facility::daemon {24, "daemon"};
const Enum::YLeaf Facility::auth {32, "auth"};
const Enum::YLeaf Facility::syslog {40, "syslog"};
const Enum::YLeaf Facility::lpr {48, "lpr"};
const Enum::YLeaf Facility::news {56, "news"};
const Enum::YLeaf Facility::uucp {64, "uucp"};
const Enum::YLeaf Facility::cron {72, "cron"};
const Enum::YLeaf Facility::authpriv {80, "authpriv"};
const Enum::YLeaf Facility::ftp {88, "ftp"};
const Enum::YLeaf Facility::local0 {128, "local0"};
const Enum::YLeaf Facility::local1 {136, "local1"};
const Enum::YLeaf Facility::local2 {144, "local2"};
const Enum::YLeaf Facility::local3 {152, "local3"};
const Enum::YLeaf Facility::local4 {160, "local4"};
const Enum::YLeaf Facility::local5 {168, "local5"};
const Enum::YLeaf Facility::local6 {176, "local6"};
const Enum::YLeaf Facility::local7 {184, "local7"};
const Enum::YLeaf Facility::sys9 {192, "sys9"};
const Enum::YLeaf Facility::sys10 {200, "sys10"};
const Enum::YLeaf Facility::sys11 {208, "sys11"};
const Enum::YLeaf Facility::sys12 {216, "sys12"};
const Enum::YLeaf Facility::sys13 {224, "sys13"};
const Enum::YLeaf Facility::sys14 {232, "sys14"};

const Enum::YLeaf LogCollectFrequency::weekly {1, "weekly"};
const Enum::YLeaf LogCollectFrequency::daily {2, "daily"};

const Enum::YLeaf LoggingPrecedenceValue::routine {0, "routine"};
const Enum::YLeaf LoggingPrecedenceValue::priority {1, "priority"};
const Enum::YLeaf LoggingPrecedenceValue::immediate {2, "immediate"};
const Enum::YLeaf LoggingPrecedenceValue::flash {3, "flash"};
const Enum::YLeaf LoggingPrecedenceValue::flash_override {4, "flash-override"};
const Enum::YLeaf LoggingPrecedenceValue::critical {5, "critical"};
const Enum::YLeaf LoggingPrecedenceValue::internet {6, "internet"};
const Enum::YLeaf LoggingPrecedenceValue::network {7, "network"};

const Enum::YLeaf LoggingTos::precedence {0, "precedence"};
const Enum::YLeaf LoggingTos::dscp {1, "dscp"};

const Enum::YLeaf LoggingLevels::emergency {0, "emergency"};
const Enum::YLeaf LoggingLevels::alert {1, "alert"};
const Enum::YLeaf LoggingLevels::critical {2, "critical"};
const Enum::YLeaf LoggingLevels::error {3, "error"};
const Enum::YLeaf LoggingLevels::warning {4, "warning"};
const Enum::YLeaf LoggingLevels::notice {5, "notice"};
const Enum::YLeaf LoggingLevels::info {6, "info"};
const Enum::YLeaf LoggingLevels::debug {7, "debug"};
const Enum::YLeaf LoggingLevels::disable {15, "disable"};

const Enum::YLeaf LoggingPrecedence::precedence {0, "precedence"};

const Enum::YLeaf LoggingDscpValue::default_ {0, "default"};
const Enum::YLeaf LoggingDscpValue::af11 {10, "af11"};
const Enum::YLeaf LoggingDscpValue::af12 {12, "af12"};
const Enum::YLeaf LoggingDscpValue::af13 {14, "af13"};
const Enum::YLeaf LoggingDscpValue::af21 {18, "af21"};
const Enum::YLeaf LoggingDscpValue::af22 {20, "af22"};
const Enum::YLeaf LoggingDscpValue::af23 {22, "af23"};
const Enum::YLeaf LoggingDscpValue::af31 {26, "af31"};
const Enum::YLeaf LoggingDscpValue::af32 {28, "af32"};
const Enum::YLeaf LoggingDscpValue::af33 {30, "af33"};
const Enum::YLeaf LoggingDscpValue::af41 {34, "af41"};
const Enum::YLeaf LoggingDscpValue::af42 {36, "af42"};
const Enum::YLeaf LoggingDscpValue::af43 {38, "af43"};
const Enum::YLeaf LoggingDscpValue::ef {46, "ef"};
const Enum::YLeaf LoggingDscpValue::cs1 {8, "cs1"};
const Enum::YLeaf LoggingDscpValue::cs2 {16, "cs2"};
const Enum::YLeaf LoggingDscpValue::cs3 {24, "cs3"};
const Enum::YLeaf LoggingDscpValue::cs4 {32, "cs4"};
const Enum::YLeaf LoggingDscpValue::cs5 {40, "cs5"};
const Enum::YLeaf LoggingDscpValue::cs6 {48, "cs6"};
const Enum::YLeaf LoggingDscpValue::cs7 {56, "cs7"};

const Enum::YLeaf LogMessageSeverity::emergency {0, "emergency"};
const Enum::YLeaf LogMessageSeverity::alert {1, "alert"};
const Enum::YLeaf LogMessageSeverity::critical {2, "critical"};
const Enum::YLeaf LogMessageSeverity::error {3, "error"};
const Enum::YLeaf LogMessageSeverity::warning {4, "warning"};
const Enum::YLeaf LogMessageSeverity::notice {5, "notice"};
const Enum::YLeaf LogMessageSeverity::informational {6, "informational"};
const Enum::YLeaf LogMessageSeverity::debug {7, "debug"};

const Enum::YLeaf TimeInfo::disable {0, "disable"};
const Enum::YLeaf TimeInfo::enable {1, "enable"};

const Enum::YLeaf LoggingDscp::dscp {1, "dscp"};


}
}


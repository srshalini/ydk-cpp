
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_1.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::In8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::~In8021qFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::Out8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::~Out8021qFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::Outpkt64octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::~Outpkt64octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytxes()
    :
    macsec_second30secytx(this, {"number"})
{

    yang_name = "macsec-second30secytxes"; yang_parent_name = "macsec-second30"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::~MacsecSecond30secytxes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macsec_second30secytx.len(); index++)
    {
        if(macsec_second30secytx[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secytx.len(); index++)
    {
        if(macsec_second30secytx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secytx")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx>();
        ent_->parent = this;
        macsec_second30secytx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macsec_second30secytx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secytx")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::MacsecSecond30secytx()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"},
    sample_count{YType::uint64, "sample-count"}
        ,
    out_pkts_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected>())
    , out_pkts_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted>())
    , out_octets_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected>())
    , out_octets_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted>())
    , out_pkts_too_long(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong>())
{
    out_pkts_protected->parent = this;
    out_pkts_encrypted->parent = this;
    out_octets_protected->parent = this;
    out_octets_encrypted->parent = this;
    out_pkts_too_long->parent = this;

    yang_name = "macsec-second30secytx"; yang_parent_name = "macsec-second30secytxes"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::~MacsecSecond30secytx()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| sample_count.is_set
	|| (out_pkts_protected !=  nullptr && out_pkts_protected->has_data())
	|| (out_pkts_encrypted !=  nullptr && out_pkts_encrypted->has_data())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_data())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_data())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| (out_pkts_protected !=  nullptr && out_pkts_protected->has_operation())
	|| (out_pkts_encrypted !=  nullptr && out_pkts_encrypted->has_operation())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_operation())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_operation())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secytx";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-pkts-protected")
    {
        if(out_pkts_protected == nullptr)
        {
            out_pkts_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected>();
        }
        return out_pkts_protected;
    }

    if(child_yang_name == "out-pkts-encrypted")
    {
        if(out_pkts_encrypted == nullptr)
        {
            out_pkts_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted>();
        }
        return out_pkts_encrypted;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out_pkts_protected != nullptr)
    {
        _children["out-pkts-protected"] = out_pkts_protected;
    }

    if(out_pkts_encrypted != nullptr)
    {
        _children["out-pkts-encrypted"] = out_pkts_encrypted;
    }

    if(out_octets_protected != nullptr)
    {
        _children["out-octets-protected"] = out_octets_protected;
    }

    if(out_octets_encrypted != nullptr)
    {
        _children["out-octets-encrypted"] = out_octets_encrypted;
    }

    if(out_pkts_too_long != nullptr)
    {
        _children["out-pkts-too-long"] = out_pkts_too_long;
    }

    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-protected" || name == "out-pkts-encrypted" || name == "out-octets-protected" || name == "out-octets-encrypted" || name == "out-pkts-too-long" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support" || name == "sample-count")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::OutPktsProtected()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-protected"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::~OutPktsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::OutPktsEncrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-encrypted"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::~OutPktsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes::MacsecSecond30secytx::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24()
    :
    macsec_hour24_ether_s(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS>())
    , macsec_hour24secyifs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24secyifs>())
    , macsec_hour24secyrxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24secyrxes>())
    , macsec_hour24secytxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24secytxes>())
{
    macsec_hour24_ether_s->parent = this;
    macsec_hour24secyifs->parent = this;
    macsec_hour24secyrxes->parent = this;
    macsec_hour24secytxes->parent = this;

    yang_name = "macsec-hour24"; yang_parent_name = "macsec-current"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::~MacsecHour24()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::has_data() const
{
    if (is_presence_container) return true;
    return (macsec_hour24_ether_s !=  nullptr && macsec_hour24_ether_s->has_data())
	|| (macsec_hour24secyifs !=  nullptr && macsec_hour24secyifs->has_data())
	|| (macsec_hour24secyrxes !=  nullptr && macsec_hour24secyrxes->has_data())
	|| (macsec_hour24secytxes !=  nullptr && macsec_hour24secytxes->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_hour24_ether_s !=  nullptr && macsec_hour24_ether_s->has_operation())
	|| (macsec_hour24secyifs !=  nullptr && macsec_hour24secyifs->has_operation())
	|| (macsec_hour24secyrxes !=  nullptr && macsec_hour24secyrxes->has_operation())
	|| (macsec_hour24secytxes !=  nullptr && macsec_hour24secytxes->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-hour24-ether-s")
    {
        if(macsec_hour24_ether_s == nullptr)
        {
            macsec_hour24_ether_s = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS>();
        }
        return macsec_hour24_ether_s;
    }

    if(child_yang_name == "macsec-hour24secyifs")
    {
        if(macsec_hour24secyifs == nullptr)
        {
            macsec_hour24secyifs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24secyifs>();
        }
        return macsec_hour24secyifs;
    }

    if(child_yang_name == "macsec-hour24secyrxes")
    {
        if(macsec_hour24secyrxes == nullptr)
        {
            macsec_hour24secyrxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24secyrxes>();
        }
        return macsec_hour24secyrxes;
    }

    if(child_yang_name == "macsec-hour24secytxes")
    {
        if(macsec_hour24secytxes == nullptr)
        {
            macsec_hour24secytxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24secytxes>();
        }
        return macsec_hour24secytxes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec_hour24_ether_s != nullptr)
    {
        _children["macsec-hour24-ether-s"] = macsec_hour24_ether_s;
    }

    if(macsec_hour24secyifs != nullptr)
    {
        _children["macsec-hour24secyifs"] = macsec_hour24secyifs;
    }

    if(macsec_hour24secyrxes != nullptr)
    {
        _children["macsec-hour24secyrxes"] = macsec_hour24secyrxes;
    }

    if(macsec_hour24secytxes != nullptr)
    {
        _children["macsec-hour24secytxes"] = macsec_hour24secytxes;
    }

    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-hour24-ether-s" || name == "macsec-hour24secyifs" || name == "macsec-hour24secyrxes" || name == "macsec-hour24secytxes")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24EtherS()
    :
    macsec_hour24_ether(this, {"number"})
{

    yang_name = "macsec-hour24-ether-s"; yang_parent_name = "macsec-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::~MacsecHour24EtherS()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macsec_hour24_ether.len(); index++)
    {
        if(macsec_hour24_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::has_operation() const
{
    for (std::size_t index=0; index<macsec_hour24_ether.len(); index++)
    {
        if(macsec_hour24_ether[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24-ether-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-hour24-ether")
    {
        auto ent_ = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether>();
        ent_->parent = this;
        macsec_hour24_ether.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macsec_hour24_ether.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-hour24-ether")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::MacsecHour24Ether()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
        ,
    rx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt>())
    , stat_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt>())
    , octet_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat>())
    , oversize_pkt_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat>())
    , fcs_errors_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat>())
    , long_frames_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat>())
    , jabber_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat>())
    , ether64_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets>())
    , ether65127_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet>())
    , ether128255_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet>())
    , ether256511_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet>())
    , ether5121023_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet>())
    , ether10241518_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet>())
    , in_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt>())
    , in_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt>())
    , in_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt>())
    , out_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt>())
    , out_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt>())
    , out_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt>())
    , tx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt>())
    , if_in_errors(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors>())
    , if_in_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets>())
    , ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt>())
    , ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt>())
    , ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt>())
    , out_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets>())
    , in_pause_frame(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame>())
    , in_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes>())
    , in8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames>())
    , in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets>())
    , in_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts>())
    , in_drop_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun>())
    , in_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort>())
    , in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan>())
    , in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac>())
    , in_drop_invalid_encap(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap>())
    , in_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther>())
    , in_mib_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant>())
    , in_mib_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber>())
    , in_mibcrc(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc>())
    , in_error_collisions(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions>())
    , in_error_symbol(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol>())
    , out_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes>())
    , out8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames>())
    , out_pause_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames>())
    , out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets>())
    , out_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts>())
    , out_drop_underrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun>())
    , out_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort>())
    , out_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther>())
    , out_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther>())
    , in_error_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant>())
    , in_error_runt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt>())
    , in_error_jabbers(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers>())
    , in_error_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments>())
    , in_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther>())
    , in_pkt64_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet>())
    , in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets>())
    , in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets>())
    , in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets>())
    , in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets>())
    , in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets>())
    , outpkt64octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet>())
    , out_pkts65127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets>())
    , out_pkts128255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets>())
    , out_pkts256511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets>())
    , out_pkts5121023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets>())
    , out_pkts10241518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets>())
    , rx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil>())
    , tx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil>())
    , tx_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt>())
    , tx_oversized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt>())
    , tx_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments>())
    , tx_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber>())
    , tx_bad_fcs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs>())
{
    rx_pkt->parent = this;
    stat_pkt->parent = this;
    octet_stat->parent = this;
    oversize_pkt_stat->parent = this;
    fcs_errors_stat->parent = this;
    long_frames_stat->parent = this;
    jabber_stat->parent = this;
    ether64_octets->parent = this;
    ether65127_octet->parent = this;
    ether128255_octet->parent = this;
    ether256511_octet->parent = this;
    ether5121023_octet->parent = this;
    ether10241518_octet->parent = this;
    in_ucast_pkt->parent = this;
    in_mcast_pkt->parent = this;
    in_bcast_pkt->parent = this;
    out_ucast_pkt->parent = this;
    out_bcast_pkt->parent = this;
    out_mcast_pkt->parent = this;
    tx_pkt->parent = this;
    if_in_errors->parent = this;
    if_in_octets->parent = this;
    ether_stat_multicast_pkt->parent = this;
    ether_stat_broadcast_pkt->parent = this;
    ether_stat_undersized_pkt->parent = this;
    out_octets->parent = this;
    in_pause_frame->parent = this;
    in_good_bytes->parent = this;
    in8021q_frames->parent = this;
    in_pkts1519_max_octets->parent = this;
    in_good_pkts->parent = this;
    in_drop_overrun->parent = this;
    in_drop_abort->parent = this;
    in_drop_invalid_vlan->parent = this;
    in_drop_invalid_dmac->parent = this;
    in_drop_invalid_encap->parent = this;
    in_drop_other->parent = this;
    in_mib_giant->parent = this;
    in_mib_jabber->parent = this;
    in_mibcrc->parent = this;
    in_error_collisions->parent = this;
    in_error_symbol->parent = this;
    out_good_bytes->parent = this;
    out8021q_frames->parent = this;
    out_pause_frames->parent = this;
    out_pkts1519_max_octets->parent = this;
    out_good_pkts->parent = this;
    out_drop_underrun->parent = this;
    out_drop_abort->parent = this;
    out_drop_other->parent = this;
    out_error_other->parent = this;
    in_error_giant->parent = this;
    in_error_runt->parent = this;
    in_error_jabbers->parent = this;
    in_error_fragments->parent = this;
    in_error_other->parent = this;
    in_pkt64_octet->parent = this;
    in_pkts65_to127_octets->parent = this;
    in_pkts128_to255_octets->parent = this;
    in_pkts256_to511_octets->parent = this;
    in_pkts512_to1023_octets->parent = this;
    in_pkts1024_to1518_octets->parent = this;
    outpkt64octet->parent = this;
    out_pkts65127_octets->parent = this;
    out_pkts128255_octets->parent = this;
    out_pkts256511_octets->parent = this;
    out_pkts5121023_octets->parent = this;
    out_pkts10241518_octets->parent = this;
    rx_util->parent = this;
    tx_util->parent = this;
    tx_undersized_pkt->parent = this;
    tx_oversized_pkt->parent = this;
    tx_fragments->parent = this;
    tx_jabber->parent = this;
    tx_bad_fcs->parent = this;

    yang_name = "macsec-hour24-ether"; yang_parent_name = "macsec-hour24-ether-s"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::~MacsecHour24Ether()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-hour24-ether";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil>();
        }
        return tx_util;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rx_pkt != nullptr)
    {
        _children["rx-pkt"] = rx_pkt;
    }

    if(stat_pkt != nullptr)
    {
        _children["stat-pkt"] = stat_pkt;
    }

    if(octet_stat != nullptr)
    {
        _children["octet-stat"] = octet_stat;
    }

    if(oversize_pkt_stat != nullptr)
    {
        _children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(fcs_errors_stat != nullptr)
    {
        _children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(long_frames_stat != nullptr)
    {
        _children["long-frames-stat"] = long_frames_stat;
    }

    if(jabber_stat != nullptr)
    {
        _children["jabber-stat"] = jabber_stat;
    }

    if(ether64_octets != nullptr)
    {
        _children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        _children["ether65127-octet"] = ether65127_octet;
    }

    if(ether128255_octet != nullptr)
    {
        _children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        _children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        _children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether10241518_octet != nullptr)
    {
        _children["ether10241518-octet"] = ether10241518_octet;
    }

    if(in_ucast_pkt != nullptr)
    {
        _children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(in_mcast_pkt != nullptr)
    {
        _children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_bcast_pkt != nullptr)
    {
        _children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(out_ucast_pkt != nullptr)
    {
        _children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(out_bcast_pkt != nullptr)
    {
        _children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_mcast_pkt != nullptr)
    {
        _children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(tx_pkt != nullptr)
    {
        _children["tx-pkt"] = tx_pkt;
    }

    if(if_in_errors != nullptr)
    {
        _children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        _children["if-in-octets"] = if_in_octets;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        _children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        _children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        _children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(out_octets != nullptr)
    {
        _children["out-octets"] = out_octets;
    }

    if(in_pause_frame != nullptr)
    {
        _children["in-pause-frame"] = in_pause_frame;
    }

    if(in_good_bytes != nullptr)
    {
        _children["in-good-bytes"] = in_good_bytes;
    }

    if(in8021q_frames != nullptr)
    {
        _children["in8021q-frames"] = in8021q_frames;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        _children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_good_pkts != nullptr)
    {
        _children["in-good-pkts"] = in_good_pkts;
    }

    if(in_drop_overrun != nullptr)
    {
        _children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_drop_abort != nullptr)
    {
        _children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        _children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        _children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        _children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_other != nullptr)
    {
        _children["in-drop-other"] = in_drop_other;
    }

    if(in_mib_giant != nullptr)
    {
        _children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        _children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        _children["in-mibcrc"] = in_mibcrc;
    }

    if(in_error_collisions != nullptr)
    {
        _children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_symbol != nullptr)
    {
        _children["in-error-symbol"] = in_error_symbol;
    }

    if(out_good_bytes != nullptr)
    {
        _children["out-good-bytes"] = out_good_bytes;
    }

    if(out8021q_frames != nullptr)
    {
        _children["out8021q-frames"] = out8021q_frames;
    }

    if(out_pause_frames != nullptr)
    {
        _children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        _children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_good_pkts != nullptr)
    {
        _children["out-good-pkts"] = out_good_pkts;
    }

    if(out_drop_underrun != nullptr)
    {
        _children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_drop_abort != nullptr)
    {
        _children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        _children["out-drop-other"] = out_drop_other;
    }

    if(out_error_other != nullptr)
    {
        _children["out-error-other"] = out_error_other;
    }

    if(in_error_giant != nullptr)
    {
        _children["in-error-giant"] = in_error_giant;
    }

    if(in_error_runt != nullptr)
    {
        _children["in-error-runt"] = in_error_runt;
    }

    if(in_error_jabbers != nullptr)
    {
        _children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_fragments != nullptr)
    {
        _children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_other != nullptr)
    {
        _children["in-error-other"] = in_error_other;
    }

    if(in_pkt64_octet != nullptr)
    {
        _children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        _children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        _children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        _children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        _children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        _children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(outpkt64octet != nullptr)
    {
        _children["outpkt64octet"] = outpkt64octet;
    }

    if(out_pkts65127_octets != nullptr)
    {
        _children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        _children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        _children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        _children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        _children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(rx_util != nullptr)
    {
        _children["rx-util"] = rx_util;
    }

    if(tx_util != nullptr)
    {
        _children["tx-util"] = tx_util;
    }

    if(tx_undersized_pkt != nullptr)
    {
        _children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_oversized_pkt != nullptr)
    {
        _children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_fragments != nullptr)
    {
        _children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        _children["tx-jabber"] = tx_jabber;
    }

    if(tx_bad_fcs != nullptr)
    {
        _children["tx-bad-fcs"] = tx_bad_fcs;
    }

    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-pkt" || name == "stat-pkt" || name == "octet-stat" || name == "oversize-pkt-stat" || name == "fcs-errors-stat" || name == "long-frames-stat" || name == "jabber-stat" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether10241518-octet" || name == "in-ucast-pkt" || name == "in-mcast-pkt" || name == "in-bcast-pkt" || name == "out-ucast-pkt" || name == "out-bcast-pkt" || name == "out-mcast-pkt" || name == "tx-pkt" || name == "if-in-errors" || name == "if-in-octets" || name == "ether-stat-multicast-pkt" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-undersized-pkt" || name == "out-octets" || name == "in-pause-frame" || name == "in-good-bytes" || name == "in8021q-frames" || name == "in-pkts1519-max-octets" || name == "in-good-pkts" || name == "in-drop-overrun" || name == "in-drop-abort" || name == "in-drop-invalid-vlan" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-other" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-error-collisions" || name == "in-error-symbol" || name == "out-good-bytes" || name == "out8021q-frames" || name == "out-pause-frames" || name == "out-pkts1519-max-octets" || name == "out-good-pkts" || name == "out-drop-underrun" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-error-other" || name == "in-error-giant" || name == "in-error-runt" || name == "in-error-jabbers" || name == "in-error-fragments" || name == "in-error-other" || name == "in-pkt64-octet" || name == "in-pkts65-to127-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts1024-to1518-octets" || name == "outpkt64octet" || name == "out-pkts65127-octets" || name == "out-pkts128255-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts10241518-octets" || name == "rx-util" || name == "tx-util" || name == "tx-undersized-pkt" || name == "tx-oversized-pkt" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-bad-fcs" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear30-sec-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::In8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::~In8021qFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::In8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::Out8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::~Out8021qFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Out8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::Outpkt64octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::~Outpkt64octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::Outpkt64octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "macsec-hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}


}
}


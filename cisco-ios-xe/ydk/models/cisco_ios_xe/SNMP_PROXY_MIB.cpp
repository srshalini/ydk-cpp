
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_PROXY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SNMP_PROXY_MIB {

SNMPPROXYMIB::SNMPPROXYMIB()
    :
    snmpproxytable(std::make_shared<SNMPPROXYMIB::SnmpProxyTable>())
{
    snmpproxytable->parent = this;

    yang_name = "SNMP-PROXY-MIB"; yang_parent_name = "SNMP-PROXY-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SNMPPROXYMIB::~SNMPPROXYMIB()
{
}

bool SNMPPROXYMIB::has_data() const
{
    if (is_presence_container) return true;
    return (snmpproxytable !=  nullptr && snmpproxytable->has_data());
}

bool SNMPPROXYMIB::has_operation() const
{
    return is_set(yfilter)
	|| (snmpproxytable !=  nullptr && snmpproxytable->has_operation());
}

std::string SNMPPROXYMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-PROXY-MIB:SNMP-PROXY-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPPROXYMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPPROXYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpProxyTable")
    {
        if(snmpproxytable == nullptr)
        {
            snmpproxytable = std::make_shared<SNMPPROXYMIB::SnmpProxyTable>();
        }
        return snmpproxytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPPROXYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmpproxytable != nullptr)
    {
        _children["snmpProxyTable"] = snmpproxytable;
    }

    return _children;
}

void SNMPPROXYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPPROXYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPPROXYMIB::clone_ptr() const
{
    return std::make_shared<SNMPPROXYMIB>();
}

std::string SNMPPROXYMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SNMPPROXYMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SNMPPROXYMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPPROXYMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SNMPPROXYMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpProxyTable")
        return true;
    return false;
}

SNMPPROXYMIB::SnmpProxyTable::SnmpProxyTable()
    :
    snmpproxyentry(this, {"snmpproxyname"})
{

    yang_name = "snmpProxyTable"; yang_parent_name = "SNMP-PROXY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPPROXYMIB::SnmpProxyTable::~SnmpProxyTable()
{
}

bool SNMPPROXYMIB::SnmpProxyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmpproxyentry.len(); index++)
    {
        if(snmpproxyentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPPROXYMIB::SnmpProxyTable::has_operation() const
{
    for (std::size_t index=0; index<snmpproxyentry.len(); index++)
    {
        if(snmpproxyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPPROXYMIB::SnmpProxyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-PROXY-MIB:SNMP-PROXY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPPROXYMIB::SnmpProxyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpProxyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPPROXYMIB::SnmpProxyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPPROXYMIB::SnmpProxyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpProxyEntry")
    {
        auto ent_ = std::make_shared<SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry>();
        ent_->parent = this;
        snmpproxyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPPROXYMIB::SnmpProxyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmpproxyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPPROXYMIB::SnmpProxyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPPROXYMIB::SnmpProxyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPPROXYMIB::SnmpProxyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpProxyEntry")
        return true;
    return false;
}

SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::SnmpProxyEntry()
    :
    snmpproxyname{YType::str, "snmpProxyName"},
    snmpproxytype{YType::enumeration, "snmpProxyType"},
    snmpproxycontextengineid{YType::str, "snmpProxyContextEngineID"},
    snmpproxycontextname{YType::str, "snmpProxyContextName"},
    snmpproxytargetparamsin{YType::str, "snmpProxyTargetParamsIn"},
    snmpproxysingletargetout{YType::str, "snmpProxySingleTargetOut"},
    snmpproxymultipletargetout{YType::str, "snmpProxyMultipleTargetOut"},
    snmpproxystoragetype{YType::enumeration, "snmpProxyStorageType"},
    snmpproxyrowstatus{YType::enumeration, "snmpProxyRowStatus"}
{

    yang_name = "snmpProxyEntry"; yang_parent_name = "snmpProxyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::~SnmpProxyEntry()
{
}

bool SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::has_data() const
{
    if (is_presence_container) return true;
    return snmpproxyname.is_set
	|| snmpproxytype.is_set
	|| snmpproxycontextengineid.is_set
	|| snmpproxycontextname.is_set
	|| snmpproxytargetparamsin.is_set
	|| snmpproxysingletargetout.is_set
	|| snmpproxymultipletargetout.is_set
	|| snmpproxystoragetype.is_set
	|| snmpproxyrowstatus.is_set;
}

bool SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpproxyname.yfilter)
	|| ydk::is_set(snmpproxytype.yfilter)
	|| ydk::is_set(snmpproxycontextengineid.yfilter)
	|| ydk::is_set(snmpproxycontextname.yfilter)
	|| ydk::is_set(snmpproxytargetparamsin.yfilter)
	|| ydk::is_set(snmpproxysingletargetout.yfilter)
	|| ydk::is_set(snmpproxymultipletargetout.yfilter)
	|| ydk::is_set(snmpproxystoragetype.yfilter)
	|| ydk::is_set(snmpproxyrowstatus.yfilter);
}

std::string SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-PROXY-MIB:SNMP-PROXY-MIB/snmpProxyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpProxyEntry";
    ADD_KEY_TOKEN(snmpproxyname, "snmpProxyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpproxyname.is_set || is_set(snmpproxyname.yfilter)) leaf_name_data.push_back(snmpproxyname.get_name_leafdata());
    if (snmpproxytype.is_set || is_set(snmpproxytype.yfilter)) leaf_name_data.push_back(snmpproxytype.get_name_leafdata());
    if (snmpproxycontextengineid.is_set || is_set(snmpproxycontextengineid.yfilter)) leaf_name_data.push_back(snmpproxycontextengineid.get_name_leafdata());
    if (snmpproxycontextname.is_set || is_set(snmpproxycontextname.yfilter)) leaf_name_data.push_back(snmpproxycontextname.get_name_leafdata());
    if (snmpproxytargetparamsin.is_set || is_set(snmpproxytargetparamsin.yfilter)) leaf_name_data.push_back(snmpproxytargetparamsin.get_name_leafdata());
    if (snmpproxysingletargetout.is_set || is_set(snmpproxysingletargetout.yfilter)) leaf_name_data.push_back(snmpproxysingletargetout.get_name_leafdata());
    if (snmpproxymultipletargetout.is_set || is_set(snmpproxymultipletargetout.yfilter)) leaf_name_data.push_back(snmpproxymultipletargetout.get_name_leafdata());
    if (snmpproxystoragetype.is_set || is_set(snmpproxystoragetype.yfilter)) leaf_name_data.push_back(snmpproxystoragetype.get_name_leafdata());
    if (snmpproxyrowstatus.is_set || is_set(snmpproxyrowstatus.yfilter)) leaf_name_data.push_back(snmpproxyrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpProxyName")
    {
        snmpproxyname = value;
        snmpproxyname.value_namespace = name_space;
        snmpproxyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyType")
    {
        snmpproxytype = value;
        snmpproxytype.value_namespace = name_space;
        snmpproxytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyContextEngineID")
    {
        snmpproxycontextengineid = value;
        snmpproxycontextengineid.value_namespace = name_space;
        snmpproxycontextengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyContextName")
    {
        snmpproxycontextname = value;
        snmpproxycontextname.value_namespace = name_space;
        snmpproxycontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyTargetParamsIn")
    {
        snmpproxytargetparamsin = value;
        snmpproxytargetparamsin.value_namespace = name_space;
        snmpproxytargetparamsin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxySingleTargetOut")
    {
        snmpproxysingletargetout = value;
        snmpproxysingletargetout.value_namespace = name_space;
        snmpproxysingletargetout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyMultipleTargetOut")
    {
        snmpproxymultipletargetout = value;
        snmpproxymultipletargetout.value_namespace = name_space;
        snmpproxymultipletargetout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyStorageType")
    {
        snmpproxystoragetype = value;
        snmpproxystoragetype.value_namespace = name_space;
        snmpproxystoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyRowStatus")
    {
        snmpproxyrowstatus = value;
        snmpproxyrowstatus.value_namespace = name_space;
        snmpproxyrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpProxyName")
    {
        snmpproxyname.yfilter = yfilter;
    }
    if(value_path == "snmpProxyType")
    {
        snmpproxytype.yfilter = yfilter;
    }
    if(value_path == "snmpProxyContextEngineID")
    {
        snmpproxycontextengineid.yfilter = yfilter;
    }
    if(value_path == "snmpProxyContextName")
    {
        snmpproxycontextname.yfilter = yfilter;
    }
    if(value_path == "snmpProxyTargetParamsIn")
    {
        snmpproxytargetparamsin.yfilter = yfilter;
    }
    if(value_path == "snmpProxySingleTargetOut")
    {
        snmpproxysingletargetout.yfilter = yfilter;
    }
    if(value_path == "snmpProxyMultipleTargetOut")
    {
        snmpproxymultipletargetout.yfilter = yfilter;
    }
    if(value_path == "snmpProxyStorageType")
    {
        snmpproxystoragetype.yfilter = yfilter;
    }
    if(value_path == "snmpProxyRowStatus")
    {
        snmpproxyrowstatus.yfilter = yfilter;
    }
}

bool SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpProxyName" || name == "snmpProxyType" || name == "snmpProxyContextEngineID" || name == "snmpProxyContextName" || name == "snmpProxyTargetParamsIn" || name == "snmpProxySingleTargetOut" || name == "snmpProxyMultipleTargetOut" || name == "snmpProxyStorageType" || name == "snmpProxyRowStatus")
        return true;
    return false;
}

const Enum::YLeaf SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::SnmpProxyType::read {1, "read"};
const Enum::YLeaf SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::SnmpProxyType::write {2, "write"};
const Enum::YLeaf SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::SnmpProxyType::trap {3, "trap"};
const Enum::YLeaf SNMPPROXYMIB::SnmpProxyTable::SnmpProxyEntry::SnmpProxyType::inform {4, "inform"};


}
}



#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_OSPF_TRAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_OSPF_TRAP_MIB {

CISCOOSPFTRAPMIB::CISCOOSPFTRAPMIB()
    :
    cospftrapcontrol(std::make_shared<CISCOOSPFTRAPMIB::CospfTrapControl>())
{
    cospftrapcontrol->parent = this;

    yang_name = "CISCO-OSPF-TRAP-MIB"; yang_parent_name = "CISCO-OSPF-TRAP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOOSPFTRAPMIB::~CISCOOSPFTRAPMIB()
{
}

bool CISCOOSPFTRAPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cospftrapcontrol !=  nullptr && cospftrapcontrol->has_data());
}

bool CISCOOSPFTRAPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cospftrapcontrol !=  nullptr && cospftrapcontrol->has_operation());
}

std::string CISCOOSPFTRAPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-TRAP-MIB:CISCO-OSPF-TRAP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFTRAPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFTRAPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfTrapControl")
    {
        if(cospftrapcontrol == nullptr)
        {
            cospftrapcontrol = std::make_shared<CISCOOSPFTRAPMIB::CospfTrapControl>();
        }
        return cospftrapcontrol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFTRAPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cospftrapcontrol != nullptr)
    {
        _children["cospfTrapControl"] = cospftrapcontrol;
    }

    return _children;
}

void CISCOOSPFTRAPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFTRAPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOOSPFTRAPMIB::clone_ptr() const
{
    return std::make_shared<CISCOOSPFTRAPMIB>();
}

std::string CISCOOSPFTRAPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOOSPFTRAPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOOSPFTRAPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOOSPFTRAPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOOSPFTRAPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfTrapControl")
        return true;
    return false;
}

CISCOOSPFTRAPMIB::CospfTrapControl::CospfTrapControl()
    :
    cospfsettrap{YType::bits, "cospfSetTrap"},
    cospfconfigerrortype{YType::enumeration, "cospfConfigErrorType"},
    cospfpackettype{YType::enumeration, "cospfPacketType"},
    cospfpacketsrc{YType::str, "cospfPacketSrc"}
{

    yang_name = "cospfTrapControl"; yang_parent_name = "CISCO-OSPF-TRAP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFTRAPMIB::CospfTrapControl::~CospfTrapControl()
{
}

bool CISCOOSPFTRAPMIB::CospfTrapControl::has_data() const
{
    if (is_presence_container) return true;
    return cospfsettrap.is_set
	|| cospfconfigerrortype.is_set
	|| cospfpackettype.is_set
	|| cospfpacketsrc.is_set;
}

bool CISCOOSPFTRAPMIB::CospfTrapControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospfsettrap.yfilter)
	|| ydk::is_set(cospfconfigerrortype.yfilter)
	|| ydk::is_set(cospfpackettype.yfilter)
	|| ydk::is_set(cospfpacketsrc.yfilter);
}

std::string CISCOOSPFTRAPMIB::CospfTrapControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-TRAP-MIB:CISCO-OSPF-TRAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFTRAPMIB::CospfTrapControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfTrapControl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFTRAPMIB::CospfTrapControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfsettrap.is_set || is_set(cospfsettrap.yfilter)) leaf_name_data.push_back(cospfsettrap.get_name_leafdata());
    if (cospfconfigerrortype.is_set || is_set(cospfconfigerrortype.yfilter)) leaf_name_data.push_back(cospfconfigerrortype.get_name_leafdata());
    if (cospfpackettype.is_set || is_set(cospfpackettype.yfilter)) leaf_name_data.push_back(cospfpackettype.get_name_leafdata());
    if (cospfpacketsrc.is_set || is_set(cospfpacketsrc.yfilter)) leaf_name_data.push_back(cospfpacketsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFTRAPMIB::CospfTrapControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFTRAPMIB::CospfTrapControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFTRAPMIB::CospfTrapControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfSetTrap")
    {
        cospfsettrap[value] = true;
    }
    if(value_path == "cospfConfigErrorType")
    {
        cospfconfigerrortype = value;
        cospfconfigerrortype.value_namespace = name_space;
        cospfconfigerrortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfPacketType")
    {
        cospfpackettype = value;
        cospfpackettype.value_namespace = name_space;
        cospfpackettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfPacketSrc")
    {
        cospfpacketsrc = value;
        cospfpacketsrc.value_namespace = name_space;
        cospfpacketsrc.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFTRAPMIB::CospfTrapControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfSetTrap")
    {
        cospfsettrap.yfilter = yfilter;
    }
    if(value_path == "cospfConfigErrorType")
    {
        cospfconfigerrortype.yfilter = yfilter;
    }
    if(value_path == "cospfPacketType")
    {
        cospfpackettype.yfilter = yfilter;
    }
    if(value_path == "cospfPacketSrc")
    {
        cospfpacketsrc.yfilter = yfilter;
    }
}

bool CISCOOSPFTRAPMIB::CospfTrapControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfSetTrap" || name == "cospfConfigErrorType" || name == "cospfPacketType" || name == "cospfPacketSrc")
        return true;
    return false;
}

const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::badVersion {1, "badVersion"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::areaMismatch {2, "areaMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::unknownNbmaNbr {3, "unknownNbmaNbr"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::unknownVirtualNbr {4, "unknownVirtualNbr"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::authTypeMismatch {5, "authTypeMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::authFailure {6, "authFailure"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::netMaskMismatch {7, "netMaskMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::helloIntervalMismatch {8, "helloIntervalMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::deadIntervalMismatch {9, "deadIntervalMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::optionMismatch {10, "optionMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::mtuMismatch {11, "mtuMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::noError {12, "noError"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfConfigErrorType::unknownShamLinkNbr {13, "unknownShamLinkNbr"};

const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfPacketType::hello {1, "hello"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfPacketType::dbDescript {2, "dbDescript"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfPacketType::lsReq {3, "lsReq"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfPacketType::lsUpdate {4, "lsUpdate"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfPacketType::lsAck {5, "lsAck"};
const Enum::YLeaf CISCOOSPFTRAPMIB::CospfTrapControl::CospfPacketType::nullPacket {6, "nullPacket"};


}
}


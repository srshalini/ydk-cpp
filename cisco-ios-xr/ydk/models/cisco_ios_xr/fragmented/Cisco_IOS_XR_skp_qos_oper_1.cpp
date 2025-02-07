
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_skp_qos_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_skp_qos_oper {

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    node_config{YType::str, "node-config"}
        ,
    police(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
    , shape(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
    , wfq(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    shape->parent = this;
    wfq->parent = this;

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    if (is_presence_container) return true;
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_config.yfilter)
	|| (police !=  nullptr && police->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_config.is_set || is_set(node_config.yfilter)) leaf_name_data.push_back(node_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
        }
        return police;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
        }
        return wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(police != nullptr)
    {
        _children["police"] = police;
    }

    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        _children["wfq"] = wfq;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-config")
    {
        node_config = value;
        node_config.value_namespace = name_space;
        node_config.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-config")
    {
        node_config.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police" || name == "shape" || name == "wfq" || name == "node-config")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    color_aware{YType::boolean, "color-aware"},
    policer_type{YType::enumeration, "policer-type"}
        ,
    cir(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
    , cbs(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    if (is_presence_container) return true;
    return color_aware.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color_aware.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color_aware.is_set || is_set(color_aware.yfilter)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cir != nullptr)
    {
        _children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        _children["cbs"] = cbs;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
        color_aware.value_namespace = name_space;
        color_aware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color-aware")
    {
        color_aware.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "color-aware" || name == "policer-type")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pir(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
    , pbs(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    if (is_presence_container) return true;
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pir != nullptr)
    {
        _children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        _children["pbs"] = pbs;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
        ,
    bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
    , sum_of_bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "wfq"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    if (is_presence_container) return true;
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        _children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    stats_id{YType::uint32, "stats-id"}
        ,
    queue(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
    , police(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
{
    queue->parent = this;
    police->parent = this;

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    if (is_presence_container) return true;
    return stats_id.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (police !=  nullptr && police->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stats_id.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (police !=  nullptr && police->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stats_id.is_set || is_set(stats_id.yfilter)) leaf_name_data.push_back(stats_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    if(police != nullptr)
    {
        _children["police"] = police;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
        stats_id.value_namespace = name_space;
        stats_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stats-id")
    {
        stats_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "police" || name == "stats-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    commit_tx{YType::uint32, "commit-tx"},
    excess_tx{YType::uint32, "excess-tx"},
    drop{YType::uint32, "drop"}
{

    yang_name = "queue"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    if (is_presence_container) return true;
    return queue_id.is_set
	|| commit_tx.is_set
	|| excess_tx.is_set
	|| drop.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(commit_tx.yfilter)
	|| ydk::is_set(excess_tx.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (commit_tx.is_set || is_set(commit_tx.yfilter)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.yfilter)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commit-tx")
    {
        commit_tx = value;
        commit_tx.value_namespace = name_space;
        commit_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
        excess_tx.value_namespace = name_space;
        excess_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "commit-tx")
    {
        commit_tx.yfilter = yfilter;
    }
    if(value_path == "excess-tx")
    {
        excess_tx.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "commit-tx" || name == "excess-tx" || name == "drop")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    token_bucket_id{YType::uint32, "token-bucket-id"},
    conform{YType::uint32, "conform"},
    exceed{YType::uint32, "exceed"},
    violate{YType::uint32, "violate"}
{

    yang_name = "police"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    if (is_presence_container) return true;
    return token_bucket_id.is_set
	|| conform.is_set
	|| exceed.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(token_bucket_id.yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter)
	|| ydk::is_set(violate.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (token_bucket_id.is_set || is_set(token_bucket_id.yfilter)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (violate.is_set || is_set(violate.yfilter)) leaf_name_data.push_back(violate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
        token_bucket_id.value_namespace = name_space;
        token_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate")
    {
        violate = value;
        violate.value_namespace = name_space;
        violate.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id.yfilter = yfilter;
    }
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
    if(value_path == "violate")
    {
        violate.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "token-bucket-id" || name == "conform" || name == "exceed" || name == "violate")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::get_children() const
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

void PlatformQosEa::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    output(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output>())
    , input(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input" || name == "interface-name")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Output()
    :
    details(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details>())
{
    details->parent = this;

    yang_name = "output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::~Output()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(details != nullptr)
    {
        _children["details"] = details;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Details()
    :
    header(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header>())
    , interface_parameters(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters>())
    , skywarp_qos_policy_class(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "details"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        _children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        _children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::InterfaceParameters()
    :
    policy_name{YType::str, "policy-name"},
    hierarchical_depth{YType::uint8, "hierarchical-depth"},
    interface_type{YType::str, "interface-type"},
    interface_rate{YType::uint32, "interface-rate"},
    port_shaper_rate{YType::uint32, "port-shaper-rate"},
    interface_handle{YType::str, "interface-handle"},
    under_line_interface_handle{YType::str, "under-line-interface-handle"},
    bundle_id{YType::uint16, "bundle-id"},
    uidb_index{YType::uint16, "uidb-index"},
    qos_interface_handle{YType::uint64, "qos-interface-handle"},
    port{YType::uint32, "port"},
    policy_map_id{YType::uint16, "policy-map-id"}
{

    yang_name = "interface-parameters"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| hierarchical_depth.is_set
	|| interface_type.is_set
	|| interface_rate.is_set
	|| port_shaper_rate.is_set
	|| interface_handle.is_set
	|| under_line_interface_handle.is_set
	|| bundle_id.is_set
	|| uidb_index.is_set
	|| qos_interface_handle.is_set
	|| port.is_set
	|| policy_map_id.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(hierarchical_depth.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(interface_rate.yfilter)
	|| ydk::is_set(port_shaper_rate.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(under_line_interface_handle.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(uidb_index.yfilter)
	|| ydk::is_set(qos_interface_handle.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(policy_map_id.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.yfilter)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.yfilter)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.yfilter)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.yfilter)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.yfilter)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.yfilter)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.yfilter)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
        hierarchical_depth.value_namespace = name_space;
        hierarchical_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
        interface_rate.value_namespace = name_space;
        interface_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
        port_shaper_rate.value_namespace = name_space;
        port_shaper_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
        under_line_interface_handle.value_namespace = name_space;
        under_line_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
        uidb_index.value_namespace = name_space;
        uidb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
        qos_interface_handle.value_namespace = name_space;
        qos_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
        policy_map_id.value_namespace = name_space;
        policy_map_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "interface-rate")
    {
        interface_rate.yfilter = yfilter;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle.yfilter = yfilter;
    }
    if(value_path == "bundle-id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "uidb-index")
    {
        uidb_index.yfilter = yfilter;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "hierarchical-depth" || name == "interface-type" || name == "interface-rate" || name == "port-shaper-rate" || name == "interface-handle" || name == "under-line-interface-handle" || name == "bundle-id" || name == "uidb-index" || name == "qos-interface-handle" || name == "port" || name == "policy-map-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
    :
    qos_show_ea_pclass_st(this, {})
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qos_show_ea_pclass_st.len(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.len(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        auto ent_ = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        ent_->parent = this;
        qos_show_ea_pclass_st.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qos_show_ea_pclass_st.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-ea-pclass-st")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    index_{YType::uint16, "index"},
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    policy_name{YType::str, "policy-name"},
    node_flags{YType::str, "node-flags"},
    stats_flags{YType::str, "stats-flags"}
        ,
    config(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
    , result(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    result->parent = this;

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| class_level.is_set
	|| class_name.is_set
	|| policy_name.is_set
	|| node_flags.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(node_flags.yfilter)
	|| ydk::is_set(stats_flags.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (result !=  nullptr && result->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.yfilter)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.yfilter)) leaf_name_data.push_back(stats_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
        }
        return config;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
        }
        return result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(result != nullptr)
    {
        _children["result"] = result;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
        node_flags.value_namespace = name_space;
        node_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
        stats_flags.value_namespace = name_space;
        stats_flags.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "node-flags")
    {
        node_flags.yfilter = yfilter;
    }
    if(value_path == "stats-flags")
    {
        stats_flags.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "result" || name == "index" || name == "class-level" || name == "class-name" || name == "policy-name" || name == "node-flags" || name == "stats-flags")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    node_config{YType::str, "node-config"}
        ,
    police(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
    , shape(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
    , wfq(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    shape->parent = this;
    wfq->parent = this;

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    if (is_presence_container) return true;
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_config.yfilter)
	|| (police !=  nullptr && police->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_config.is_set || is_set(node_config.yfilter)) leaf_name_data.push_back(node_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
        }
        return police;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
        }
        return wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(police != nullptr)
    {
        _children["police"] = police;
    }

    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        _children["wfq"] = wfq;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-config")
    {
        node_config = value;
        node_config.value_namespace = name_space;
        node_config.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-config")
    {
        node_config.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police" || name == "shape" || name == "wfq" || name == "node-config")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    color_aware{YType::boolean, "color-aware"},
    policer_type{YType::enumeration, "policer-type"}
        ,
    cir(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
    , cbs(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    if (is_presence_container) return true;
    return color_aware.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color_aware.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color_aware.is_set || is_set(color_aware.yfilter)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cir != nullptr)
    {
        _children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        _children["cbs"] = cbs;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
        color_aware.value_namespace = name_space;
        color_aware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color-aware")
    {
        color_aware.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "color-aware" || name == "policer-type")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pir(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
    , pbs(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    if (is_presence_container) return true;
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pir != nullptr)
    {
        _children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        _children["pbs"] = pbs;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
        ,
    bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
    , sum_of_bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "wfq"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    if (is_presence_container) return true;
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        _children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    stats_id{YType::uint32, "stats-id"}
        ,
    queue(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
    , police(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
{
    queue->parent = this;
    police->parent = this;

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    if (is_presence_container) return true;
    return stats_id.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (police !=  nullptr && police->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stats_id.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (police !=  nullptr && police->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stats_id.is_set || is_set(stats_id.yfilter)) leaf_name_data.push_back(stats_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    if(police != nullptr)
    {
        _children["police"] = police;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
        stats_id.value_namespace = name_space;
        stats_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stats-id")
    {
        stats_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "police" || name == "stats-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    commit_tx{YType::uint32, "commit-tx"},
    excess_tx{YType::uint32, "excess-tx"},
    drop{YType::uint32, "drop"}
{

    yang_name = "queue"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    if (is_presence_container) return true;
    return queue_id.is_set
	|| commit_tx.is_set
	|| excess_tx.is_set
	|| drop.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(commit_tx.yfilter)
	|| ydk::is_set(excess_tx.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (commit_tx.is_set || is_set(commit_tx.yfilter)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.yfilter)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commit-tx")
    {
        commit_tx = value;
        commit_tx.value_namespace = name_space;
        commit_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
        excess_tx.value_namespace = name_space;
        excess_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "commit-tx")
    {
        commit_tx.yfilter = yfilter;
    }
    if(value_path == "excess-tx")
    {
        excess_tx.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "commit-tx" || name == "excess-tx" || name == "drop")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    token_bucket_id{YType::uint32, "token-bucket-id"},
    conform{YType::uint32, "conform"},
    exceed{YType::uint32, "exceed"},
    violate{YType::uint32, "violate"}
{

    yang_name = "police"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    if (is_presence_container) return true;
    return token_bucket_id.is_set
	|| conform.is_set
	|| exceed.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(token_bucket_id.yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter)
	|| ydk::is_set(violate.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (token_bucket_id.is_set || is_set(token_bucket_id.yfilter)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (violate.is_set || is_set(violate.yfilter)) leaf_name_data.push_back(violate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
        token_bucket_id.value_namespace = name_space;
        token_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate")
    {
        violate = value;
        violate.value_namespace = name_space;
        violate.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id.yfilter = yfilter;
    }
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
    if(value_path == "violate")
    {
        violate.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "token-bucket-id" || name == "conform" || name == "exceed" || name == "violate")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Input()
    :
    details(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details>())
{
    details->parent = this;

    yang_name = "input"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::~Input()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(details != nullptr)
    {
        _children["details"] = details;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Details()
    :
    header(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header>())
    , interface_parameters(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters>())
    , skywarp_qos_policy_class(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "details"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        _children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        _children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::InterfaceParameters()
    :
    policy_name{YType::str, "policy-name"},
    hierarchical_depth{YType::uint8, "hierarchical-depth"},
    interface_type{YType::str, "interface-type"},
    interface_rate{YType::uint32, "interface-rate"},
    port_shaper_rate{YType::uint32, "port-shaper-rate"},
    interface_handle{YType::str, "interface-handle"},
    under_line_interface_handle{YType::str, "under-line-interface-handle"},
    bundle_id{YType::uint16, "bundle-id"},
    uidb_index{YType::uint16, "uidb-index"},
    qos_interface_handle{YType::uint64, "qos-interface-handle"},
    port{YType::uint32, "port"},
    policy_map_id{YType::uint16, "policy-map-id"}
{

    yang_name = "interface-parameters"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| hierarchical_depth.is_set
	|| interface_type.is_set
	|| interface_rate.is_set
	|| port_shaper_rate.is_set
	|| interface_handle.is_set
	|| under_line_interface_handle.is_set
	|| bundle_id.is_set
	|| uidb_index.is_set
	|| qos_interface_handle.is_set
	|| port.is_set
	|| policy_map_id.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(hierarchical_depth.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(interface_rate.yfilter)
	|| ydk::is_set(port_shaper_rate.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(under_line_interface_handle.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(uidb_index.yfilter)
	|| ydk::is_set(qos_interface_handle.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(policy_map_id.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.yfilter)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.yfilter)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.yfilter)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.yfilter)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.yfilter)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.yfilter)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.yfilter)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
        hierarchical_depth.value_namespace = name_space;
        hierarchical_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
        interface_rate.value_namespace = name_space;
        interface_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
        port_shaper_rate.value_namespace = name_space;
        port_shaper_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
        under_line_interface_handle.value_namespace = name_space;
        under_line_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
        uidb_index.value_namespace = name_space;
        uidb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
        qos_interface_handle.value_namespace = name_space;
        qos_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
        policy_map_id.value_namespace = name_space;
        policy_map_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "interface-rate")
    {
        interface_rate.yfilter = yfilter;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle.yfilter = yfilter;
    }
    if(value_path == "bundle-id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "uidb-index")
    {
        uidb_index.yfilter = yfilter;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "hierarchical-depth" || name == "interface-type" || name == "interface-rate" || name == "port-shaper-rate" || name == "interface-handle" || name == "under-line-interface-handle" || name == "bundle-id" || name == "uidb-index" || name == "qos-interface-handle" || name == "port" || name == "policy-map-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
    :
    qos_show_ea_pclass_st(this, {})
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qos_show_ea_pclass_st.len(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.len(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        auto ent_ = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        ent_->parent = this;
        qos_show_ea_pclass_st.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qos_show_ea_pclass_st.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-ea-pclass-st")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    index_{YType::uint16, "index"},
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    policy_name{YType::str, "policy-name"},
    node_flags{YType::str, "node-flags"},
    stats_flags{YType::str, "stats-flags"}
        ,
    config(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
    , result(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    result->parent = this;

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| class_level.is_set
	|| class_name.is_set
	|| policy_name.is_set
	|| node_flags.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(node_flags.yfilter)
	|| ydk::is_set(stats_flags.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (result !=  nullptr && result->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.yfilter)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.yfilter)) leaf_name_data.push_back(stats_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
        }
        return config;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
        }
        return result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(result != nullptr)
    {
        _children["result"] = result;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
        node_flags.value_namespace = name_space;
        node_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
        stats_flags.value_namespace = name_space;
        stats_flags.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "node-flags")
    {
        node_flags.yfilter = yfilter;
    }
    if(value_path == "stats-flags")
    {
        stats_flags.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "result" || name == "index" || name == "class-level" || name == "class-name" || name == "policy-name" || name == "node-flags" || name == "stats-flags")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    node_config{YType::str, "node-config"}
        ,
    police(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
    , shape(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
    , wfq(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    shape->parent = this;
    wfq->parent = this;

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    if (is_presence_container) return true;
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_config.yfilter)
	|| (police !=  nullptr && police->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_config.is_set || is_set(node_config.yfilter)) leaf_name_data.push_back(node_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
        }
        return police;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
        }
        return wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(police != nullptr)
    {
        _children["police"] = police;
    }

    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        _children["wfq"] = wfq;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-config")
    {
        node_config = value;
        node_config.value_namespace = name_space;
        node_config.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-config")
    {
        node_config.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police" || name == "shape" || name == "wfq" || name == "node-config")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    color_aware{YType::boolean, "color-aware"},
    policer_type{YType::enumeration, "policer-type"}
        ,
    cir(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
    , cbs(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    if (is_presence_container) return true;
    return color_aware.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color_aware.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color_aware.is_set || is_set(color_aware.yfilter)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cir != nullptr)
    {
        _children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        _children["cbs"] = cbs;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
        color_aware.value_namespace = name_space;
        color_aware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color-aware")
    {
        color_aware.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "color-aware" || name == "policer-type")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pir(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
    , pbs(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    if (is_presence_container) return true;
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pir != nullptr)
    {
        _children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        _children["pbs"] = pbs;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
        ,
    bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
    , sum_of_bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "wfq"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    if (is_presence_container) return true;
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        _children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    stats_id{YType::uint32, "stats-id"}
        ,
    queue(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
    , police(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
{
    queue->parent = this;
    police->parent = this;

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    if (is_presence_container) return true;
    return stats_id.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (police !=  nullptr && police->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stats_id.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (police !=  nullptr && police->has_operation());
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stats_id.is_set || is_set(stats_id.yfilter)) leaf_name_data.push_back(stats_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    if(police != nullptr)
    {
        _children["police"] = police;
    }

    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
        stats_id.value_namespace = name_space;
        stats_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stats-id")
    {
        stats_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "police" || name == "stats-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    commit_tx{YType::uint32, "commit-tx"},
    excess_tx{YType::uint32, "excess-tx"},
    drop{YType::uint32, "drop"}
{

    yang_name = "queue"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    if (is_presence_container) return true;
    return queue_id.is_set
	|| commit_tx.is_set
	|| excess_tx.is_set
	|| drop.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(commit_tx.yfilter)
	|| ydk::is_set(excess_tx.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (commit_tx.is_set || is_set(commit_tx.yfilter)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.yfilter)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commit-tx")
    {
        commit_tx = value;
        commit_tx.value_namespace = name_space;
        commit_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
        excess_tx.value_namespace = name_space;
        excess_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "commit-tx")
    {
        commit_tx.yfilter = yfilter;
    }
    if(value_path == "excess-tx")
    {
        excess_tx.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "commit-tx" || name == "excess-tx" || name == "drop")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    token_bucket_id{YType::uint32, "token-bucket-id"},
    conform{YType::uint32, "conform"},
    exceed{YType::uint32, "exceed"},
    violate{YType::uint32, "violate"}
{

    yang_name = "police"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    if (is_presence_container) return true;
    return token_bucket_id.is_set
	|| conform.is_set
	|| exceed.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(token_bucket_id.yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter)
	|| ydk::is_set(violate.yfilter);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (token_bucket_id.is_set || is_set(token_bucket_id.yfilter)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (violate.is_set || is_set(violate.yfilter)) leaf_name_data.push_back(violate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
        token_bucket_id.value_namespace = name_space;
        token_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate")
    {
        violate = value;
        violate.value_namespace = name_space;
        violate.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id.yfilter = yfilter;
    }
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
    if(value_path == "violate")
    {
        violate.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "token-bucket-id" || name == "conform" || name == "exceed" || name == "violate")
        return true;
    return false;
}


}
}


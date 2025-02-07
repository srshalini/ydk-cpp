#ifndef _CISCO_IOS_XR_INFRA_RSI_OPER_
#define _CISCO_IOS_XR_INFRA_RSI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rsi_oper {

class VrfGroup : public ydk::Entity
{
    public:
        VrfGroup();
        ~VrfGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: VrfGroup::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes> nodes;
        
}; // VrfGroup


class VrfGroup::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: VrfGroup::Nodes::Node

        ydk::YList node;
        
}; // VrfGroup::Nodes


class VrfGroup::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class Groups; //type: VrfGroup::Nodes::Node::Groups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node::Groups> groups;
        
}; // VrfGroup::Nodes::Node


class VrfGroup::Nodes::Node::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: VrfGroup::Nodes::Node::Groups::Group

        ydk::YList group;
        
}; // VrfGroup::Nodes::Node::Groups


class VrfGroup::Nodes::Node::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf vr_fs; //type: uint32
        ydk::YLeaf forward_reference; //type: boolean
        class Vrf; //type: VrfGroup::Nodes::Node::Groups::Group::Vrf

        ydk::YList vrf;
        
}; // VrfGroup::Nodes::Node::Groups::Group


class VrfGroup::Nodes::Node::Groups::Group::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string

}; // VrfGroup::Nodes::Node::Groups::Group::Vrf

class Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Groups; //type: Srlg::Groups
        class Interfaces; //type: Srlg::Interfaces
        class Rsips; //type: Srlg::Rsips
        class SrlgMaps; //type: Srlg::SrlgMaps
        class Nodes; //type: Srlg::Nodes
        class InterfaceSrlgNames; //type: Srlg::InterfaceSrlgNames
        class InheritNodes; //type: Srlg::InheritNodes
        class SrlgValues; //type: Srlg::SrlgValues
        class InterfaceDetails; //type: Srlg::InterfaceDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Rsips> rsips;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::SrlgMaps> srlg_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames> interface_srlg_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::InheritNodes> inherit_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::SrlgValues> srlg_values;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceDetails> interface_details;
        
}; // Srlg


class Srlg::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Group; //type: Srlg::Groups::Group

        ydk::YList group;
        
}; // Srlg::Groups


class Srlg::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf group_name_xr; //type: string
        ydk::YLeaf group_values; //type: uint32
        class SrlgAttribute; //type: Srlg::Groups::Group::SrlgAttribute

        ydk::YList srlg_attribute;
        
}; // Srlg::Groups::Group


class Srlg::Groups::Group::SrlgAttribute : public ydk::Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf priority; //type: Priority
        ydk::YLeaf srlg_index; //type: uint16

}; // Srlg::Groups::Group::SrlgAttribute


class Srlg::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Srlg::Interfaces::Interface

        ydk::YList interface;
        
}; // Srlg::Interfaces


class Srlg::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf value_count; //type: uint32
        ydk::YLeaf registrations; //type: uint32
        ydk::YLeafList srlg_value; //type: list of  uint32

}; // Srlg::Interfaces::Interface


class Srlg::Rsips : public ydk::Entity
{
    public:
        Rsips();
        ~Rsips();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rsip; //type: Srlg::Rsips::Rsip

        ydk::YList rsip;
        
}; // Srlg::Rsips


class Srlg::Rsips::Rsip : public ydk::Entity
{
    public:
        Rsip();
        ~Rsip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rsip_name; //type: string
        ydk::YLeaf optical_layer_interface_name; //type: string
        ydk::YLeaf registrations; //type: uint32
        ydk::YLeaf interface_values; //type: uint32
        class SrlgAttribute; //type: Srlg::Rsips::Rsip::SrlgAttribute

        ydk::YList srlg_attribute;
        
}; // Srlg::Rsips::Rsip


class Srlg::Rsips::Rsip::SrlgAttribute : public ydk::Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf priority; //type: Priority
        ydk::YLeaf srlg_index; //type: uint16

}; // Srlg::Rsips::Rsip::SrlgAttribute


class Srlg::SrlgMaps : public ydk::Entity
{
    public:
        SrlgMaps();
        ~SrlgMaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrlgMap; //type: Srlg::SrlgMaps::SrlgMap

        ydk::YList srlg_map;
        
}; // Srlg::SrlgMaps


class Srlg::SrlgMaps::SrlgMap : public ydk::Entity
{
    public:
        SrlgMap();
        ~SrlgMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf srlg_name_xr; //type: string

}; // Srlg::SrlgMaps::SrlgMap


class Srlg::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Srlg::Nodes::Node

        ydk::YList node;
        
}; // Srlg::Nodes


class Srlg::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class SrlgMaps; //type: Srlg::Nodes::Node::SrlgMaps
        class Groups; //type: Srlg::Nodes::Node::Groups
        class InheritNodes; //type: Srlg::Nodes::Node::InheritNodes
        class Interfaces; //type: Srlg::Nodes::Node::Interfaces
        class InterfaceDetails; //type: Srlg::Nodes::Node::InterfaceDetails
        class SrlgValues; //type: Srlg::Nodes::Node::SrlgValues
        class InterfaceSrlgNames; //type: Srlg::Nodes::Node::InterfaceSrlgNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgMaps> srlg_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InheritNodes> inherit_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceDetails> interface_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgValues> srlg_values;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames> interface_srlg_names;
        
}; // Srlg::Nodes::Node


class Srlg::Nodes::Node::SrlgMaps : public ydk::Entity
{
    public:
        SrlgMaps();
        ~SrlgMaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlgMap; //type: Srlg::Nodes::Node::SrlgMaps::SrlgMap

        ydk::YList srlg_map;
        
}; // Srlg::Nodes::Node::SrlgMaps


class Srlg::Nodes::Node::SrlgMaps::SrlgMap : public ydk::Entity
{
    public:
        SrlgMap();
        ~SrlgMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf srlg_name_xr; //type: string

}; // Srlg::Nodes::Node::SrlgMaps::SrlgMap


class Srlg::Nodes::Node::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Srlg::Nodes::Node::Groups::Group

        ydk::YList group;
        
}; // Srlg::Nodes::Node::Groups


class Srlg::Nodes::Node::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf group_name_xr; //type: string
        ydk::YLeaf group_values; //type: uint32
        class SrlgAttribute; //type: Srlg::Nodes::Node::Groups::Group::SrlgAttribute

        ydk::YList srlg_attribute;
        
}; // Srlg::Nodes::Node::Groups::Group


class Srlg::Nodes::Node::Groups::Group::SrlgAttribute : public ydk::Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf priority; //type: Priority
        ydk::YLeaf srlg_index; //type: uint16

}; // Srlg::Nodes::Node::Groups::Group::SrlgAttribute


class Srlg::Nodes::Node::InheritNodes : public ydk::Entity
{
    public:
        InheritNodes();
        ~InheritNodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InheritNode; //type: Srlg::Nodes::Node::InheritNodes::InheritNode

        ydk::YList inherit_node;
        
}; // Srlg::Nodes::Node::InheritNodes


class Srlg::Nodes::Node::InheritNodes::InheritNode : public ydk::Entity
{
    public:
        InheritNode();
        ~InheritNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inherit_node_name; //type: string
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf node_values; //type: uint32
        class SrlgAttribute; //type: Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute

        ydk::YList srlg_attribute;
        
}; // Srlg::Nodes::Node::InheritNodes::InheritNode


class Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute : public ydk::Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf priority; //type: Priority
        ydk::YLeaf srlg_index; //type: uint16

}; // Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute


class Srlg::Nodes::Node::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Srlg::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // Srlg::Nodes::Node::Interfaces


class Srlg::Nodes::Node::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf value_count; //type: uint32
        ydk::YLeaf registrations; //type: uint32
        ydk::YLeafList srlg_value; //type: list of  uint32

}; // Srlg::Nodes::Node::Interfaces::Interface


class Srlg::Nodes::Node::InterfaceDetails : public ydk::Entity
{
    public:
        InterfaceDetails();
        ~InterfaceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceDetail; //type: Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail

        ydk::YList interface_detail;
        
}; // Srlg::Nodes::Node::InterfaceDetails


class Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail : public ydk::Entity
{
    public:
        InterfaceDetail();
        ~InterfaceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf groups; //type: uint32
        ydk::YLeaf nodes; //type: uint32
        class SrlgAttribute; //type: Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute
        class Rsip; //type: Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::Rsip

        ydk::YList srlg_attribute;
        ydk::YList rsip;
        
}; // Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail


class Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute : public ydk::Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf priority; //type: Priority
        ydk::YLeaf source; //type: Source
        ydk::YLeaf source_name; //type: string
        ydk::YLeaf srlg_index; //type: uint16

}; // Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute


class Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::Rsip : public ydk::Entity
{
    public:
        Rsip();
        ~Rsip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rsip_name; //type: string

}; // Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::Rsip


class Srlg::Nodes::Node::SrlgValues : public ydk::Entity
{
    public:
        SrlgValues();
        ~SrlgValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlgValue; //type: Srlg::Nodes::Node::SrlgValues::SrlgValue

        ydk::YList srlg_value;
        
}; // Srlg::Nodes::Node::SrlgValues


class Srlg::Nodes::Node::SrlgValues::SrlgValue : public ydk::Entity
{
    public:
        SrlgValue();
        ~SrlgValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeafList interface_name; //type: list of  string

}; // Srlg::Nodes::Node::SrlgValues::SrlgValue


class Srlg::Nodes::Node::InterfaceSrlgNames : public ydk::Entity
{
    public:
        InterfaceSrlgNames();
        ~InterfaceSrlgNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceSrlgName; //type: Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName

        ydk::YList interface_srlg_name;
        
}; // Srlg::Nodes::Node::InterfaceSrlgNames


class Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName : public ydk::Entity
{
    public:
        InterfaceSrlgName();
        ~InterfaceSrlgName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf srlg_name_xr; //type: string
        ydk::YLeaf srlg_value; //type: uint32
        class Interfaces; //type: Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces> interfaces;
        
}; // Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName


class Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces


class Srlg::InterfaceSrlgNames : public ydk::Entity
{
    public:
        InterfaceSrlgNames();
        ~InterfaceSrlgNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InterfaceSrlgName; //type: Srlg::InterfaceSrlgNames::InterfaceSrlgName

        ydk::YList interface_srlg_name;
        
}; // Srlg::InterfaceSrlgNames


class Srlg::InterfaceSrlgNames::InterfaceSrlgName : public ydk::Entity
{
    public:
        InterfaceSrlgName();
        ~InterfaceSrlgName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf srlg_name_xr; //type: string
        ydk::YLeaf srlg_value; //type: uint32
        class Interfaces; //type: Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces> interfaces;
        
}; // Srlg::InterfaceSrlgNames::InterfaceSrlgName


class Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces


class Srlg::InheritNodes : public ydk::Entity
{
    public:
        InheritNodes();
        ~InheritNodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InheritNode; //type: Srlg::InheritNodes::InheritNode

        ydk::YList inherit_node;
        
}; // Srlg::InheritNodes


class Srlg::InheritNodes::InheritNode : public ydk::Entity
{
    public:
        InheritNode();
        ~InheritNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf inherit_node_name; //type: string
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf node_values; //type: uint32
        class SrlgAttribute; //type: Srlg::InheritNodes::InheritNode::SrlgAttribute

        ydk::YList srlg_attribute;
        
}; // Srlg::InheritNodes::InheritNode


class Srlg::InheritNodes::InheritNode::SrlgAttribute : public ydk::Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf priority; //type: Priority
        ydk::YLeaf srlg_index; //type: uint16

}; // Srlg::InheritNodes::InheritNode::SrlgAttribute


class Srlg::SrlgValues : public ydk::Entity
{
    public:
        SrlgValues();
        ~SrlgValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrlgValue; //type: Srlg::SrlgValues::SrlgValue

        ydk::YList srlg_value;
        
}; // Srlg::SrlgValues


class Srlg::SrlgValues::SrlgValue : public ydk::Entity
{
    public:
        SrlgValue();
        ~SrlgValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeafList interface_name; //type: list of  string

}; // Srlg::SrlgValues::SrlgValue


class Srlg::InterfaceDetails : public ydk::Entity
{
    public:
        InterfaceDetails();
        ~InterfaceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InterfaceDetail; //type: Srlg::InterfaceDetails::InterfaceDetail

        ydk::YList interface_detail;
        
}; // Srlg::InterfaceDetails


class Srlg::InterfaceDetails::InterfaceDetail : public ydk::Entity
{
    public:
        InterfaceDetail();
        ~InterfaceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf groups; //type: uint32
        ydk::YLeaf nodes; //type: uint32
        class SrlgAttribute; //type: Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute
        class Rsip; //type: Srlg::InterfaceDetails::InterfaceDetail::Rsip

        ydk::YList srlg_attribute;
        ydk::YList rsip;
        
}; // Srlg::InterfaceDetails::InterfaceDetail


class Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute : public ydk::Entity
{
    public:
        SrlgAttribute();
        ~SrlgAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_value; //type: uint32
        ydk::YLeaf priority; //type: Priority
        ydk::YLeaf source; //type: Source
        ydk::YLeaf source_name; //type: string
        ydk::YLeaf srlg_index; //type: uint16

}; // Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute


class Srlg::InterfaceDetails::InterfaceDetail::Rsip : public ydk::Entity
{
    public:
        Rsip();
        ~Rsip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rsip_name; //type: string

}; // Srlg::InterfaceDetails::InterfaceDetail::Rsip

class SelectiveVrfDownload : public ydk::Entity
{
    public:
        SelectiveVrfDownload();
        ~SelectiveVrfDownload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class State; //type: SelectiveVrfDownload::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rsi_oper::SelectiveVrfDownload::State> state;
        
}; // SelectiveVrfDownload


class SelectiveVrfDownload::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_svd_enabled; //type: boolean
        ydk::YLeaf is_svd_enabled_cfg; //type: boolean

}; // SelectiveVrfDownload::State

class Priority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf very_low;
        static const ydk::Enum::YLeaf invald;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 0;
            if (name == "high") return 1;
            if (name == "medium") return 2;
            if (name == "low") return 3;
            if (name == "very-low") return 4;
            if (name == "invald") return 5;
            return -1;
        }
};

class Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configured;
        static const ydk::Enum::YLeaf from_group;
        static const ydk::Enum::YLeaf inherited;
        static const ydk::Enum::YLeaf from_optical;
        static const ydk::Enum::YLeaf configured_and_notified;
        static const ydk::Enum::YLeaf from_group_and_notified;
        static const ydk::Enum::YLeaf inherited_and_notified;
        static const ydk::Enum::YLeaf from_optical_and_notified;

        static int get_enum_value(const std::string & name) {
            if (name == "configured") return 1;
            if (name == "from-group") return 2;
            if (name == "inherited") return 4;
            if (name == "from-optical") return 8;
            if (name == "configured-and-notified") return 17;
            if (name == "from-group-and-notified") return 18;
            if (name == "inherited-and-notified") return 20;
            if (name == "from-optical-and-notified") return 24;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RSI_OPER_ */

